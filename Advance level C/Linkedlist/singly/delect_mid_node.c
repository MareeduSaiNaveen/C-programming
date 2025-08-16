#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
void printnode(struct node *ptr){
	printf("HEAD -> ");
	while(ptr != 0){
		printf("%d -> ", ptr -> data);
		ptr = ptr -> next;
	}printf("NULL\n");
}void delete_mid(struct node *ptr){
	struct node *prev_node, *fast, *slow;
	slow = ptr;
	fast = ptr -> next;
	while(fast != NULL && fast -> next != NULL){
		prev_node = slow;
		slow = slow -> next;
		fast = fast -> next -> next;
	}prev_node -> next = slow -> next;
	free(slow);
}int main(){
	struct node *new_node, *head = NULL, *temp;;
	int NoOfNodes, data, mid, i;
	printf("Enter a number of node's : ");
	scanf("%d", &NoOfNodes);
	for(i = 0; i < NoOfNodes; i++){
		new_node = (struct node*) malloc(sizeof(struct node));
		printf("Enter a data of node %d : ", i);
		scanf("%d", &data);
		new_node -> data = data;
		new_node -> next = NULL;
		if(head == NULL){
			head = new_node;
		}else{
			temp = head;
			while(temp -> next != NULL){
				temp = temp -> next;
			}temp -> next = new_node;;
		}
	}delete_mid(head);
	printnode(head);
}
