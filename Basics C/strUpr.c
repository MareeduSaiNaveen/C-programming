#include<stdio.h>
int main(){
	char str[] = "naveen";
	for(int i = 0; str[i] != '\0'; ++i){
		if(str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	printf("Changing low case to upper case : %s\n",str);
	return 0;
}
