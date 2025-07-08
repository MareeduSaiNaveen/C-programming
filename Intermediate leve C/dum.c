#include<stdio.h>
int main(){
	int len, i, j = 0, d, q = 0;
	int arr[] = {10, 20, 30, 40, 50, 60};
	len = sizeof(arr)/sizeof(arr[0]);

	printf("enter a number : ");
	scanf("%d", &d);
	int temp[d];
	
	for(i = 0; i < d; i++){
		temp[i] = arr[i];
	}for(i = d; i < len; i++){
		arr[j] = arr[i];
		j++;
	}for(i = 0; i < len; i++){
		if(i <= j){
			arr[i] = temp[q];
			q++;
		}printf("%d ", arr[i]);
	}printf("\n");
	return 0;
}
