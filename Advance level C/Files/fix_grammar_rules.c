#include<stdio.h>
#include<stdlib.h>
int check(char ch){
	return (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z');
}int main(){
	FILE *fptrw, *fptrr;
	int change = 1;
	char ch;
	fptrr = fopen("nature.txt", "r");
	fptrw = fopen("nature_chnage.txt", "w");
	if(fptrr == NULL){
		printf("File not opend\n");
		exit(1);
	}if(fptrw == NULL){
		fclose(fptrr);
		printf("File not open\n");
		exit(1);
	}while((ch = fgetc(fptrr)) != EOF){
		if(change && check(ch)){
			ch = ch - 32;
			change = 0;
		}if(ch == '.' || ch == ','){
			change = 1;
		}fputc(ch, fptrw);
	}fclose(fptrr);
	fclose(fptrw);
	printf("chages are done\n");
	return 0;
}
