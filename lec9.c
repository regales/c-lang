#include<stdio.h>
#include<stdlib.h>
// for,while statements
int main(){
    int curNum;
    int curSum = 0;
    int numInput = 1;//loop counter variable

    while(numInput <= 10) { // exit condition

        printf("\nEnter number %d", numInput);
        scanf("%d", &curNum);
        curSum = curSum + curNum;

        numInput++; //update loop counter

    }
    printf("\nResult = %d", curSum);

    return 0;
}