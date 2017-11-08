//	write.c
//	backpackcod3r

#include <stdio.h>
#include <string.h>

	//	write to file function
void writeFile(const char *filepath, const char *data){
	//	open the file object
	FILE *file = fopen(filepath, "a");
		// check if the file exists and 
		// it's not NULL;
	if (file != NULL){
		fputs(data, file);
		fclose(file);
	}	
		// if the file is NULL
		// print to screen and close the stream, cleanup
	else { 
		printf("file is Null, closing stream");
		fclose(file);
	}
}

	// main function
int main() {
	// call the write file function
	//
	
	// initialize char array variables
	char strings[2][1024];

	// request user input
		// target save file name
	printf("file name: \n");
		// user terminal input
		// scan and assign to variable
	//scanf("%s", strings[0]);
	fgets(strings[0], sizeof(strings[0]), stdin);
	strtok(strings[0], "\n");
	// request string to pass to file
	printf("Insert String:\n");
		// user terminal input
		// scan and assign to variable
	
	fgets(strings[1],sizeof(strings[1]),stdin);
	//strtok(strings[1], "\n");
	//scanf("%s", strings[1]);
	
	printf("\nfilename:%sstring:\n%s", strings[0], strings[1]);	
	//	call the write function
	//	pass the recorded variables as function arguments
	writeFile(strings[0],strings[1]);
	

/*

	char variable[10][100];
	printf("Enter Strings\n:");
	for (int i = 0; i < 10; i++){
		scanf("%100s\n", variable[i]);
	}
	for (int t = 0; t < 10; t++){
		printf("\n%100s", variable[t]);
	}
*/

}
/*
 * DOCUMENTATION:--
 * ---------------------------------------------
 *
 *  writeFile( filepath, "insert string here" );
 *
 *  OUTPUT:-
 *
 *  	filepath = text.txt
 *
 *  	text.txt
 *  =>  insert string here
 *
*/  
