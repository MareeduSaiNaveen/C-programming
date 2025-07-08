#include<stdio.h>
#include<string.h>
struct point{
	int id;
	char name[100];
} __attribute__((packed));
void ChangeName(struct point *ptr){
	strcpy(ptr-> name, "NA");
}
int main(){
	struct point e = {101,"sai"};
	printf("%d %s\n", e.id, e.name);
	
	ChangeName(&e);

	printf("%d %s\n", e.id, e.name);
	printf("%ld \n",sizeof(e));

	return 0;
}
