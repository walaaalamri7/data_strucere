//
//  main.cpp
//  Lab_5
//
//  Created by MAC on 09/07/1442 AH.
//

#include <iostream>
using namespace std;
int sumNums(int a ,int b){
    if(a==b){
        return a;
    }
    else{
        return b+sumNums(a, b-1);
    }
}
int main() {
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter seconed number: ";
    cin>>b;
    if(a>b){
        int temp=a;
        a=b;
        b=temp;
    }
    cout<<"sum of int from "<<a<<"is" <<sumNums(a,b)<<"\n";
    return 0;
}
