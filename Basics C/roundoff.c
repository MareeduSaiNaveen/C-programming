#include<stdio.h>
#include<math.h>
int main(){
	float val = 25.257;
	float va1 = 25.253;

	printf("Round off using(25.257) using .2f : %.2f\n",val);
	printf("not using round off(25.257) f : %f\n",val);

	printf("Round off(25.253) using .2f : %.2f\n",va1);
	printf("not using round off(25.253) using f : %f\n",va1);

	printf("Round off(25.253) using using round(val) : %f\n",round(va1));

	printf("Round off(25.253) using floor : %f\n",floor(va1));

	printf("Round off(25.253) using celi : %f\n",ceil(va1));
}
