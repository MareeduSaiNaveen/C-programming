#include<string.h>
#include<stdio.h>
int main(){
	int i, j, len;
	char str[50], ch;
	printf("Enter a string : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	len = strlen(str)-1;
	for(i = 0; i < len; i++){
		for(j = 0; j < len-i; j++){
			if(str[j] > str[j+1]){
				ch = str[j];
				str[j] = str[j+1];
				str[j+1] = ch;
			}
		}
	}printf("String : %s\n", str);
	return 0;
}
