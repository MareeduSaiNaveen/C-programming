#include<stdio.h>
struct information{
	char Name[20];
	int RollNo;
	char Branch[20];
};
int main()
{
	struct information student[1000];

	int n, i;
	printf("Enter a number of students : ");
	scanf("%d",&n);

	for(i = 1; i <= n; i++){
		printf("add info of student %d\n",i);
		
		printf("Name : ");
		scanf("%s",student[i].Name);
		printf("RollNo : ");
		scanf("%d",&student[i].RollNo);
		printf("Branch : ");
		scanf("%s",student[i].Branch);
	}

	for(i = 1; i <= n; i++){
		printf("information for %d student\n",i);

		printf("Name : %s \tRollNo : %d \tBranch : %s\n",student[i].Name,student[i].RollNo,student[i].Branch);
	}
	return 0;
}
