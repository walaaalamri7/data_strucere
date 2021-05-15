//
//  main.cpp
//  Lab3_ LinkListProject
//
//  Created by MAC on 25/06/1442 AH.
//
#include <iostream>
using namespace std;
    
class Node {

private:

    int data;
    Node* next;

public:

    // Constructors
    Node()
    {
        data = 0;
        next = NULL;
    }

    Node(int data) {
        this->data = data;
        next = NULL;
    }

    //Getters
    int getData()
    {
        return data;
    }

    Node* getNext()
    {
        return next;
    }

    //Setters
    void setData(int data)
    {
        this->data = data;
    }

    void setNext(Node* nextNode)
    {
        this->next = nextNode;
    }
};


class LinkedList {

private:
    Node* head;

public:
    // Constructor
    LinkedList()
    {
        head = NULL;
    }

    /* Below are MANY methods that are used on Linked Lists.*/

    /*----- isEmpty method -----*/
    bool isEmpty()
    {
        return head == NULL;
    }
    /*----- search method -----*/
    bool search(int data)
    {
        Node* helpPtr = head;
        while (helpPtr != NULL)
        {
            if (helpPtr->getData() == data)
            {
                return true;
            }
    
            helpPtr = helpPtr->getNext();// Step one node over
        }
        return false;
    }
    /*----- findNode method -----*/
    Node* findNode(int data)
    {
        Node* helpPtr = head;
        while (helpPtr != NULL)
        {
            if (helpPtr->getData() == data)
            {
                return helpPtr;
            }
    
            helpPtr = helpPtr->getNext();// Step one node over
        }
        return NULL;
    }
    /*----- printAllNodes method -----*/
    void printAllNodes()
   {
        if (head == NULL) {
            cout<<">    The list is empty";
            return;
        }
        Node* helpPtr = head;
        
        while (helpPtr != NULL) {
            
            cout << helpPtr->getData() << ", ";
            // Step one node over
            helpPtr = helpPtr->getNext();
        }
        cout << endl;
    }
/*----- Insert add push append method -----*/
    Node* insertNode(int data)
    {
        Node* newNode = new Node(data);
        // IF there is no list, newNode will be the first node, so just return it
        if (head == NULL || head->getData() > data)
        {
            newNode->setNext(head) ;
            head = newNode;
            return head;
        }// ELSE, we have a list. Insert the new node at the correct location
       
            // We need to traverse to the correct insertion location...so we need a help ptr
            Node* helpPtr = head;
            while (helpPtr->getNext() != NULL && helpPtr->getNext()->getData() < data)
                helpPtr = helpPtr->getNext();
            
            // Now make the new node. Set its next to point to the successor node.
            // And then make the predecessor node point to the new node
            newNode->setNext(helpPtr->getNext()) ;
            helpPtr->setNext(newNode);
        
            return head;
    }
/*----- delete method -----*/
void deleteNode(int num){
    
    Node *temp = head;
    Node *target;
    
    if(head == NULL){
     cout<<"List is empty\n";
     return ;
    }
    
    //case 1: delete front node or the only node in the list
    if(temp->getData() == num){
        
       head->setNext(temp->getNext());
       free(temp);
       cout<<num<<" is deleted successfully\n";
       return ;
    }
    //case 2: delete middle or last node
    while(temp->getNext() != NULL){
        
        if(temp->getNext()->getData() == num){
            target= temp->getNext();
            temp->setNext(target->getNext());
            free(target);
            cout<<num<<" is deleted successfully\n";
            return ;
        }
        temp = temp->getNext();
       
    }
    cout<<num<<" is not in the list\n";
    
     return ;
}

//add all the tasks' methods here
//Task 3.1
int findLargest(){
     
        Node* helpPtr = head;
        int largest = head->getData();
        while (helpPtr != NULL)
        {
            if (helpPtr->getData() > largest)
            {
                largest = helpPtr->getData();
            }
    
            helpPtr = helpPtr->getNext();// Step one node over
        }
        return largest;
 }
//Task 3.2
int data2ndNode(){
    
    return head->getNext()->getData();
}
//Task 3.3
int data2ndLastNode(){
    
    Node* helpPtr = head;
        
        while (helpPtr->getNext()->getNext() != NULL)
            helpPtr = helpPtr->getNext();
            
            
            return helpPtr->getData();

}

//Task 3.4
void deleteLastNode(){
    
    if(head == NULL)
     cout<<">    The list is empty";
    else{
    Node* helpPtr = head;
    Node* dNode = new Node();
        while (helpPtr->getNext()->getNext() != NULL)
            helpPtr = helpPtr->getNext();
            
        dNode = helpPtr->getNext();
        helpPtr->setNext(NULL);
        free(dNode);
        cout<<">     last node is deleted successfully\n";
    }
}

//Task 3.5
void odd2Even2Odd(){
    
    Node* helpPtr = head;
        
        while (helpPtr != NULL) {
            
            if(helpPtr->getData()%2 == 0){
             int num = helpPtr->getData()-1;
             helpPtr->setData(num);
                
            }
                  
            else{
                 int num = helpPtr->getData()+1;
                 helpPtr->setData(num);
            }
                 
            helpPtr = helpPtr->getNext();
        }
}

//Task 4.1
void swapFirstLast()
    {
        int swap = 0;
        Node* helpPtr = head;

        while (helpPtr->getNext() != NULL)
            helpPtr = helpPtr->getNext();
        
        swap = head->getData();
        head->setData(helpPtr->getData());
        helpPtr->setData(swap);
    }
//Task 4.2
void countEvenOddNodes(){

        int evenNodes = 0; int oddNodes = 0;

        Node* helpPtr = head;

        while (helpPtr != NULL)
        {
            if (helpPtr->getData() % 2 == 0)
                evenNodes++;
            else
                oddNodes++;
                
            helpPtr = helpPtr->getNext();
        }

        cout<<">    "<< "Number of even nodes in the list = " << evenNodes<< endl;
        cout<<">    "<< "Number of odd nodes in the list = " << oddNodes<< endl;
}
//Task 4.3
void addNodeAfter(int num){
    
    Node* helpPtr = head;
    Node* newNode = new Node(num);
    
    while (helpPtr!= NULL)
        {
            if ((helpPtr->getData() * 2) == num)
                {
                    newNode->setNext(helpPtr->getNext());
                    helpPtr->setNext(newNode);
                    cout<<">    "<< num <<" was successfully inserted into the list.\n";
                    return;
                }
                
            helpPtr = helpPtr->getNext();
        }
       cout<<">    "<<"Sorry: can not insert "<<num<<" in th list!!\n";
}

//Task 4.4
void deleteNodeAfter(int num){
    
    
    }

};//end LinkedList class

int main()
{
    // Make a new Linked List called myList
    LinkedList* myList = new LinkedList();


    int value=0;
    int numNode=0;

    cout<<">   How many values do you want to insert: ";
    cin >> numNode;
 
    //insert nodes
   for (int i = 0; i < numNode; i++)
   {
       cout<<">    value "<< (i + 1)<< ": ";
       cin >> value;

       if (myList->search(value))
       {
           cout<<">    " <<value<< " already exists in the list. Duplicates are not allowed.";
           i--;
       }
       else
       {
           myList->insertNode(value);
           cout<<">    "<< value <<" was successfully inserted into the list.";
       }
       cout << endl;
       
   }
//Lab 3 tasks

//print All Nodes
    cout<<">    Printing All Nodes: ";
    myList->printAllNodes();
 /*
    cout << "\n>    Task3.1: findLargest(): "<<myList->findLargest();
  
    cout << "\n>    Task3.2: data2ndNode(): "<<myList->data2ndNode();
 
    cout << "\n>    Task3.3: data2ndLastNode(): "<<myList->data2ndLastNode();

    cout << "\n>    Task3.4: deleteLastNode(): ";
    myList->deleteLastNode();
    cout<<">    Printing All Nodes: ";
    myList->printAllNodes();
   
    //cout << "\n>    Task3.5: odd2Even2Odd(): ";
    //myList->odd2Even2Odd();
    //cout<<">    Printing All Nodes: ";
   // myList->printAllNodes();

  
//Lab 4 tasks Homeworks
    cout << "\n>    Task4.1: swapFirstLast(): ";
    myList->swapFirstLast();
    cout<<">    Printing All Nodes: ";
    myList->printAllNodes();
 
    cout << "\n>    Task4.2: countEvenOddNodes(): \n";
    myList->countEvenOddNodes();
*/

    cout << "\n>    Task4.3: addNodeAfter(): \n";
    cout << ">    enter the value you want to insert: ";
    cin >> value;
    myList->addNodeAfter(value);
    cout<<">    Printing All Nodes: ";
    myList->printAllNodes();
 
    cout << "\n>deleteNode(): \n";
    cout << ">    enter the value you want to delete: ";
    cin >> value;
    myList->deleteNode(value);
    cout<<">    Printing All Nodes: ";
    myList->printAllNodes();
 
 
    //Homework
    cout << "\n>    Task4.4: deleteNodeAfter(): \n";
    cout << ">    enter the value you want to delete: ";
    cin >> value;
    myList->deleteNodeAfter(value);
    cout<<">    Printing All Nodes: ";
    myList->printAllNodes();
    
    
    
}


