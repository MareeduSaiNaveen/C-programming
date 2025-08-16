#include<stdio.h>
#include<string.h>
void revrese(char str[], int st, int end){
	char temp;
	if(st < end){
		temp = str[st];
		str[st] = str[end];
		str[end] = temp;
		st++;
		end--;
		revrese(str, st, end);
	}return;
}int main(){
	int len;
	char str[50];
	printf("Enter a string : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	len = strlen(str);
	revrese(str, 0, len- 1);
	printf("Revresed string : %s\n", str);
	return 0;
}
