#include<stdio.h>
#include<string.h>
int main(){
	int i = 0;
	char str1[50];
	char str2[50];
	printf("Enter a string in 1: ");
	fgets(str1, sizeof(str1), stdin);
	str1[strcspn(str1, "\n")] = '\0';
	printf("String 2\n");
	while(str1[i] != '\0'){
		str2[i] = str1[i];
		putchar(str2[i]);
		i++;
	}str2[i] = '\0';
	printf("\n");
	return 0;
}
