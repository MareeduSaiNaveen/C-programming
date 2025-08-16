#include<stdio.h>
#include<stdlib.h>
int glo_ins = 10;
int glo_unins;
static int glo_static_in = 10;
const int glo_const = 10;
int segments(){
	int local = 10;
	int *mall = (int*) malloc(sizeof(int));
	static int loc_sta = 10;
	printf("Globale ins           : %p\n", &glo_ins);
	printf("Globale unint         : %p\n", &glo_unins);
	printf("Globale static ins    : %p\n", &glo_static_in);
	printf("Globale const         : %p\n", &glo_const);
	printf("Local                 : %p\n", &local);
	printf("Malloc                : %p\n", &mall);
	printf("Local static          : %p\n", &loc_sta);
	printf("Function              : %p\n", &segments);
	return 0;
}int main(){
	segments();
	return 0;
}
