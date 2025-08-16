#include<stdio.h>
#include<stdlib.h>
#include<string.h>
FILE *fp;
char ch;
struct books{
	char name[10000];
};
int creating(){
	char file_name[50], str[10000];
	struct books file;
	int next = 1;

	printf("Enter a file name : ");
	scanf("%s", file_name);
	getchar();

	fp = fopen(file_name, "w");
	if(fp == NULL){
		printf("File is not opend\n");
		exit(1);
	}
	
	printf("To Stop entring text press ctrl+d 2 times\n");
	while(next){
		printf("Enter a string : ");
		fgets(str, sizeof(str), stdin);
		strcpy(file.name, str);
		fwrite(&file, sizeof(file), 1, fp);
		printf("To Stop 0 : ");
		scanf("%d", &next);
		getchar();
	}fclose(fp);
	strcpy(file.name, file_name);
	fp = fopen("file_name.txt", "rb+");
	fseek(fp, 0, SEEK_END);
	fwrite(file.name, sizeof(file), 1, fp);
	fclose(fp);
	return 0;

}int reading(){
	int next;
	char file_name[50];
	struct books file;
	
	printf("Enter a file name : ");
	scanf("%s", file_name);
	getchar();
	
	fp = fopen(file_name, "r");
	if(fp == NULL){
		printf("File is not opend\n");
		exit(1);
	}
	printf("\n-----file content------\n");
	while(fread(&file, sizeof(file), 1, fp)){
		printf("%s", file.name);
	}
	fclose(fp);
	return 0;	

}int update(){
	int next = 1, index;
	char file_name[50], str[10000];
	struct books file;
	
	printf("Enter a file name : ");
	scanf("%s", file_name);
	getchar();
	
	fp = fopen(file_name, "rb+");
	if(fp == NULL){
		printf("File is not opend\n");
		exit(1);
	}
	int recored_num = 0;
	printf("\n---exisiting content---\n");
	while(next = fread(&file, sizeof(file), 1, fp)){
	       printf("%s", file.name);
	       recored_num++;
	}
	if(recored_num == 0){
		printf("No data to update\n");
		fclose(fp);
		return 0;
	}
	
	printf("Enter a number of paras to move postion : ");
	scanf("%d", &index);
	getchar();

	if(index < 0 || index >= recored_num){
		printf("Invalid index\n");
		fclose(fp);
		return 1;
	}

	fseek(fp, index*sizeof(file), SEEK_SET);
	
	printf("Enter a para : ");
	fgets(str, sizeof(str), stdin);
	strcpy(file.name, str);
	
	fwrite(&file, sizeof(file), 1, fp);
	
	fclose(fp);
	printf("recored is updated successfully\n");
	
	return 0;

}int display_file(){
	char file_name[50];
	int next;
	struct books file;
	
	fp = fopen("file_name.txt", "r");
	if(fp == NULL){
		printf("File is not opend\n");
		exit(1);
	}
	printf("\n---- display file content---\n");
	while((next = fread(&file, sizeof(file), 1, fp))){
		printf("%s", file.name);
	}
	fclose(fp);
	return 0;

}int file_names(){
	int next = 1;
	char file_name[50];
	struct books file;
	fp = fopen("file_name.txt", "w");
	while(next){
		printf("Enter a file name : ");
		fgets(file_name, sizeof(file_name), stdin);
		strcpy(file.name, file_name);
		fwrite(&file, sizeof(file), 1, fp);
		printf("To stop 0 : ");
		scanf("%d", &next);
		getchar();
	}fclose(fp);
	return 0;
}int deleting(){
	char file_name[50];

	printf("Enter a file name : ");
	scanf("%s", file_name);
	getchar();

	if(remove(file_name) == 0){
		printf("File %s is deleted succefully\nEnter remaing file names", file_name);
		file_names();
	}else{
		printf("Faild to deleted file %s\n", file_name);
	}
	return 0;
}int main(){
	int chose = 1;
	while(chose){
		printf("\n\n1.Display files\n");
		printf("2.Create a file\n");
		printf("3.Read a file\n");
		printf("4.Update a file\n");
		printf("5.Delete a file\n");
		printf("6.Update file names\n");
		printf("7.Exit from code\n\n\n");
		printf("Enter a option : ");
		scanf("%d", &chose);
		getchar();
		switch(chose){
			case 1:{
				display_file();
				break;
			}case 2:{
				creating();
				break;
			}case 3:{
				reading();
				break;
			}case 4:{
				update();
				break;
			}case 5:{
				deleting();
				break;
			}case 6:{
				file_names();
				break;
			}case 7:{
				chose = 0;
				break;
			}
		}
	}return 0;
}
