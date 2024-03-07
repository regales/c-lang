#include <stdio.h>

//function declaration (made a function on ur own)
double sqr(double n, int p);


int main (void) {
	double userNum1;
	int userNum2;
	
	printf("Enter two number: ");
	scanf("%lf %d", &userNum1, %userNum2);
	
	// double result = sqr(userNum); //function call
	
	printf("Result = %lf", sqr(userNum1, userNum2)); // function call (used the function u created)
	
	return 0;
}

//function definition (making a function to use above)
double sqr(double n, int p){
	
	//double r = n * n;
	
	return n * p + 20; //can just code the how the function work here if lazy
}