#include<stdio.h>
void numadd(int *num, int *arr, int *len){
	int i, j;
	for(i = 0; i <= *len; i++){
		if(arr[i] == *num){
			break;
		}
	}

	for(j = i; j < *len; j++){
		arr[j] = arr[j+1];
	}
}int main(){
	int i, num, len, index;
	printf("Enter a number : ");
	scanf("%d",&num);

	/*printf("Enter where to inset : ");
	scanf("%d",&index);*/
	
	int arr[] = {10, 20, 30, 40, 50};

	len = sizeof(arr)/sizeof(arr[0]);

	for(i = 0; i < len; i++){
		printf("%d ", arr[i]);
	}printf("\n");
	printf("Before deleting a element in array\n");
	printf("After deteting a elements in array\n");
	numadd(&num, arr, &len);
	for(i = 0; i < len-1; i++){
		printf("%d ", arr[i]);
	}printf("\n");
	return 0;
}
