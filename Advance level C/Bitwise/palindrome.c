#include<stdio.h>
int lenth(int data){
	int count = 0;
	while(data > 0){
		count++;
		data = data >> 1;
	}return count;
}int ispalindrome(int data){
	int len, i, rev = 0, temp;
	temp = data;
	len = lenth(data);
	for(i = 0; i < len; i++){
		rev <<= 1;
		rev |= (data & 1);
		data >>= 1;
	}return rev == temp;
}void main(void){
	int data, bit, i, dum, max, result;
	printf("Enter a data : ");
	scanf("%d", &data);

	if(ispalindrome(data)){
		printf("Given data is palindrome\n");
	}else{
		printf("Given data is not palindrome\n");
	}
}
