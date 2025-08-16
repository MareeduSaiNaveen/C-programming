#include<stdio.h>
#include<string.h>
int main(){
	int i = 0, fre[255];
	char str[50];
	memset(fre, 0, sizeof(fre));
	printf("Enter a string : ");;
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	while(str[i]){
		fre[(unsigned char)str[i]]++;
		i++;
	}for(i = 0; i < 256; i++){
		if(fre[i] > 0){
			printf("%c -> %d\n",i, fre[i]);
		}
	}return 0;
}
