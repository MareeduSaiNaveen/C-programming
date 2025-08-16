#include<stdio.h>
int main(){
	int size, i, j, count = 0;
	printf("Enter a size : ");
	scanf("%d", &size);
	int arr[size][size];
	for(i = 0; i < size; i++){
		for(j = 0; j < size; j++){
			scanf("%d", &arr[i][j]);
			if(arr[i][j] == 0){
				count++;
			}
		}
	}int max = (size*size)/2;
	if(max < count){
		printf("sparse\n");
	}else{
		printf("Not sparse\n");
	}return 0;
}
