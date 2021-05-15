//
//  main.cpp
//  Lab5_4
//
//  Created by MAC on 09/07/1442 AH.
//

#include <iostream>
using namespace std;
void invers(int num){
    if(num<10){
        cout<<num;
    }else{
        cout<<num%10;
        invers(num/10);
    }
}
int main(){
    
    int n;
    cout<<"Enter first number: ";
    cin>>n;
   
    cout<<"invers of int from "<<n<<" is "<<"\n";
    invers(n);
    cout<<"\n";

    
    return 0;
}
