#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Node{
    
    int data; 
    struct Node* next;
}Node;

Node* minimum(Node* head){
    if(head == NULL){
        return NULL; 
    }
    Node* ptr = head; 
    int tempmin = head->data;
    Node* temp = (Node*)calloc(sizeof(Node),1);
    
    while (ptr != NULL){
        if(ptr->data < tempmin){
            temp = ptr;
            tempmin=temp->data;
        }  
        ptr = ptr->next;
    }
    
return temp;
    
}
void main(){

    Node* Node1 = malloc(sizeof(Node)); 
    Node* Node2 = malloc(sizeof(Node)); 
    Node* Node3= malloc(sizeof(Node)); 
    Node1 -> data =2;
    Node2 -> data =1;
    Node3 -> data = 3; 
    
    Node1->next = Node2;
    Node2->next = Node3;
    Node3->next = NULL;

    Node* min = minimum(Node1);
    
    printf("%d",min->data);
}
