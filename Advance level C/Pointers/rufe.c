#include<stdio.h>
int main(){
	int num[] = {10, 20, 30, 40, 50};
	int *pnum = num;
	printf("*pnum = %d\n", *pnum);
	pnum++;
	printf("pnum++ = %d\n", *pnum);
	*pnum++;
	printf("*pnum++ = %d\n", *pnum);
	(*pnum)++;
	printf("(*pnum)++ = %d\n", *pnum);
	*(pnum++);
	printf("*(pnum++) = %d\n", *pnum);
	return 0;
}
