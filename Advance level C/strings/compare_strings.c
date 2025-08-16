#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	char str1[100];
	int f, s, x, i = 0;
	printf("Enter a string 1 : ");
	fgets(str, sizeof(str), stdin);
	printf("Enter a string 2 : ");
	fgets(str1, sizeof(str1), stdin);
	f = strlen(str);
	s = strlen(str1);
	x = f > s? f : s;
	while(i < x){
		if(str[i] != str1[i]){
			printf("Not same\n");
			return 0;
		}i++;
	}printf("Same strings\n");
	return 0;
}
