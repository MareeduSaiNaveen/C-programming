#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct node{
	int data;
	struct node *next;
};
int check(struct node *head,int *find){
	struct node *ptr = head;
	if(ptr -> data == *find){
		return true;
	}else if(ptr -> next != NULL){
		ptr = ptr -> next;
		check(ptr, find);
	}else if(ptr -> next == NULL){
		return false;
	}
}int main(){
	int data, value, i, find, count = 0;
	struct node *new_node, *head = NULL, *ptr;
	printf("Enter a number of node : ");
	scanf("%d", &value);

	for(i = 0; i < value; i++){
		new_node = (struct node*) malloc(sizeof(struct node));

		printf("Enter a data to inseret in node of %d : ", i+1);
		scanf("%d", &data);

		new_node -> data = data;
		new_node -> next = head;
		head = new_node;
	}
	printf("Enter a data to find : ");
	scanf("%d", &find);
	
	count = check(head, &find);

	if(count == true){
		printf("found at node\n");
		ptr = head;
		printf("HEAD -> ");
		while(ptr !=  NULL){
			printf("%d -> ", ptr->data);
			ptr = ptr -> next;
		}printf("NULL\n");
	}else{
		printf("Not fount at any node\n");
	}return 0;
}
