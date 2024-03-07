#include<stdio.h> //include input output header file

/*
@copyright info
author, team members
date: 1/18 (Lec02)
required files
inputs, outputs, or anything else...
*/

//1
int main(void){  
	//statements....
	//printf("string format", argument);
	
	printf("Hello world!"); //; means end of statement
	
	return 0;
}

//2 (no function)
int main(){
	//statements...
	return 0;
}

//3 (no need return 0 because not returning any values)
void main (void){
	//statements
}


/*
pwd 					(check current directory cygwin is looking at)
cd /cygdrive/c/se185 	(change directory)
ls 						(view content of current directory)
gcc prog1.c -otest 		(compile)
./test 					(run the code)
*/

/*
main function = int main(void){}
void means not giving any input
can be just ()
*/