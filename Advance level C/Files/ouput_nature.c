#include<stdio.h>
#include <stdlib.h>

int main(){
	FILE *fptr = fopen("nature.txt", "r");
	int ch = 0, new_line = 0, ret;
	if(fptr == NULL){
		printf("File opend succfully\n");
		exit(1);
	}while(((ret = fgetc(fptr)) != EOF)){
		ch++;
		if(ret == '\n'){
			new_line++;
		}printf("%c", ret);
	}printf("New_line : %d\nNo of char : %d\n", new_line, ch);
	fclose(fptr);
	return 0;
}
