#include <stdio.h>
void reverse();
int main() {
    printf("Enter a sentence: ");
    reverse();
    return 0;
}

void reverse() {
    char letter;
    scanf("%c", &letter);
    if (letter != '\n') {
        reverse();
        printf("%c", letter);
    }
}
