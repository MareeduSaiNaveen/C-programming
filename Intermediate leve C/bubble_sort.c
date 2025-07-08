#include<stdio.h>
int main(){
	int i, j, temp = 0,len;
	int arr[] = {88, -2, 67, -3, 6, -23};
	len = sizeof(arr)/sizeof(arr[0]);
	for(i = 0; i < len; i++){
		for(j = 0; j < len-i-1; j++){
			if(arr[j] > arr[j+1]){		//arr[0] > arr[3]
				temp = arr[j];	   	//temp = arr[0]
				arr[j] = arr[j+1];	//arr[0] = arr[3]
				arr[j+1] = temp;	//arr[3] = temp
			}
		}
	}
	for(int q = 0; q < len; q++){
		printf("%d ",arr[q]);
	}
	printf("\n");
	return 0;
}
