#include<stdio.h>

int main (void) {
	
	int a = 2;
	int b = 3;
	
	float r = (float)a / (float)b; //integer division //explicit conversion
	
	//division is technically decimal numbers, so use float or double
	
	float y = 345 / r; 
	
	printf("Result 1 = %0.2f\n", r);
	printf("Result 2 = %0.2f\n", y);
	
	//%0.2f means in two decimal numbers
	
	return 0;
}