#include<stdio.h>
void Find(int *min, int *max, int *size, int *arr){
	*max = 0;
	*min = *(arr + 0);
	int i;
	for(i = 0; i < *size; i++){
		if(*min > *(arr + i)){
			*min = *(arr + i);
		}if(*max < *(arr + i)){
			*max = *(arr + i);
		}
	}
}void ToPrintArray(int *size, int *arr){
	int i;
	printf("Given data in array\n");
	for(i = 0; i < *size; i++){
		printf("%d ", *(arr+i));
	}printf("\n");
}int main(){
	int size, i, max, min;
	printf("Enter a size of array : " );
	scanf("%d", &size);
	int arr[size];
	printf("Enter a elemnts in array : ");
	for(i = 0; i < size; i++){
		scanf("%d", &arr[i]);
	}ToPrintArray(&size, arr);
	Find(&min, &max, &size, arr);
	printf("Max elements in array : %d\n", max);
	printf("Min elements in array : %d\n", min);
	return 0;
}
