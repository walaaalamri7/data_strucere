//
//  main.cpp
//  tr3
//
//  Created by MAC on 08/07/1442 AH.
//

#include <iostream>
using namespace std;
struct node{
    int data;
    node * next;
};
node* head = NULL ;

void insertNode(int value){
    node * new_node,* last ;
    new_node= new node;
    new_node->data= value;
    
    if (head == NULL){
        head= new_node;
        new_node->next= NULL;
    }else{
        last= head;
        while(last->next != NULL){
            last= last->next;
        }//end while
        last->next=new_node;
        new_node->next=NULL;
    }//end if
}//end insertNode method

void delete_end(){
    if (head== NULL){
        cout<<"linked list is empty";
    }else if (head -> next == NULL){
        delete(head);
        head=NULL;
    }else{
        node * ptr=head;
        while(ptr->next->next != NULL){
            ptr=ptr->next;
            
        }//end while
        delete (ptr-> next);
        ptr->next=NULL;
    }//end if
}// end method


void display(){
    node *current_node ;
    if(head == NULL){
        cout<<"liked list is empty ";
    }else{
        current_node=head;
        while(current_node != NULL){
            cout<<current_node->data <<"\t";
            current_node=current_node->next;
        }//end while
    }//end if
}// end display method

int main() {
    insertNode(5);
    insertNode(10);
    insertNode(15);
    insertNode(8);
    display();
    cout<<"\n";
    
    delete_end();
    display();
    cout<<"\n";

    return 0;
}
