#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head = NULL;
void printlist(){
	struct node *ptr;
	printf("heard ->");
	ptr = head;
	while(ptr != NULL){
		printf(" %d ->",ptr->data);
		ptr = ptr -> next;
	}
	printf(" null\n");
}
void insert(int data){
	struct node *new_node, *temp;
	new_node = (struct node*) malloc(sizeof(struct node));
  	if (new_node == NULL) {
        	printf("Memory allocation failed\n");
        	return;
	}new_node -> data = data;
	new_node -> next = NULL;
	if(head == NULL){
		head = new_node;
	}else{
		temp = head;
		while(temp -> next != NULL){
			temp = temp -> next;
		}temp -> next = new_node;
	}
}
int main(){
    insert(10);
    insert(20);
    insert(30);

    printlist();  // Expected: head -> 10 -> 20 -> 30 -> null

    return 0;
}
