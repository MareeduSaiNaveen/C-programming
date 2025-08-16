#include<stdio.h>
int rec_str(int st, int end, int *str){
	if(st < end){
		int temp = *(str+end);
		*(str+end) = *(str+st);
		*(str+st) = temp;
		rec_str(st+1, end-1, str);
	}
}int main(){
	int size, i;
	printf("Enter a array size : ");
	scanf("%d", &size);
	int arr[size];
	printf("Enter a array elemm=nts : ");
	for(i = 0; i < size; i++){
		scanf("%d", &arr[i]);
	}rec_str(0, size-1, arr);
	for(i = 0; i < size; i++){
		printf("%d ", arr[i]);
	}printf("\n");
	return 0;
}
