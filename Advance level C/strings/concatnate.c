#include<stdio.h>
#include<string.h>
int main(){
	int i = 0, j = 0;
	char str1[50];
	char str2[50];
	printf("Enter a string 1 : ");
	fgets(str1, sizeof(str1), stdin);
	printf("Enter a string 2 : ");
	fgets(str2, sizeof(str2), stdin);
	str1[strcspn(str1,"\n")] = '\0';
	str2[strcspn(str2,"\n")] = '\0';
	while(str1[i] != '\0'){
		i++;
	}while(str2[j] != '\0'){
		str1[i] = str2[j];
		i++;
		j++;
	}i = 0;
	while(str1[i] != '\0'){
		putchar(str1[i]);
		i++;
	}printf("\n");
	return 0;
}
