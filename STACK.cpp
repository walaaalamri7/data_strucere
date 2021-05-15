//
//  main.cpp
//  Stack_HW1
//
//  Created by MAC on 22/07/1442 AH.
//

#include <iostream>
using namespace std;


static int arr [4]={};
int top ;

void push(int value ){
    if (top == -1){
        cout<<"\n stack overflow";
        exit(1);
    }else{
        arr[++top] = value;
        cout <<value<<" is enserted"<<endl;
    }
}

void pop(){
    if (top == -1){
    cout << "\nStack Underflow";
         exit(1);
}else{
        cout <<arr[top--]<<" is deleted"<<endl;

   }
}

int peek(){
        return arr[top];
}

void display(){
    if (top == -1){
        cout << "\nStack Underflow";
             exit(1);
         }
         else{
             cout<<"\nThe array contact is : "<<endl;
              for (int i =top ; i>=0 ;i --)
              cout<<arr[i]<<endl;
             
         }
}
int main()
{
    
   // Push the elements of stack
   push(11);
   push(22);
   push(33);
   push(44);

   // Display stack elements
   display();

   // Print top element of stack
   cout << "\nTop element is : "<< peek() << endl;
    cout<<endl;
   // Delete top elements of stack
   pop();
   pop();
   cout<<endl;


   // Display stack elements
   display();

   // Print top element of stack
   cout << "\nTop element is "<< peek() << endl;
         
   return 0;
}
