#include<stdio.h>
#include<stdlib.h> //to use rand() or srand()


int main(){

	printf("random number 1 is %d\n",rand()%10);
	printf("random number 2 is %d\n",rand()%100);
	printf("random number 3 is %d\n",rand()%1000);
	
	return 0;
}