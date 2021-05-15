//
//  main.cpp
//  lab8
//
//  Created by MAC on 22/07/1442 AH.
//

#include <iostream>
#include <algorithm>
#include<stack>
#include<string>
using namespace std;

int priorit (char c ){
    if (c=='-' || c=='+')
        return 1;
    else if (c=='*' || c== '/')
        return 2;
    else if (c == '^')
        return 3;
    else
        return 0;
}


string infix_to_postfix(string exp){
    stack<char> stk;
    string output = "";
    for(int i = 0;i<exp.length();i++ ){
        if(exp[i] == ' ') continue;
        if (isdigit(exp[i]) || isalpha(exp[i]))
            output+=exp[i];
        else if (exp[i] == '(')
            stk.push('(');
        else if (exp[i] == ')'){
            while(stk.top() != '('){
                output +=stk.top();
                stk.pop();
            }
            stk.pop();
        }else{
            while (!stk.empty() && priorit(exp[i])<=priorit(stk.top())){
                output += stk.top();
                stk.pop();
            }
            stk.push(exp[i]);
        }
    }while(!stk.empty()){
        output += stk.top();
        stk.pop();
    }
    return output;
}

//----------------------------------------------------------------
float mathOPeration(float op1,float op2, char operat){
    if(operat == '+')
        return op1+op2;
    else if (operat == '-')
        return op1-op2;
    else if (operat == '*')
        return op1*op2;
    else if (operat == '/')
        return op1/op2;
    else
        return 0;
}
float postfix_evalute(string exp){
    stack<float>stk;
    for(int i =0 ; i< exp.length();i++){
    if (isdigit(exp[i]))
        stk.push(exp[i] - '0');
    else{
        float op2=stk.top();
        stk.pop();
        
        float op1=stk.top();
        stk.pop();
        
        float result =mathOPeration(op1,op2, exp[i]);
        stk.push(result);
    }
  }
    return stk.top();
}

int main(){
    string tem;
    cout<<"covert infix to postfix ";
    
    string infixExepression = ("3+4*5/6");
    cout<<"\n\npostfix expression "<<infix_to_postfix(infixExepression)<<endl;
    
    string h ="345*6/+";
    cout<<"postfix evaluted "<<postfix_evalute(h)<<endl;
    
    return 0;
}
