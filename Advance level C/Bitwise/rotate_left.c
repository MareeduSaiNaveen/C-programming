#include<stdio.h>
int dum(int data,int bit){
	int i = 0, mask = 1;
	while(bit > i){
		mask |= 1 << i;
		i++;
	}mask = mask & data;
	return mask;
}int lenth(int data){
	int count = 0;
	while(data > 0){
		count++;
		data = data >> 1;
	}return count;
}void main(void){
	int data, bit, i, result, len, mask, left;
	printf("Enter a data : ");
	scanf("%d", &data);
	printf("Enter a bit to left shift : ");
	scanf("%d", &bit);

	printf("Original binary : \t\t");
	i = lenth(data) - 1;
	while(i >= 0){
		printf("%d", (data >> i) & 1);
		i--;
	}printf("\n");

	int change = lenth(data);
	mask = dum(data,bit);
	mask <<= (change - bit);
	data = data >> bit;
	result = mask | data;
	
	printf("Left shifted binary by %d : \t", bit);
	i = change;
	while(i >= 0){
		printf("%d", (result >> i) & 1);
		i--;
	}printf("\n");
}
