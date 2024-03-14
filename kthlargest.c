#include <stdio.h>
#include <stdlib.h>
#include <string.h>

///Kth largest
#include <stdio.h>

int findKthLargest(int* nums, int numsSize, int k) {
    int i, j, temp;
    for (i = 0; i < numsSize - 1; i++) {
        for (j = i + 1; j < numsSize; j++) {
            if (nums[i] <= nums[j]) {
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }

    for (i = 0; i < numsSize; i++) {
        printf("%d ", nums[i]);
    }

    return nums[k - 1];
}

int main() {
    int arr[100], N;
    scanf("%d", &N);

    printf("array: ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int p = findKthLargest(arr, N, 1);
    printf("\n%d", p);

    return 0;
}
