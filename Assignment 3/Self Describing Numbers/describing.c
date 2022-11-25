#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){

    FILE* numbers_file;
    numbers_file = fopen("selfdescribing.in", "r");
     if (numbers_file==NULL){
        // to check if the file was opened successfully
            printf("File not opened, check file directory");
            exit(1);
        }

    int test_cases;
   //first line of testcase successfully extracted
    fscanf(numbers_file, "%d", &test_cases);
   
    int list_num[100];
    int count = 0;
    int length;
    char self_describing = 'T';

    for (int i=0; i<test_cases; i++){
    // loop through the number of testcases
        char integer[100];
        fscanf(numbers_file, "%s", integer);
        length = strlen(integer);
    // assign length of text to a variable
        for (int j = 0; j < length; j++) {
    // append each character to an array
            list_num[j] =integer[j] - '0';
        }
        for (int counter = 0; counter< length; counter++) {
            for (int i = 0; i< length; i++) {
                if (list_num[i] == counter) 
                count++;
            }
            if(count == list_num[counter]){
                self_describing = 'T';
            }
            else{
                self_describing = 'F';
                printf("Not Self-Describing\n");
                break;
            }
            count = 0;
            if (self_describing!= 'F'){
                printf("Self-Describing\n");
                break;
            }
        }
        
    }
    fclose(numbers_file);
    return 0;
}