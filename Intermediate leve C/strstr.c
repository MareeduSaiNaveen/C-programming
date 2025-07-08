#include<stdio.h>
#include<string.h>
int main(){
	int i, j, a, len, len1;
	
	printf("Enter a string 1 : ");
	char str[100];
	fgets(str, 100, stdin);
	str[strcspn(str, "\n")] = '\0';
	
	printf("Enter a string 2 : ");
	char str1[100];
	fgets(str1, 100, stdin);
	str1[strcspn(str1, "\n")] = '\0';
	
	len = strlen(str);
	len1 = strlen(str1);
	
	printf("len of str : %d\nlen of str1 : %d\n", len, len1);
	char *p = strstr(str, str1);
	if(p == NULL){
		printf("Not Found\n");
	}while(p){
		printf("Index of string %ld\n", p- str);
		p = strstr(p+1, str1);
	}
	return 0;
}
