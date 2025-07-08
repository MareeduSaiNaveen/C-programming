#include<stdio.h>
int lenth(int data){
	int count = 0;
	while(data > 0){
		count++;
		data >>= 1;
	}return count;
}int main(){
	int data, temp, i, mask = 0, result;
	printf("Enter a data : ");
	scanf("%d", &data);
	temp = data;
	i = lenth(data) - 1;
	printf("Original : ");
	while(i >= 0){
		printf("%d", (temp >> i) & 1);
		i--;
	}printf("\n");
	temp = data;
	while(temp > 0){
		mask <<= 1;
		mask |= temp & 1;
		temp >>= 1;
	}printf("Reverse : ");
	temp = mask;
	i = lenth(data) - 1;
	while(i >= 0){
		printf("%d", (temp >> i) & 1);
		i--;
	}printf("\n");
	return 0;
}
