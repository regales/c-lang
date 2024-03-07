// password maker
// uses strlen to count string length
// uses strcmp to compare pass1, pass2
#include<stdio.h>
#include<stdlib.h>
#include<string.h> //string

int main (void){
    char pass1[20];
    char pass2[20];

    printf("Enter a password at least four digits long: ");
    scanf("%s", pass1); //string type

    if(strlen(pass1) >= 4){

        printf("Enter the password again: ");
        scanf("%s", pass2);
        
        if(strcmp(pass1,pass2) == 0){
            printf("Success! Strong password.");
        }
        else {
            printf("Password didn't match. Try again!");
        }

    }
    else {
        printf("Error, Please type in four digits");
        exit(0);
    }

    return 0;
}