#include<stdio.h>
#include<string.h>
int change(char data[]){
	int decimal = 0;
	while(*data){
		decimal = (decimal << 1) | *data - '0';
		data++;
	}return decimal;
}int main(){
	char data[50];
       	int temp;
	printf("Enter a binary number : ");
	fgets(data, sizeof(data), stdin);
	data[strcspn(data, "\n")] = '\0';
	temp = change(data);
	printf("Decimal number : %u\n", temp);
	return 0;
}
