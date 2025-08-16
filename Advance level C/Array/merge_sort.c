#include<stdio.h>
int insert(int size, int *arr){
	for(int i = 0; i < size; i++){
		scanf("%d", &arr[i]);
	}
}int main(){
	int size, i, j = 0, n = 0;
	printf("Enter a size of array : ");
	scanf("%d", &size);
	int list1[size];
	printf("Enter a elelmts in array 1 : ");
	insert(size, list1);
	printf("Enter a size of array : ");
	scanf("%d", &size);
	int list2[size];
	printf("Enter a elelemts in array 2 : ");
	insert(size, list2);
	int list3[100];
	i = 0;
	while(i < size || j < size){
		if(list1[i] < list2[j]){
			list3[n++] = list1[i++];
		}else{
			list3[n++] = list2[j++];
		}
	}for(i = 0; i < n; i++){
		printf("%d ", list3[i]);
	}printf("\n");
	return 0;
}
