//
//  main.cpp
//  Lab1_Arrays
//
//  Created by MAC on 12/06/1442 AH.
//
#include <iostream>
using namespace std ;
void fillArray_1D(int array[], int size){
    for(int i = 0; i < size; i++){
        array[i] =(rand() % 100);
    }
}
 void print(int array[], int size){
     for(int i = 0; i < size; i++) {
         cout<<array[i]<<",";
         
     }cout<<endl<<endl;
 }
void avg(int array[],int size ){
    cout<<"Task 1 : "<<endl<<endl;
    int sum = 0;
    double avg=0;
    for (int i=0; i<size; i++) {
        sum+=array[i];
    } avg = double(sum) / size;
    cout<<"THe average is : "<<avg<<endl;
}
void belowAboveAvg(int array[],int size ){
    int countHigh=0 , above =0;
    int countLow= 0 ,below =0;
 
    for (int p=0; p<size; p++) {
        if (array[p]>array[p+1]){
            countHigh++;
        }else if (array[p]<array[p+1]){
            countLow++;
   }
}
    cout<<"The number of elemnts above average is : "<<countHigh<<endl<<endl<<
    "the elemnts above average are as follow : "<<above<<endl<<endl<<
    "The number of elemnts below average is : "<<countLow<<endl<<endl<<
    "the elemnts below average are as follow : "<<below<<endl<<endl;
    }
void even_odd(int array[],int size){
    int odd=0,even=0;
    for(int i=0;i<size;i++){
        if(array[i]%2 == 0){
            even++;
        }
        else if (array[i]%2 != 0){
            odd++;
        }
    }
    cout<<"The number of Even number is : "<<even<<endl<<endl<<
    "The number of Odd number is : "<<odd<<endl;
}
void small_large(int array[],int size){
    int l= array[0];
    int li=0,s=0,s1=0;
    
    for (int i =0; i<size; i++) {
        if(array[i]>l){
            l=array[i];
            li=1;
            s=l;
            s1=li;
        }
    }for (int i =0; i<size; i++) {
        if(array[i]<s){
            s=array[i];
            s1=i;
    }
        array[li]=s;
        array[s1]=l;

}   cout<<"Largset elements of the array is: "<<l<<endl<<endl;
    cout<<"smallest elements of the array is: "<<s<<endl;
 
    
    cout<<endl<<"after swapping largest and smallest "<<endl<<"Elemnts of he array are as follows : "<<endl<<endl;
    //for(int i = 0; i < size; i++) {cout<<array[i]<<"  ";}
}
void towD_array(){
       int row=3 ;
       int col=4 ;
       int sum[10]={0},sum1[10]={0};
       int matrix [row][col];
       cout <<"\nentering a random number in matrix of " <<row<< " rows and " << col << " coloums : \n\n";
    
    for(int i=0; i <3; i++){
        for(int j=0;j<4; j++){
            matrix[i][j]=(rand() %100);//genrate a random
            sum[i]=sum[i]+matrix[i][j];
        }
    }
    for(int i=0; i <3; i++){
        for(int j=0;j<4; j++){
            cout<<matrix[i][j]<<"\t" ;
        }
        cout<<"Sum : "<<sum[i]<<endl;
    }
    for(int i=0; i <4; i++){
        for(int j=0;j<3; j++){
            sum1[i]=sum1[i]+matrix[j][i];
        }
    }
    cout<<"sum:\n---------------------------\n";
    for(int i=0; i <4; i++){
        
        cout<<sum1[i]<<"\t";
    }
}

void repetedElement(){
    int sum[10]={0},sum1[10]={0};
    int matrix [9][10];
   
    cout<<"\n\nTask3 : \n";

    cout <<"\nEntering a random number in matrix of " <<9<< " rows and " << 10 << " coloums : \n\n";
 
 for(int i=0; i <9; i++){
     for(int j=0;j<10; j++){
         matrix[i][j]=(rand() %100);//genrate a random
         sum[i]=sum[i]+matrix[i][j];
     }
 }
 for(int i=0; i <9; i++){
     for(int j=0;j<10; j++){
         cout<<matrix[i][j]<<"\t" ;
     }
     cout<<"Sum : "<<sum[i]<<endl;
 }
 for(int i=0; i <10; i++){
     for(int j=0;j<9; j++){
         sum1[i]=sum1[i]+matrix[j][i];
     }
 }
 cout<<"sum:\n---------------------------------------------------\n";
 for(int i=0; i <10; i++){
     
     cout<<sum1[i]<<"\t";
 }
    cout<<"\n\nTask4 : \n";

    cout <<"\nEntering a random number in matrix of " <<9<< " rows and " << 10 << " coloums : \n\n";
 
    
    for(int i=0; i <9; i++){
        for(int j=0;j<10; j++){
            cout<<matrix[i][j]<<"\t" ;
        }
        cout<<endl;
    }
    /*
    int maxSum =0,sum=0,maxRow=-1;
    for(int i = 0; i<9;i++){
        sum=0;
        for(int j=0;j<10;j++){
            sum+=matrix[i][j];
        }
        if(sum>maxSum){
            maxSum=sum;
            MaxRow =i;
        }
    }
    */
    cout<<"\n\n rows containg repeted elements : ";
    //++++++++++++++++++++++++++++++++++
    
    int one_D[10]={0};
    int counnt=-1;
    for(int i=0 ; i<10 ; i++){//
        counnt=0;
        for(int j=0 ; j<9 ;j++){
            for(int k=j+1 ;k<i;k++){
                if(matrix[i][j]==matrix[i][k]){
                    counnt++;
                    one_D[i]=counnt++;
               if(one_D[i]>0){//لو فيها تكرار
                for(int o =0;o<9;o++){
                    cout<<matrix[i][j]<<" ";
                }
             }
         }
     }
  }
}
    //++++++++++++++++++++++++++++++++++
}

int main() {
    int size ;
    cout<<"Enter a number of array ? ";
    cin>>size;
    int array[size];
    fillArray_1D( array, size);
   cout<<"Elements of the array are as follows :"<<endl;
     print(array,size);
    //TASK1
     avg(array,size);
     belowAboveAvg(array,size);
     even_odd(array,size);
    //TASK2
    cout<<endl<<"TASK 2 : "<<endl<<"Before swapping largest and smallest "<<endl<<"Elemnts of he array are as follows : "<<endl<<endl;
    print(array,size);
    small_large(array,size);
    //task3
    towD_array();
     //task4
    repetedElement();
    return 0;
}
