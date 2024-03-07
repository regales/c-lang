#include<stdio.h>
#include<stdlib.h>
// for,while statements
int main(){

    int curNum;
    int curSum = 0;
    int i; //loop counter variable

    for(i=0; i<10; ++i){
        printf("\nEnter number %d", i+1);
        scanf("%d", &curNum);
        curSum += curNum; //curSum = curSum +curNum;
    }
    printf("\nResult = %d", curSum);
    return 0;
}