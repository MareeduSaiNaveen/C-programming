#include<stdio.h>
#include<string.h>
int vowels(char ch){
	return(ch == 'a' || ch == 'e' || ch == 'i'|| ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}void main(){
	char str[50];
	int right, left = 0; 
	char temp;
	printf("Enter a string : ");
	fgets(str, sizeof(str), stdin);
	right = strlen(str) - 1;
	if(str[right] == '\n'){
		str[right] = '\0';
		right--;
	}while(left < right){
		while(left < right && !vowels(str[left])) left++;
		while(left < right && !vowels(str[right])) right--;
		if(left < right){
			temp = str[left];
			str[left] = str[right];
			str[right] = temp;
			left++;
			right--;
		}
	}printf("String : %s\n", str);
}
