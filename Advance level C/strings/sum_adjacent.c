#include<stdio.h>
#include<string.h>
int main(){
	int arr[50];
	int size, i, max = 0, sum;
	printf("Enter a szie of array : ");
	scanf("%d", &size);
	printf("Enter a elemnts in array : ");
	for(i = 0; i < size; i++){
		scanf("%d", &arr[i]);
	}for(i = 0; i < size; i++){
		sum = arr[i] + arr[i+1];
		if(sum > max){
			max = sum;
		}
	}printf("max sum = %d\n", max);
	return 0;
}
