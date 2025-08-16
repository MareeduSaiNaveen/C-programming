#include<stdio.h>
#include<stdlib.h>
char check(char ch){
	return !((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'));
}int main(){
	int count = 0, inword = 0;
	char ch;
	FILE *fptr;
	fptr = fopen("nature.txt", "r");
	if(fptr == NULL){
		printf("File as not opend\n");
		exit(1);
	}while((ch = fgetc(fptr)) != EOF){
		if(check(ch)){
			if(inword){
				count++;
				inword = 0;
			}
		}else{
			inword = 1;
		}
	}if(inword){
		count++;	
	}fclose(fptr);
	printf("Number of word : %d\n", count);
	return 0;
}
