#include<stdio.h>
int main(){
	int data, bit = 0, mask, result, count, i;
	printf("Enter a data to ckeck : ");
	scanf("%d", &data);
	for(i = 0; i < 32; i++){
		mask = 0;
		mask |= (1 << i);
		result = 0;
		result = mask & data;
		if(result){
			count++;
		}
	}printf("Number of set bits in data is : %d\n", count);
	return 0;
}

