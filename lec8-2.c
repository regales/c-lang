#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

//write your conditional statements

    if(age < 13 && age>= 0)
    {
        printf("Child");
    }
    else if(age>= 13 && age<=19 )
    {
        printf("Teenager");
    }
    else if(age >=20 && age<=60)
    {
        printf("Adult");
    }
    else if(age>60)
    {
        printf("Senior");
    }
    return 0;
}