// C program to count from 1 to N
#include <stdio.h>
int main(){
    int end;
    printf("Enter the upper limit number: ");
    scanf("%i", &end);
    for(int count=1; count <= end; count++){
        printf("%i\n", count);
    }
    return 0;
}
