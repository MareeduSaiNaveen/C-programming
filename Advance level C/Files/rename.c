#include<stdio.h>
#include<stdio.h>
int main(){
	char old_file[50], new_file[50];
	printf("Enter a file name : ");
	scanf("%s", old_file);
	printf("Enter a new file name : ");
	scanf("%s", new_file);
	if((rename(old_file, new_file)) == 0){
		printf("File name is succeuufully renamed\n");
	}else{
		printf("File name is not renamed\n");
	}return 0;
}
