#include<stdio.h>
int check(char ch){
	return ((ch >= 'A' && ch <= 'Z') && (ch >= 'a' && ch <= 'z'));
}int main(){
	int count = 1, i = 0, j;
	char str[100], prev = 'a';
	printf("Enter a string : ");
	fgets(str, sizeof(str), stdin);
	while(str[i] != '\n'){
		if(str[i] == ' ' && prev != ' '){
			count++;
		}prev = str[i];
		i++;
	}printf("Number of words : %d\n", count);
	return 0;
}
