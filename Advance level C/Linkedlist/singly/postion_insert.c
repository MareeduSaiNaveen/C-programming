#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
int main(){
	int valu, i, data, postion;
	struct node *head = NULL, *temp, *new_node, *ptr, *before;
	printf("Enter a number of node before inerestion : ");
	scanf("%d", &valu);
	
	for(i = 0; i < valu; i++){
		printf("Enter a data : ");
		scanf("%d", &data);

		new_node = (struct node*) malloc(sizeof(struct node));

		new_node -> data = data;
		new_node -> next = NULL;
		if(head == NULL){
			head = new_node;
			temp = new_node;
		}else{
			temp = head;
			while(temp -> next != NULL){
				temp = temp -> next;
			}temp -> next = new_node;
		}
	}
	printf("Enter a postion from 1 to %d of node to add : ", valu+1);
	scanf("%d", &postion);
	if(postion < 1 || postion > valu+1){
		printf("Given number is outof range\n");
		return 0;
	}printf("Enter a data to insert : ");
	scanf("%d", &data);
	
	struct node *add_on = (struct node*) malloc(sizeof(struct node));
	add_on -> data = data;
	add_on -> next = NULL;
	
	if(postion == 1){
		add_on -> next = head;
		head = add_on;
	}else{
		ptr = head;
		for(i = 1; i < postion-1 && ptr != NULL; i++){
			ptr = ptr -> next;
		}
		add_on -> next = ptr -> next;
		ptr -> next = add_on;
	}
	temp = head;
	printf("Head -> ");
	for(i = 0; i <= valu; i++){
		printf("%d -> ", temp -> data);
		temp = temp -> next;
	}printf(" Null\n");
	return 0;
}
