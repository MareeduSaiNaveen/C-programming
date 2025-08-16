#include<stdio.h>
int main(){
	int size, i, seclarge, large;
	printf("Enter a array size : ");
	scanf("%d", &size);
	int arr[size];
	printf("Enter a elements in array :");
	for(i = 0; i < size; i++){
		scanf("%d", &arr[i]);
	}seclarge = arr[0];
	large = arr[0];
	for(i = 1; i < size; i++){
		if(arr[i] > large){
			seclarge = large;
			large = arr[i];
		}else if(arr[i] > seclarge && large != arr[i]){
			seclarge = arr[i];
		}
	}printf("Seconed largeset elements in array : %d\n", seclarge);
	return 0;
}
