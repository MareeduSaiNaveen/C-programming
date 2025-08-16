#include<stdio.h>
int count(char str[]){
	int i = 0;
	while(str[i] != '\0'){
		i++;
	}return i-1;
}int main(){
	int end, mid, i;
	char str[50], temp;
	printf("Enter a string : ");
	scanf("%s", str);
	end = count(str);
	mid = end /2;
	while(end > mid){
		temp = str[end];
		str[end] = str[mid];
		str[mid] = temp;
		end--;
		mid++;
	}printf("%s\n", str);
	return 0;
}
