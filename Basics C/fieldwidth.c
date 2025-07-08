
#include<stdio.h>
int main(){
	int x, y, date, month, year;
	float p, q;

	printf("Enter two inputs : ");
	scanf("%2d%2d",&x,&y);
	while(getchar() != '\n');

	printf("Enter two floting values inputs : ");
	scanf("%2f%2f",&p,&q);
	while(getchar() != '\n');
	
	printf("Enter date month year inputs : ");
	scanf("%d%*c%d%*c%d",&date,&month,&year);
	while(getchar() != '\n');

	printf("x value : %d\ny value : %d\n",x,y);
	printf("p value : %f\nq value : %f\n",p,q);
	printf("date: %d month: %d year: %d\n",date,month,year);
}
