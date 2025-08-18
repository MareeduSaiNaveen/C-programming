#include<stdio.h>
#include<string.h>
int check(char open, char close){
	return((open == '(' && close == ')') || (open == '{' && close == '}') || (open == '<' && close == '>') || (open == '[' && close == ']'));
}int main(){
	int i = 0, valid = 0, j = 0, count = 0;
	char str[100];
	printf("Enter a string : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	while(str[i] != '\0'){
		if(str[i] == '{' || str[i] == '[' || str[i] == '(' || str[i] == '<'){
			j = i+1;
			while(str[j] != '\0'){
				valid = check(str[i], str[j]);
				if(valid){
					count = 1;
					break;
				}else{
					count = 0;
				}j++;
			}
		}i++;
	}if(count){
		printf("Valid string\n");
	}else{
		printf("Not valied\n");
	}return 0;
}
