// create.c
// backpackcod3r
// 08/11/17
//
// CREATE
// - request user input
// - assign to memory
// - store input into file
// END CREATE


#include <stdio.h>

void getInput(void){
	char string[100];
	printf("\nEnter Text : ");
	scanf("%[^\n]", string);


	printf("\nEntered string: %s\n", string);
}

int main(){
	
	getInput();

}
