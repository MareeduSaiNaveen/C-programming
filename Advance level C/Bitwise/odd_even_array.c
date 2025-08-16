#include<stdio.h>
int main(){
	int size, i;
	printf("Enter a size of array : ");
	scanf("%d", &size);
	int arr[size];
	printf("Enter a elemnts in array : ");
	for(i = 0; i < size; i++){
		scanf("%d", &arr[i]);
	}for(i = 0; i < size; i++){
		if(arr[i] & 1){
			printf("odd : %d\n", arr[i]);
		}else{
			printf("even : %d\n", arr[i]);
		}
	}return 0;
}
