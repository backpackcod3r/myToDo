#include <stdio.h>
#include <string.h>
#include <stdlib.h>

enum { MAXLINES = 30 };

int main(void) {

	int i = 0;
	char lines[MAXLINES][BUFSIZ];

	FILE *fp = fopen("tasks.txt", "r");

	if (fp == 0){
		fprintf(stderr, "failed to open tasks.txt");
		exit(1);
	}
	while ( i < MAXLINES && fgets(lines[i], sizeof(lines[0]), fp)){
		lines[i][strlen(lines[i]) - 1] = '\0';
		i++;
	}
	fclose(fp);

	printf("amount of lines : %d\n", i);
	for (int i = 0; i < strlen(lines[i]); i++){
	printf("%s\n", lines[i]);
	}
	return 0;

}
