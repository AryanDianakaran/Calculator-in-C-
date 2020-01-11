//
//  main.cpp
//  calculator with functions
//
//  Created by Aryan Dinakaran on 11/01/20.
//  Copyright © 2020 Aryan Dinakaran. All rights reserved.
//

#include <iostream>
using namespace std;

void addition()
{
    double num1,num2;
    
    cout<<"Enter First Number"<<endl<<">> ";
    cin>>num1;
    
    cout<<"\n";
    
    cout<<"Enter Second Number"<<endl<<">> ";
    cin>>num2;
    
    cout<<"Answer: "<<num1+num2<<endl;
}

void subtraction()
{
        double num1,num2;
        
        cout<<"Enter First Number"<<endl<<">> ";
        cin>>num1;
    
        cout<<"\n";
        
        cout<<"Enter Second Number"<<endl<<">> ";
        cin>>num2;
        
        cout<<"Answer: "<<num1-num2<<endl;
}

void multiplication()
{
        double num1,num2;
        
        cout<<"Enter First Number"<<endl<<">> ";
        cin>>num1;
    
        cout<<"\n";
        
        cout<<"Enter Second Number"<<endl<<">> ";
        cin>>num2;
        
        cout<<"Answer: "<<num1*num2<<endl;
}

void division()
{
        double num1,num2;
        
        cout<<"Enter First Number"<<endl<<">> ";
        cin>>num1;
    
        cout<<"\n";
        
        cout<<"Enter Second Number"<<endl<<">> ";
        cin>>num2;
        
        cout<<"Answer: "<<num1/num2<<endl;
}

int main()
{
    char condition;
    
    cout<<"Which Operator Do You Want To Use?*"<<"\n>> ";
    cin>>condition;
    
    switch(condition)
    {
        case '+':
            addition();
            break;
            
        case '-':
            subtraction();
            break;
            
        case '*':
            multiplication();
            break;
            
        case '/':
            division();
            break;
            
        default:
            cout<<"Enter Opertors Like +,-,* or /";
            break;
    }
}

