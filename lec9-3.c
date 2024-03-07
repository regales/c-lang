#include<stdio.h>

void main(){
    char name[40];
    int i;

    for(i=0; i<40; ++i){
        printf("\nEnter user name-%d", i);
        scanf("%s", &name);
        printf("\nPrinting User-%d name: %s", i, name);
    }
// 
int i = 1;
    while(i<=40){
        printf("\nEnter user name-%d", i);
        scanf("%s", &name);
        printf("\nPrinting User-%d name: %s", i, name);

        ++i;
    }
}