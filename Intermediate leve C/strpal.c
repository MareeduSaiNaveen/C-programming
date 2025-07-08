#include<stdio.h>
#include<string.h>
int main(){
	int i, len, fake = 0;
	char str[20];
	printf("Enter a string to check : ");
	scanf("%s",str);
	len = strlen(str);
	for(i = 0; i < len/2; i++){
		if(str[i] != str[len-i-1]){
			fake = 1;
			break;
		}
	}
	if(fake){
		printf("It is not pal\n");
	}else{
		printf("It is pala\n");
	}
	return 0;
}
