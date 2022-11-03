// C program to say hello world to your lecturer
#include <stdio.h>

int main() {
    char name[30];
    printf("What is your name?");
    scanf("%s", &name);
    printf("Hello World, %s.", name);
    return 0;
}
