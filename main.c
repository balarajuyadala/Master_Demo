/* Author : BALARAJU
Created   : 25-04-2024*/


#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
};

void push(node** head_ref,int val){
    node* new_node = new node();
    new_node->data = val;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

void reverse(node** head_ref){
   struct node *temp = NULL;
   struct node *perv = NULL;
  struct  node *current = (*head_ref);
    while(current != NULL){
        temp = current->next;
        current->next = perv;
        perv = current;
        current = temp;
    }
    (*head_ref) = perv;
}

void sortdata(node** head_ref){
    int temp;
    node* current = *head_ref;
    node* index = NULL;
    
    while(current != NULL){
        index = current->next;
        while(index != NULL){
            if(current->data > index->data){
                temp = current->data;
                current->data = index->data;
                index->data = temp;
            }index = index->next;
        }current= current->next;
    }
}

void deletion(node** head_ref){
    node* temp = *head_ref;
    *head_ref = temp->next;
    free(temp);
}

void disp(node *head){
    while(head != NULL){
        cout<<head->data<<" ";
		    head=head->next;
		    }
		    }
		    int
		    main(){
		    node*
		    head;
		    push(&head,50);
		    push(&head,120);
		    push(&head,30);
		    push(&head,100);
		    push(&head,10);
		    disp(head);
		    sortdata(&head);
		    cout<<"\nsorted
		    :";
    disp(head);
    
    reverse(&head);
    cout<<"
		    \nreverse
		    :";
    disp(head);
    
    deletion(&head);
    cout<<"
		    \ndelection
		    :";
    disp(head);
}
