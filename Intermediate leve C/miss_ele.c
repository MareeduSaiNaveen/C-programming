#include<stdio.h>
int main(){
	int i, len, j, sum, count = 0;
	printf("Enter a size : ");
	scanf("%d",&len);
	int arr[len];
	for(i = 0; i < len; i++){
		scanf("%d",&arr[i]);
	}j = arr[0];
	sum = arr[1] - arr[0];
	for(i = 0; i < len; i++){
		if(arr[i] != j){
			printf("%d miss element\n",j);
			count++;
		}j += sum;
	}if(!count){
		printf("array  is compled\n");
	}return 0;
}
