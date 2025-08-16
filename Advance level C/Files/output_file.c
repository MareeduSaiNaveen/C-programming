#include<stdio.h>
int main(){
	FILE *fptr;
	int ret;
	char num;
	fptr = fopen("file.txt", "r");
	if(fptr == NULL){
		printf("File dosent opend\n");
	}while(1){
		ret = fscanf(fptr, "%c", &num);
		if(ret == -1){
			break;
		}printf("%c", num);
	}fclose(fptr);
	return 0;
}
