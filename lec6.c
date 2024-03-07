#include<stdio.h>
#include<ctype.h> //for toupper function 
#include<string.h> //for strcpy and strlen function

int main() 
{
	
	char firstName[10];
	
	printf("Enter your first name: ");
	scanf("%s", firstName);
	
	firstName[0] = toupper(firstName[0]);
	// First letter in string array will be in Capital
	
	printf("Name = %s\n", firstName);
	
	printf("Num. of letters = %d\n", strlen(firstName));
	// Calculate the number of elements in string array
	
	// strcpy + strlen
	char string1[2]; //memory overload but still ok
	char string2[20] = "SE 185";
	strcpy(string1,string2);
	printf("%s", string1);
	printf("\n%d", strlen(string1));
	// output: SE 185 /n 6
	return 0;
}