#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fptrr, *fptrw;
	fptrr = fopen("nature.txt", "r");
	fptrw = fopen("nature_edit.txt", "w");
	if(fptrr == NULL || fptrw == NULL){
		printf("File is not open\n");
		fclose(fptrr);
		fclose(fptrw);
		exit(1);
	}int ch, cap_inc = 1;
	while((ch = fgetc(fptrr)) != EOF){
		if((cap_inc && ch >= 'a' && ch <= 'z')){
			x
				ch = ch - 32;
			cap_inc = 0;
		}fputc(ch, fptrw);
		if(ch == ',' || ch == '.' || ch == '\n'){
			cap_inc = 1;
		}else if(ch != ' ' && ch != '\t'){
			cap_inc = 0;
		}
	}fclose(fptrr);
	fclose(fptrw);
	printf("Capitalized contant is writted\n");
	return 0;
}
