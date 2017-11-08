//	read.c
//	stephane
//	03/11/17

//	standard c include headers
#include <stdio.h>

	//declare CHUNK Variable and SIZE
#define CHUNK 1024 // read 1024 bytes at a time

	// read from file function
void readFile(const char *filepath){
	char buf[CHUNK];

	size_t nread;

	FILE *file = fopen(filepath, "r");
	if(file) {
		while ((nread = fread(buf, 1, sizeof buf, file)) > 0)
			fwrite(buf, 1, nread, stdout);
		if (ferror(file)){
			printf("error... closing file\n");
			fclose(file);
		}
		fclose(file);
	}
}



	// main function
int main() {

	//	call the read from file function here
	readFile("file.txt");

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
