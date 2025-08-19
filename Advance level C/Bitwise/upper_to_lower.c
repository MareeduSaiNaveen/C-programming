#include<stdio.h>
#include<string.h>
int main(){
	char str[50];
	int i = 0;
	printf("Enter a string  : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	while(str[i]){
		if(str[i] >= 'A' && str[i] <= 'Z'){
			str[i] = str[i] | 0x20;
		}i++
	}printf("string : %s\n", str);
	return 0;
}
