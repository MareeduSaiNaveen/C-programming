#include<stdio.h>
int main(){
	int i, k, j, arr[3][3][3] = {{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}};
	int (*ptr)[3][3] = arr;
	printf("*(*(*(ptr+i)+j)+k))\n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			for(k = 0; k < 3; k++){
				printf("%d ", *(*(*(ptr+i)+j)+k));
			}printf("\n");
		}
	}printf("*(p+3*i+3*j+k)\n");
	int *p = &arr[0][0][0];
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			for(k = 0; k < 3; k++){
				printf("%d ", *(p+3*i+3*j+k));
			}printf("\n");
		}
	}return 0;
}
