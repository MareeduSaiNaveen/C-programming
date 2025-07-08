#include<stdio.h>
int find(int data){
	int count = 0, temp = data;
	while(temp > 0){
		if((temp & 1) == 0){
			count++;
		}temp = temp >> 1;
	}return count;
}int main(){
	int data, count;
	printf("Enter a number : ");
	scanf("%d", &data);
	count = find(data);
	printf("count of 0's : %d\n", count);
	return 0;
}
