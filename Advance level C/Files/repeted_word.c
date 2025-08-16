#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	FILE *fptrr;
	fptrr = fopen("nature.txt", "r");
	if(fptrr == NULL){
		printf("File didnt opend\n");
		exit(1);
	}char str[10], ch;
	int i = 0, count = 0;
	printf("Enter a string : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	int len = strlen(str);
	while((ch = fgetc(fptrr)) != EOF){
		i = 0;
		if(str[i] == ch){
			i = 1;
			while((ch = fgetc(fptrr)) != EOF && ch == str[i]){
				i++;
			}if(i == len){
				count++;
			}
		}
	}fclose(fptrr);
	printf("count : %d\n", count);
	return 0;
}
