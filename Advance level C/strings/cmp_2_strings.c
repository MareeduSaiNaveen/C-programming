#include<string.h>
#include<stdio.h>
int main(){
	char str1[50];
	char str2[50];
	printf("Enter a string1 : ");
	fgets(str1, sizeof(str1); stdin);
	str1[strcspn(str1, "\n")] = '\0';
	printf("Enter a string2 : ");
	fgets(str1, sizeof(str2); stdin);
	str1[strcspn(str1, "\n")] = '\0';
