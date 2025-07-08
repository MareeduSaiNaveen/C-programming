#include<stdio.h>
#include<string.h>
int main(){
	int i, j, a, len, len1;

	printf("Enter string 1 : ");
	char str[100];
	fgets(str, 100, stdin);
	str[strcspn(str, "\n")] = '\0';
	
	printf("Enter string 2 : ");
	char str1[100];
	fgets(str1, 100, stdin);
	str1[strcspn(str1, "\n")] = '\0';

	len = strlen(str);
	len1 = strlen(str1);
	
	printf("len of str : %d\nlen of str1 : %d\n", len, len1);		
	
	if(strncmp(str, str1, len1) == 0){
		printf("Pattern decated\n");
	}else{
		printf("Patter is not found\n");
	}
	return 0;
}
