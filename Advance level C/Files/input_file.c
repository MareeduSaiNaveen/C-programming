#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fptr;
	int num;
	fptr = fopen("file.txt", "w");
	if(fptr == NULL){
		printf("File didnt opend\n");
		exit(1);
	}while(1){
		scanf("%d", &num);
		if(num == 0){
			break;
		}fprintf(fptr, "%d", num);
	}return 0;
}
