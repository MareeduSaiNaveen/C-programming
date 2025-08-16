#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct recored{
	char name[50];
	//int marks;
};
int main(){
	int next = 1;
	FILE *fptr = fopen("file_name.txt", "r");
	if(fptr == NULL){
		printf("File dosen't opend \n");
		exit(1);
	}struct recored student;
	printf("Student Name\tmarks\n");
	while(1){
		next = fread(&student, sizeof(student), 1, fptr);
		if(next == 0){
			break;
		}printf("%s\n", student.name);
		//printf("%d\n", student.marks);
	}fclose(fptr);
	return 0;
}
