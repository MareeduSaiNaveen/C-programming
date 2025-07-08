#include<stdio.h>
int main(){
	int data, result, r, l, i;
	printf("Enter a range of number : ");
	scanf("%d%d", &r, &l);
	for(i = r; i <= l; i++){
		if(i & 1){
			printf("%d is odd\n", i);
		}else{
			printf("%d is even\n", i);
		}
	}return 0;
}
