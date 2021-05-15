//
//  main.cpp
//  Try
//
//  Created by MAC on 15/06/1442 AH.
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
                return true;//لو كانت موجودة النود
            }
    
            helpPtr = helpPtr->getNext();// Step one node over
        }
        return false;//لو النود  مو موجودة
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

//add all the tasks' methods here

int findLargest(){
     
        Node* helpPtr = head;
        int largest = head->getData();
    
        while (helpPtr != NULL)
        {
            if (helpPtr->getData() > largest)//لتخزين الاكبر
            {
                largest = helpPtr->getData();
            }
    
            helpPtr = helpPtr->getNext();// Step one node over
        }
        return largest; //هنا بحالة لو كان الهد هوا الكبير هوا الي حيكون لارجست
 }/*
 int find2ndLargest(){
     Node* hlpPtr=head;
     int Largest2nd = head->getData();
     
     while(hlpPtr !=  NULL){
         if(hlpPtr->getData() > Largest2nd){//لو كان المؤشر في النود الكبير جيب الي اصغر منها
             Largest2nd=hlpPtr->getNext()->getNext()->getData();
         }
         hlpPtr = hlpPtr->getNext();
         //عشان يتحرك وحده نود للامام
         }//end while
     return Largest2nd;
 }//end function
*/
int data2ndNode(){
    return head->getNext()->getData();
   
}

//لو بجييب ثالث نود
int data3rdNode(){
    return head->getNext()->getNext()->getData();
}
int data2ndLastNode(){
    
    Node* helpPtr = head;
        
        while (helpPtr->getNext()->getNext() != NULL)
            helpPtr = helpPtr->getNext();
            
            return helpPtr->getData();

}
int data3rdLastNode(){
    Node* helpPtr =head;
    
    while (helpPtr->getNext()->getNext()->getNext() != NULL)
        helpPtr = helpPtr->getNext();
        
        return helpPtr->getData();

}
    void printAllNodesOE()
    {
         Node* helpPtr = head;
         
         while (helpPtr != NULL) {
             if(helpPtr->getData() %2==0){
             cout<< helpPtr->getData() << " is even ,";
             // Step one node over
             helpPtr = helpPtr->getNext();
         }else{
        cout << helpPtr->getData() <<" is odd ,";
        // Step one node over
        helpPtr = helpPtr->getNext();
         }//end if
      }//end while
    }//end method
};//end LinkedList class

int main()
{
    // Make a new Linked List called myList
    LinkedList* myList = new LinkedList();


    int value=0;
    int numNode=0;

    cout<<">   How many values do you want to insert: ";
    cin >> numNode;
 
//inset nodes
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
   cout<<">    Printing All Nodes:";
   if (myList->isEmpty())
   {
       cout<<">    The list is empty";
   }
   else
   {
       cout<<">    ";
       myList->printAllNodes();
       cout<<endl;
   }
   
    cout<<"\n>    Task3.1:findLargest():"<<myList->findLargest();
    //cout<<"\n>    Task3.1.2:find2ndLargest():"<<myList->find2ndLargest();
    
   // implement task 3.1 here
    cout << "\n>    Task3.2: data2ndNode(): "<<myList->data2ndNode();
   // implement task 3.2 here
   cout << "\n>    Task3.2.2: data3ndNode(): "<<myList->data3rdNode();
    
   cout << "\n>    Task3.3: data2rdLastNode(): "<<myList->data2ndLastNode();
   cout << "\n>    Task3.3.2: data3rdLastNode(): "<<myList->data3rdLastNode();
      
   // implement task 3.3 here
   
   //Homework
    cout << "\n>    Task3.4: odd2Even2Odd(): ";
    myList->printAllNodesOE();
    
   // implement task 3.4 here
    
  
//Lab 4 tasks
   cout << "\n>    Task4.1: swapFirstLast()";
   // implement task 4.1 here


   cout << "\n>    Task4.2: countEvenOddNodes()";
   // implement task 4.2 here
    


   cout << "\n>    Task4.3: addNodeAfter()"<<endl;
   // implement task 4.3 here

}
