#include<stdio.h>
int arrnum(int *arr,int num, int len){
	int i, count = 0;
	for(i = 0; i <= len; i++){
		if(arr[i] == num){
			printf("%d is in the array of index %d\n",num, i);
			count++;
		}
	}
	if(count == 0 ){
		printf("There is no items in in array\n");
	}
	return 0;
}
int arrchar(char *arrch,char ch, int len){
	int i, count = 0;
	for(i = 0; i <= len; i++){
		if(arrch[i] == ch){
			printf("%c is in the array in index %d\n",ch,i);
			count++;
		}
	}
	if(count == 0){
		printf("Given  char is not in array\n");
	}
	return 0;
}
int main(){
	int num, len, len1;
	char ch;
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9,};
	printf("Enter a number to search : ");
	scanf("%d",&num);
	len = sizeof(arr)/sizeof(arr[0]);
	arrnum(arr, num, len);
	
	getchar();
	char arrch[] = {'n','a','v','e','e','n'};
	printf("Enter a char to search in arr : ");
	scanf("%c",&ch);
	len1 = sizeof(arrch)/sizeof(arrch[0]);
	arrchar(arrch, ch, len1);

	return 0;
}
