//conditional statement & logical operators (Branches)
#include<stdio.h>
#include<stdlib.h> //to use exit function

int main (void){
    int age;

    printf("Enter your age:/n");
    scanf("%d", &age);

    if(age >0 && age <130) {
        
        printf("Your age %d, is more than 0 and less than 130/n", age); //age >0 and age < 130

    }

    else if(age<0 || age>130) {

        printf("Age cannot be less than 0 or more than 130/n");

        exit(0);//fprced termination

    }
    return 0;
}