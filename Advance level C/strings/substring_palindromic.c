#include<stdio.h>
#include<string.h>
int ispalindrom(char *str, int start, int end){
	while(start < end){
		if(str[start] != str[end]){
			return 0;
		}start++;
		end--;
	}return 1;
}void longestPalindromicSubstring(char* str){
	int len, maxlen, startIndex, i, j;
	len = strlen(str);
	maxlen = 1;
	startIndex = 0;
	for(i = 0; i < len; i++){
		for(j = i; j < len; j++){
			if(ispalindrom(str, i, j) && (j - i + 1) > maxlen){
				startIndex = i;
				maxlen = j - i + 1;
			}
		}
	}printf("Longst Palindrom substring\n");
	for(i = startIndex; i < startIndex + maxlen; i++){
		putchar(str[i]);
	}printf("\n");
}void main(){
	int len;
	char str[50];
	printf("Enter a string : ");
	fgets(str, sizeof(str), stdin);
	len = strlen(str)-1;
	if(str[len] == '\n'){
		str[len] = '\0';
		len--;
	}longestPalindromicSubstring(str);
}
