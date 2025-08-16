#include<stdio.h>
#include<string.h>
int vowels(char ch){
	return(ch == 'a' || ch == 'e' || ch == 'i'|| ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}void main(){
	char str[50];
	int right, len, count = 0, i; 
	char temp;
	printf("Enter a string : ");
	fgets(str, sizeof(str), stdin);
	str[strcmp(str, "\n")] = '\0';
	len = strlen(str);
	for(i = 0; i < len; i++){
		if(vowels(str[i])){
			count++;
		}
	}printf("count = %d\n", count);
}
