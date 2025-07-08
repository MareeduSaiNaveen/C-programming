#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head = NULL;
void detected_node(struct node *head){
	struct node *fast = head, *slow = head, *prev;
	while(fast != NULL && fast -> next != NULL && slow != NULL){
		slow = slow -> next;
		fast = fast -> next -> next;
		if(fast == slow){
			slow = head;
			while(slow != fast){
				fast = fast -> next;
				slow = slow -> next;
			}printf("Loop is detected at data : %d\n", fast -> data);
			prev = fast;
			while(prev -> next != fast){
				prev = prev -> next;
			}prev -> next = NULL;
			printf("Loop removed successfuly\n");
			return;
		}
	}printf("Loop has not detected\n");
}void printnode(struct node *ptr){
	printf("HEAD -> ");
	while(ptr != NULL){
		printf("%d -> ", ptr-> data);
		ptr = ptr -> next;
	}printf("NULL\n");
}struct node *insert_nodes(struct node *head){
	int data, size, i, loop;
	struct node *new_node, *dum, *temp;
	printf("Enter a number of nodes : ");
	scanf("%d", &size);
	printf("Enter a node number to create loop from 1 to %d : ", size-1);
	scanf("%d", &loop);
	for(i = 1; i <= size; i++){
		printf("Enter a data at node %d : ", i);
		scanf("%d", &data);
		new_node = (struct node*) malloc(sizeof(struct node));

		new_node -> data = data;
		new_node -> next = NULL;

		if(i == size){
			new_node -> next = dum;
		}if(head == NULL){
			head = new_node;
		}else{
			temp = head;
			while(temp -> next != NULL){
				temp = temp -> next;
			}temp -> next = new_node;
		}if(i == loop){
			temp = head;
			while(temp -> next != NULL){
				temp = temp -> next;
			}dum = temp;
		}
	}return head;
}int main(){
	head = insert_nodes(head);
	detected_node(head);
	printnode(head);
	return 0;
}
