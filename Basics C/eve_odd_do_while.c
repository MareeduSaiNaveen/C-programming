#include<stdio.h>
int main(){
	int num, i, evei = 0, oddi = 0;
	printf("Enter a number : ");
	scanf("%d",&num);

	int check = num;
	int len = 10;
	int eve[len];
	int odd[len];

	do{
		check = num % 10;
		if(check % 2 == 0){
			eve[evei] = check;
			evei++;
		}else{
			odd[oddi] = check;
			oddi++;
		}num /= 10;
	}while(num > 0);
	for(i = evei-1; i >= 0; i--){
		printf("%d ",odd[i]);
	}printf("\n");
	for(i = oddi-1; i >= 0; i--){
		printf("%d ",eve[i]);
	}printf("\n");
	return 0;
}
