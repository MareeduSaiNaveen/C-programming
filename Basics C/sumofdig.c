#include<stdio.h>
void sumnum(int *s,int *e){
	long int i, num = 0;
	for(i = *s; i <= *e; i++){
		num += i;
	}
	printf("sum of all numbers is %d\n",num);
}
int main(){
	int i, s, e;
	printf("Enter a number : ");
	scanf("%d",&s);

	printf("enter a ending number : ");
	scanf("%d",&e);

	sumnum(&s,&e);
	return 0;
}
