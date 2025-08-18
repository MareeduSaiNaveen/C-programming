#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char *str;
	int size;
	printf("Enter a string : ");
	scanf("%d", &size);
	str = malloc(sizeof(char) * sizeof(int));
	if(str == NULL){
		printf("Memory allocation is failed\n");
	}else{
		printf("Momoey allocated is succecafully\n");
	}return 0;
}
