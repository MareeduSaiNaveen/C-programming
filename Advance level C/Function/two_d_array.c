#include<stdio.h>
void Find(int *max, int *min, int *size, int (*arr)[*size]){
	int i, j;
	*min = *(*(arr + 0) + 0);
	*max = 0;
	for(i = 0; i < *size; i++){
		for(j = 0; j < *size; j++){
			if(*min > *(*(arr + i) + j)){
				*min = *(*(arr + i) + j);
			}if(*max < *(*(arr + i) + j)){
				*max = *(*(arr + i) + j);
			}
		}
	}
}void ToPrintArray(int *size, int (*arr)[*size]){
	int i, j;
	for(i = 0; i < *size; i++){
		for(j = 0; j < *size; j++){
			printf("%d ",*(*(arr + i) + j));
		}printf("\n");
	}
}int main(){
	int size, i, j, max, min;
	printf("Enter a size of array : ");
	scanf("%d", &size);
	int arr[size][size];
	printf("Enter a %d elements in array : ", size*size);
	for(i = 0; i < size; i++){
		for(j = 0; j < size; j++){
			scanf("%d", &arr[i][j]);
		}
	}printf("To print elements in array : \n");
	ToPrintArray(&size, arr);
	Find(&max, &min, &size, arr);
	printf("Max elemnts in array : %d\n", max);
	printf("Min elemnts in array : %d\n", min);
	return 0;
}
