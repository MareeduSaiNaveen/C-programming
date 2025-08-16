#include<stdio.h>
#include<string.h>
int main(){
	int len, i = 0, j;
	char str[50], temp;
	printf("Enter a string : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	j = strlen(str) - 1;
	while(i < j){
		if(str[i] != str[j]){
			printf("String is not palindrom\n");
			return 0;
		}i++;
		j--;
	}printf("String is palindrom\n");
	return 0;
}
