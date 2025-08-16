#include<stdio.h>
int main(){
	int i = 0, a = 0, d = 0, s = 0;
	char str[100];
	printf("Enter a string : ");
	fgets(str, sizeof(str), stdin);
	while(str[i] != '\n'){
		if(str[i] > 64 && str[i] < 91 || str[i] > 96 && str[i] < 123){
			a++;
		}else if(str[i] > 47 && str[i] < 58){
			d++;
		}else{
			s++;	
		}i++;
	}printf("Alphabets = %d\nDigits = %d\nspecial = %d\n", a, d, s);
	return 0;
}
