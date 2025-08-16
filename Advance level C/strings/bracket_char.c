#include<stdio.h>
#include<string.h>
char stack[100];
int top = -1;
char push(char ch){
	stack[++top] = ch;
}char pop(){
	if(top >= 0)
		return stack[top--];
	return '\0';
}int ismatching(char open, char close){
	return((open == '{' && close == '}') || (open == '(' && close == ')') || (open == '[' && close == ']') || (open ==  '<' && close == '>'));
}int main(){
	char str[100];
	printf("Enter a string : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	for(int i = 0; str[i]; i++){
		if((str[i] == '[') || (str[i] == '{') || (str[i] == '<') || (str[i] == '(')){
			push(str[i]);
		}else if((str[i] == ']') || (str[i] == '}') || (str[i] == '>') || (str[i] == ')')){
			char open = pop();
			int valid = ismatching(open, str[i]);
			if(!valid){
				printf("Not valid\n");
				break;
			}
		}
	}if(top == -1){
		printf("Valid\n");
	}else{
		printf("Not valid\n");
	}return 0;
}
