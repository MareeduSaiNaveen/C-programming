#include<stdio.h>
int main(){
	int l, low, high;

	printf("Enter a number where to start : ");
	scanf("%d",&low);
	
	printf("Enter a number where to start : ");
	scanf("%d",&high);
	l = low;

	for(l; l <= high; l++){
		if(l % 2 != 0)
			continue;
		printf("%d ",l);
	}
	printf("\n");

	while(low <= high){
		if(low % 2 != 0){
			low++;
			continue;
		}
		printf("%d ",low);
		low++;
	}
	printf("\n");
	return 0;
}
