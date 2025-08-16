#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct recored{
	char name[1000];
	//int marks;
};
int main(){
	FILE *fptr;
	fptr = fopen("file_name.txt", "w");
	if(fptr == NULL){
		printf("File dose't opend\n");
	}int next = 1 /*marks*/;
	char name[1000];
	while(next){
		struct recored student;
		printf("Enter a student name : ");
		fgets(name, sizeof(name), stdin);
		//name[strcspn(name, "\n")] = '\0';
		
		/*printf("Enter a student marks : ");	
		scanf("%d",&marks);*/
		
		strcpy(student.name, name);
		//student.marks = marks;
		
		fwrite(&student, sizeof(student), 1, fptr);
		
		printf("1 to create next student data and 0 to stop : ");
		scanf("%d",&next);
		getchar();
	}fclose(fptr);
	return 0;
}
