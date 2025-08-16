#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fptrr, *fptrw;
	fptrr = fopen("corr_file.c", "r");
	fptrw = fopen("rem_corr_file.c", "w");
	char ch, next;
	while((ch = fgetc(fptrr)) != EOF){
		if(ch == '/'){
			next = fgetc(fptrr);
			if(next == '/'){
				while((ch = fgetc(fptrr)) != EOF && ch == '\n'){
					fputc('\n', fptrr);
				}
			}else if('*'){
				int prev = 0;
				while((ch = fgetc(fptrr) != EOF)){
					if(prev == '*' && ch == '/'){
						break;
					}prev = ch;
				}
			}else{
				fputc(ch, fptrw);
				fputc(next, fptrw);
			}
		}else{
			fputc(ch, fptrw);
		}
	}fclose(fptrr);
	fclose(fptrw);
	return 0;
}
