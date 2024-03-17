#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){
    FILE*file;
    char*message = "Hello World!";
    char read_message[100] = {0};

    //write a message to file
    file = fopen("hello_world.txt","w");
    if (file == NULL)
    {
        printf("Error: Unable to open file to write.\n");
        return 1;
    }
    fwrite(message,sizeof(char),strlen(message),file);
    fclose(file);

    //read a message from file
    file = fopen("hello_world.txt","r");
    if (file == NULL)
    {
        printf("Error: Unable to open file to read.\n");
        return 1;
    }
    fread(read_message,sizeof(char),strlen(message),file);
    fclose(file);

    // print the message
    printf("%s",read_message);
    return 0;
}
