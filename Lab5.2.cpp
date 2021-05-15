//
//  main.cpp
//  lab5_2
//
//  Created by MAC on 09/07/1442 AH.
//

#include <iostream>

using namespace std;
int subNum(int n){
    if(n==1){
        return 1;
    }
    else{
        return subNum(n-1)-n;
    }
}
int main() {
    int n;
    cout<<"Enter first number: ";
    cin>>n;
   
    cout<<"sum of int from "<<n<<" is " <<subNum(n)<<"\n";
    return 0;
}

