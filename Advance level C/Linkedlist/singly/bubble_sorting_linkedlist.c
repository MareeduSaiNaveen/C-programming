#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
void printnode(struct node *temp){
	printf("HEAD -> ");
	while(temp != NULL){
		printf("%d -> ", temp -> data);
		temp = temp -> next;
	}printf("NULL\n");
}void bubbleSort(struct node *head){
	struct node *i, *j;
	int temp;
	if(head == NULL){
		return;
	}for(i = head; i-> next != NULL; i = i -> next){
		for(j = i -> next; j != NULL; j = j -> next){
			if(i -> data > j -> data){
				temp = i -> data;
				i -> data = j -> data;
				j -> data = temp;
			}
		}
	}
}int main(){
	int data, i, size;
	struct node *new_node, *temp, *head = NULL;
	printf("Enter a size of node's : ");
	scanf("%d", &size);
	for(i = 1; i <= size; i++){
		printf("Enter a data of node %d  : ", i);
		scanf("%d", &data);

		new_node = (struct node*) malloc(sizeof(struct node));
		new_node -> data = data;
		new_node -> next = NULL;
		if(head == NULL){
			head = new_node;
		}else{
			temp = head;
			while(temp -> next != NULL){
				temp = temp -> next;
			}temp -> next = new_node;
		}
	}printnode(head);
	bubbleSort(head);
	printnode(head);
	return 0;
}
