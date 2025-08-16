#include<stdio.h>
int main(){
	FILE *fptr;
	int ch;
	fptr = fopen("file.txt", "w");
	if(fptr == NULL){
		printf("File didnt open succfully\n");
	}printf("Enter ctrl+z/ ctrl+d to stope\nEnter a char : ");
	while((ch = getchar()) != EOF){
		fputc(ch, fptr);
	}fclose(fptr);
	printf("\n");
	fptr = fopen("file.txt", "r");
	if(fptr == NULL){
		printf("File didnt open succfully\n");
	}while((ch = fgetc(fptr)) != EOF){
		printf("%c ", ch);
	}printf("\n");
	fclose(fptr);
	return 0;
}
