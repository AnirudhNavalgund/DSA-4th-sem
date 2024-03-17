#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    FILE *input, *output;
    input = fopen("rand-no-input.txt", "w");
    if (input == NULL) {
        perror("Error");
        return 1;
    }

    int num, *ptr;
    printf("Enter number of integers: ");
    scanf("%d", &num);
    ptr = (int *)malloc(num * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    int upper, lower;
    printf("Enter the lower limit of range: ");
    scanf("%d", &lower);
    printf("Enter the upper limit of range: ");
    scanf("%d", &upper);

    for (int i = 0; i < num; i++) {
        ptr[i] = rand() % (upper - lower + 1) + lower;
        //printf("%d\n", ptr[i]);
        fwrite(&ptr[i], sizeof(int), 1, input);
    }

    fclose(input);

    int arr[100] = {0};

    input = fopen("rand-no-input.txt", "r");
    if (input == NULL) {
        perror("Error");
        return 1;
    }

    for (int i = 0; i < num; i++) {
        fread(&arr[i], sizeof(int), 1, input);
    }

    fclose(input);

    printf("Numbers read from file:\n");
    for (int i = 0; i < num; i++) {
        printf("%d\n", arr[i]);
    }

    free(ptr);

    return 0;
}
