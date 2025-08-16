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
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}i = 0;
	while(str[i] != '\0'){
		putchar(str[i]);
		i++;
	}printf("\n");
	return 0;
}
