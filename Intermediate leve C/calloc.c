#include<stdio.h>
#include<stdlib.h>
int *get_array(int n){
	int i;
	int *ptr = calloc(n,sizeof(int));
	for(i = 0; i < n; i++){
		ptr[i] = i+1;
	}return ptr;
}int main(){
	int i, n;
	printf("Enter a size of n : ");
	scanf("%d", &n);
	int *ptr = get_array(n);
	for(i = 0; i < n; i++){
		printf("%d ", ptr[i]);
	}printf("\n");
	free(ptr);
	return 0;
}
