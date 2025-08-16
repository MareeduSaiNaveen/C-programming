#include<string.h>
#include<stdio.h>
int main(){
	int i = 0, ch, num, prev = 0;
	char str[50];
	printf("Enter a string : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	while(str[i] != '\0'){
		if(str[i] >= '1' && str[i] <= '9'){
			num = str[i] - '0';
			ch = prev + num;
			str[i] = (char)ch;
			prev = (int)str[i];
		}else{
			prev = (int)str[i];
		}i++;
	}printf("%s\n", str);
	return 0;
}
