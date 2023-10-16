#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Entry{
    char* key; 
    float value; 
    struct Entry* next;
}Entry;

Entry* add_entry_to_the_end(Entry* head, char* key, float value){
    
    Entry *ptr,*temp; 
    ptr = head; 
    temp = (Entry*)malloc(sizeof(Entry));
    
    temp->key = key;
    temp -> value = value; 
    temp ->next = NULL; 
    
    while(ptr->next != NULL){
        ptr=ptr->next;
    }
    
    ptr->next = temp;
    
    return temp;
}
    
void print_data(struct Entry* head)
{
    if (head == NULL)
        printf("Linked list is empty");
    else
    {
        printf("The data stored in the list:\n");
        struct Entry *ptr = NULL;
        ptr = head;
        while(ptr != NULL){
            printf("Key:%s Value:%.2f ",ptr->key,ptr->value);
            ptr = ptr->next;
        }
        printf("\n");
    }
}

Entry* get_value_by_key(Entry* head, char* key_to_search){
    
    if (head==NULL)
        return NULL;
   
    Entry* ptr = (Entry*)malloc(sizeof(Entry));
    ptr=head;
    
    while (ptr!=NULL){
        if(ptr->key == key_to_search){
        printf("yo it matches");
        return ptr;
        }
        else 
        ptr = ptr->next;
    }

printf("no matches");
return NULL;
    
}


void test_main(){
    //it is like a main for testing !
    
    Entry e1;
    e1.key = "hello";
    e1.value = 12;
    e1.next = NULL; 
    
    Entry e2;
    e2.key = "goodbye";
    e2.value = 13;
    e2.next = NULL; 
    
    e1.next = &e2;
    
    char* key = "what";
    float value = 15;
    Entry* e3;
    
    e3 = add_entry_to_the_end(&e1,key,value);
    
    print_data(&e1);
    
    Entry* e4 =  get_value_by_key(&e1,"hello");
    
    e4 = add_entry_to_the_end(&e1,e4->key,e4->value);
    
    print_data(&e1);
    
}