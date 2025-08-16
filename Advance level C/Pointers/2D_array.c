#include<stdio.h>
int main(){
	int i, j;
	int arr[][3] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
	int (*ptr)[3] = arr;
	printf("*(*(ptr+i)+j)\n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("%d ", *(*(arr+i)+j));
		}printf("\n");
	}int *p = &arr[0][0];
	printf("*(p+3*i+j)\n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("%d ", *(p+3*i+j));
		}printf("\n");
	}return 0;
}
