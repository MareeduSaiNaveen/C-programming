#include<stdio.h>
int main(){
	int option;

	printf("Enter a number : ");
	scanf("%d",&option);

	switch(option){
		case 1:
			printf("Monday\n");
			break;
		case 2:
			printf("Thursday\n");
			break;
		case 3:
			printf("wednesday\n");
			break;
		case 4:
			printf("Thrusaday\n");
			break;
		case 5:
			printf("Friday\n");
			break;
		case 6:
			printf("Saturday\n");
			break;
		case 7:
			printf("Sunday\n");
			break;
	}
	return 0;
}
