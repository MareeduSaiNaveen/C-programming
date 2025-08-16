#include<stdio.h>
#include<string.h>
int main(){
	char str[50];
	int fre[255] = {0}, i, j = 0, len;
	printf("Enter a string : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	for(i = 0;str[i]; i++){
		fre[str[i]]++;
	}len = strlen(str);
	for(i = 0; i < len+1; i++){
		if(fre[str[i]] >= 1){
			str[j++] = str[i];
			fre[str[i]] = 0;
		}
	}str[j] = '\0';
	printf("str = %s\n", str);
	return 0;
}
