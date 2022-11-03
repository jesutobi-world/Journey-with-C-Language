// C program to receive 10 names
#include <stdio.h>
int main(){
    int counter;
    char names[10][50];
    for (counter=1; counter<11; counter++){
        printf("Name %i: ", counter);
        scanf("%s", &names[counter -1]);
    }
     printf("The names are ");
    for(int count=0; count < 9; count++){
        printf("%s, ", names[count]);
    }
    printf("%s.", names[9]);
    return 0;
}
