// switch statement
#include<stdio.h>
#include<stdlib.h>

int main (void){
    char operator;
    int num1, num2;

    printf("Enter an operator(+ - * /): ");
    scanf("%c", &operator);

    if( !( (operator == '+') || (operator == '-') || (operator == '*') || (operator == '/') ) ){ // if not any of all these operators

        printf("Invalid operator.......Try again!");
        exit(0);
    }

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    switch(operator){
        case '+':
        printf("%d + %d = %d", num1, num2, num1+num2);
        break;//exit(0)
    }
    return 0;
}