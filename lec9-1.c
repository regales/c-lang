#include<stdio.h>
#include<stdlib.h>
// for,while statements //example to store userage if not one number keep looping
int main(){

    int userAge;
    int validAge = 0; //loop counter variable

    while(validAge == 0){ //exit condition

        printf("\nEnter your age: ");
        scanf("%d", &userAge);
        if(userAge > 0 && userAge<=130){
            printf("\nThank you for entering your age.");
            //break; // exit from while loop
            validAge = 1; // to break (another way)
        } 
        else {
            printf("\nError.. Try again...");
        }

    }

    printf("\nContinue...");
    return 0;
}