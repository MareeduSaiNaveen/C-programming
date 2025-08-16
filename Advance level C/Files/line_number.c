#include<stdio.h>
#include<stdlib.h>
int main(){
	char str[20], ch;
	int i = 1;
	printf("Enter a file name : ");
	scanf("%s", str);
	FILE *fp = fopen(str, "r");
	if(fp == NULL){
		printf("File is not opend\n");
		exit(1);
	}printf("%d : ", i++);
	while((ch = fgetc(fp)) != EOF){
		if(ch == '\n'){
			printf("%c", ch);
			printf("%d :", i++);
		}else{
			printf("%c", ch);
		}
	}return 0;
}
