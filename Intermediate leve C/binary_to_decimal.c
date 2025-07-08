#include<stdio.h>
#include<math.h>
int main(){
	int dec, i = 0, j, rev = 0;
	long long int bin;
	printf("Enter binary code : ");
	scanf("%lld", &bin);
	
	while(bin != 0){
		rev = bin % 10;
		dec += rev*pow(2,i);
		i++;
		bin /= 10;
	}printf("%d\n", dec);
	return 0;
}
