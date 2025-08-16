#include<stdio.h>
int main(){
	int size, i, j, n= 0;
	float prev = 0, max = 0, sum, k;
	printf("Enter a szie of arraya : ");
	scanf("%d", &size);
	int arr[size];
	int dum[50];
	for(i = 0; i < size; i++){
		printf("Enter a element at %d : ", i+1);
		scanf("%d", &arr[i]);
	}printf("Enter a sub array size : ");
	scanf("%f", &k);
	for(i = 0; i < size-k+1; i++){
		sum = 0;
		n = i;
		for(j = 0; j < k; j++){
			sum += arr[n];
			n++;
		}prev = sum/k;
		if(max < prev)
			max = prev;
	}if(prev > max){
		max = prev;
	printf("max value = %f\n", max);
	return 0;
}
