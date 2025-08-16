include<stdio.h>
#include<math.h>
int main(){
	int size, i, num = 1, value;
	printf("Enter a size of elements : ");
	scanf("%d", &size);
	int arr[size];
	for(i = 0; i < size; i++){
		arr[i] = num++;
	}value = sqrt(size);
	printf("value = : %d\n",arr[value]);
	return 0;
}
