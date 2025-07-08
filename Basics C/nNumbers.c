#include<stdio.h>
int main(){
	int i,n,e;
	printf("Enter a number where to start the number : ");
	scanf("%d",&e);	
	
	printf("Enter a number where you want to stop : ");
	scanf("%d",&n);
	for(i = 1; i <= n; i++){
		printf("%d ",i);
	}
	printf("\n");

	i = e;
	while(i <= n){
		printf("%d ",i);
		i++;
	}
	printf("\n");

	i = e;
	do{
		printf("%d ",i);
		i++;
	}while(i <= n);
	printf("\n");
	return 0;
}
