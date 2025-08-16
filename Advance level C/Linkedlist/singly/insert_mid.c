#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head = NULL;
void insertmid(int size){
	struct node *new_node, *slow, *fast;
	int i, mid, data;
	printf("Enter a data to insert at mid : ");
	scanf("%d", &data);
	new_node = (struct node*) malloc(sizeof(struct node));
	new_node -> data = data;
	new_node -> next = NULL;
	
	slow = head;
	fast = head -> next;;
	while(fast !=  NULL && fast -> next != NULL){
		slow = slow -> next;
		fast = fast -> next -> next;
	}new_node -> next = slow -> next;
	slow -> next = new_node;
}void printnode(){
	printf("HEAD -> ");
	struct node *temp = head;
	while(temp != NULL){
		printf("%d -> ", temp -> data);
		temp = temp -> next;
	}printf("NULL\n");
}int main(){
	struct node *new_node, *temp;
	int data, i, size;
	printf("Enter a number of nodes : ");
	scanf("%d", &size);
	for(i = 1; i <= size; i++){
		printf("Enter a data at node %d : ", i);
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
	}insertmid(size);
	printnode();
	return 0;
}
