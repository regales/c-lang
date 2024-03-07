//conditional statement & logical operators (Branches)

#include<stdio.h>
#include<stdlib.h> //to use exit function

int main (void){
    int userNum;

    printf("Enter a positive integer: ");
    scanf("%d", &userNum);

    if(userNum < 0) {
        
        printf("Error.....Invalid input. Try again.", userNum); //no negative numbers from conditional
        exit(0);//forced termination

    }

    else if(userNum % 2 == 0) {

        if(userNum % 5 == 0) { //nested conditions (conditions within conditions)

            printf("It's an even number and divisible by 5.\n");
        }
        
        else {

            printf("It's an even number but not divisible by 5.\n");
        }
    }

    else {
        
        if(userNum % 7 == 0) { //nested conditions

        printf("It's an odd number and divisible by 7.\n");

        }

        else {
            
            printf("Its an odd number but not divisible by7.\n");
        }

    }
    return 0;
}