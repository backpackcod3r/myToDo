// myToDo.c
// Stephane
//

#include <stdio.h>

char *inptText;
void write_data(const char *filepath, const char *data)
{
	FILE *file = fopen(filepath, "a");
	if (file != NULL)
	{
		fputs(data, file);
		fclose(file);
	}
}

void getInput(void) {
	printf("What is your input?\n");
	scanf("%s", inptText);
}

#define CHUNK 1024 // read 1024 bytes at a time

void read_data(const char *filepath){
	char buf[CHUNK];
	
	size_t nread;
	
	FILE *file = fopen(filepath, "r");
	if (file) {
		while((nread = fread(buf, 1, sizeof buf, file)) > 0)
			fwrite(buf, 1, nread, stdout);
		if (ferror(file)){

		}
		fclose(file);
	} else {
		// if the file doesn't exist.
		// close file stream and exit app.
		printf("File does not exist, closing stream");
		fclose(file);
	}
}

int main() {
	getInput();	
	write_data("here.txt",inptText);
//
	
	read_data("here.txt");
}
