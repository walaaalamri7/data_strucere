//
//  main.cpp
//  Lab5_HW
//
//  Created by MAC on 09/07/1442 AH.
//

#include <iostream>
using namespace std;
void array_invers(int n){
    if (length==0){
        return;
    }else{
        array_invers(array[]+1);
        cout<<array{0};
        
    }
}
int main(){
    int n;
    cout<<"Enter a number of array";
    cin>>n;
    int arr[n];
    cout<< "The elemnt of array : \n"<<
    "The array is : "<<arr[n];
    
    
    int length=(sizeof(arr[n])/sizeof(arr[0]));
    
    cout<<"THe output is :";
    array_invers(n,0,length-1);
    return 0;
}
