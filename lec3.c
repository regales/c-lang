#include<stdio.h>

int main(void) {
	
	int students; //variable declaration to store number of students, (= number) to initialize a value
	
	printf("Enter number of students = ");
	scanf("%d", &students); //user inputs value, good practise to put after asking input
	
	printf("Number of students = %d\n", students); //%d means parson d - looking for argument that has initialized value
	
	printf("Number of lab sections = %d\n", students/20); //divide
	
	float x = 1.2; //float and double for fractional numbers
	double y = 2.3;
	char myLetter = 'P'; //char for character type data (one single letter) only use ''
	
	printf("%lf\n %d", x+y, letter);
	
	return 0;
	
}