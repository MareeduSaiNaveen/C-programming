#include<stdio.h>
int main(){
	int len, i, j, d;
	int arr[] = {10, 20, 30, 40, 50, 60};
	len = sizeof(arr)/sizeof(arr[0]);
	int temp[len];

	printf("enter a number : ");
	scanf("%d", &d);
	
	j = 0;
	for(i = d; i < len; i++){
		temp[j] = arr[i];
		j++;
	}for(i = 0; i < d; i++){
		temp[j] = arr[i];
		j++;
	}for(i = 0; i < len; i++){
		arr[i] = temp[i];
		printf("%d ", arr[i]);
	}printf("\n");
	return 0;
}
