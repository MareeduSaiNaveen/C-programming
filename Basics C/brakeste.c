#include<stdio.h>
int main(){
	int low, high;

	printf("Enter a low : ");
	scanf("%d",&low);

	printf("Enter a low : ");
	scanf("%d",&high);

	while(low < high){

		printf("%d ",low);
		if(low%13 == 0)
			break;
		low++;
	}
	printf("\n");
	return 0;
}
