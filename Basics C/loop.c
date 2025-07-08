#include <stdio.h>
int main()
{
	char sai[] = "Naveen";

	for(int i = 0; sai[i] != '\0' ; i++){
		printf("%d\n",sai[i]);
	}
	
	int i = 1;
	while(i <= 5){
		printf("sai ");
		i++;
	}
	printf("\n");
	return 0;
}
