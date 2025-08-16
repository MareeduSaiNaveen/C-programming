#include<stdio.h>
int main(){
	char str[20];
	printf("Enter a file name : ");
	scanf("%s", str);
	FILE *fp = fopen(str, "r");
	if(fp != NULL){
		printf("File %s is exists\n", str);
		fclose(fp);
	}else{
		printf("File %s is not exists\n", str);
	}return 0;
}
