#include <stdio.h>

int main (void) {
	char firstName [4]; //max character we can store is 3 (4th is null \0), if more, computer will store in memory (memory overflow)
	
	printf("Enter your first name: ");
	scanf("%s", &firstName); // no need & symbol for char
	
	firstName[1] = "C" //changes the char value in the second array block
	printf("Name = %s", firstName);
	
	return 0;
}