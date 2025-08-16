#include<stdio.h>
#include<stdlib.h>
int main(){
	int count = 0;
	char ch;
	FILE *fptr;
	fptr = fopen("nature.txt", "r");
	if(fptr == NULL){
		printf("File as not opend\n");
		exit(1);
	}while((ch = fgetc(fptr)) != EOF){
		if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z'){
			while(((ch = fgetc(fptr)) != EOF)&&(ch != '\n'));
			count++;
		}
	}fclose(fptr);
	printf("Number of lines : %d\n", count);
	return 0;
}
