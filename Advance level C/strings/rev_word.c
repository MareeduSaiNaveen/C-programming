#include<stdio.h>
#include<string.h>
int main(){
	int st = 0, i = 0, end, x = 0;
	char str[50], temp;
	printf("Enter a string : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str,"\n")] = '\0';
	while(str[i] != '\0'){
		if(str[i] == ' '){
			st = x;
			end = i-1;
			while(st < end){
				temp = str[st];
				str[st] = str[end];
				str[end] = temp;
				st++;
				end--;
			}x = i + 1;
		}i++;
	}st = x;
	end = i - 1;
	while(st < end){
		temp = str[st];
		str[st] = str[end];
		str[end] = temp;
		st++;
		end--;
	}i = 0;
	while(str[i] != '\0'){
		putchar(str[i]);
		i++;
	}printf("\n");
	return 0;
}
