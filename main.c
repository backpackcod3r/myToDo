//	myToDo.c App
//	stephane - 06/11/2017
//
//	main.c

#include <stdio.h>
#include <string.h>

#define CHUNK 1024	//read 1024 bytes at a time

// Functions
	// print the input character 51 times
void fiftyOneLoop(char *s) {
	for ( int i = 0; i < 51; i++){
		// fputs - prints s 51 times to stdout without '\n'
		fputs(s,stdout);
	}
	// once the loop has completed 50 times, print new line
	printf("\n"); 
}


int main() {
	int selection;

	fiftyOneLoop("=");		// print = 50 times
	printf("My To Do:\n");		// app heading
	fiftyOneLoop("=");		// print = 50 times
	printf("Options:\n");		// options heading
	fiftyOneLoop("-");
					// print options
	printf("1. Add Task | 2. Edit Task | 3. Delete Task\n");
	fiftyOneLoop("-");		// print - 50 times

	// get user input
	// print to console
	printf("Selection Option: ");
	// store user input
	scanf("%d", &selection);
	fiftyOneLoop("-");

		//	switch to flow through our options 
		//	if anything other than 1,2,3 is selected
		//	invalid selection is printed to console
	switch(selection){
	case 1:
		printf("\nSelected %d : Add Task\n",selection);
		break;
	case 2:
		printf("\nSelected %d : Edit Task\n",selection);
		break;
	case 3:
		printf("\nSelected %d : Delete Task\n",selection);
		break;

	default:
		printf("\nInvalid Selection\n");
	}
	/*
	 * previous selector outputs logic *

	if (selection < 4){
		printf("\n");
		printf("Selection %d\n", selection);
	}
	else {
		printf("\n");
		printf("Invalid Selection\n");
	}
	*/
	
	
}
