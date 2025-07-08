#include<stdio.h>
#include<string.h>
int main(){
	char source[] = "Naveen";
	char traget[100] = "Sai ";

	int i,j, len;
	for(i = 0; traget[i] != '\0'; ++i){

	}
	for(j = 0; source[j] != '\0'; ++i,++j){
		traget[i] = source[j];
	}
	printf("The complete string of traget is %s\n",traget);

	len =  strlen(traget);
	printf("length of the string %d\n",len);

	return 0;
}
