#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int pound1, shilling1, pence1;// these varieble are for the first amount 
    int pound2, shilling2, pence2; // these varieble are for the second amount
    int poundRes, shillingRes, penceRes; //these varieble are for the result
    float num; // this varieble is for the number to multiply
    char ch; // this varieble is for the operator
  
    cout<<"Input operator: ";
    cin>>ch;
  
    if (ch == '+')
    {
        cout<<endl<<"Enter first amount: \x9c"<<endl;
        cout<<"Enter Pound: ";
        cin>>pound1;
        cout<<"Enter Shilling: ";
        cin>>shilling1;
        cout<<"Enter Pence: ";
        cin>>pence1;
            
        cout<<"Enter second amount: \x9c"<<endl;
        cout<<"Enter Pound: ";
        cin>>pound2;
        cout<<"Enter Shilling: ";
        cin>>shilling2;
        cout<<"Enter Pence: ";
        cin>>pence2;
        
        poundRes=pound1+pound2;
        shillingRes=shilling1+shilling2;
        penceRes=pence1+pence2;
    }

    else if(ch =='-')
    {
         cout<<endl<<"Enter amount: \x9c"<<endl;
            cout<<"Enter Pound: ";
            cin>>pound1;
            cout<<"Enter Shilling: ";
            cin>>shilling1;
            cout<<"Enter Pence: ";
            cin>>pence1;
          
            cout<<"Enter a number to multiply amount: ";
            cin>>num;
          
            poundRes=pound1*num;
            shillingRes=shilling1*num;
            penceRes=pence1*num;
    } 

    else if(ch == '*')
    {
        cout<<endl<<"Enter amount: \x9c"<<endl;
        cout<<"Enter Pound: ";
        cin>>pound1;
        cout<<"Enter Shilling: ";
        cin>>shilling1;
        cout<<"Enter Pence: ";
        cin>>pence1;
        
        cout<<"Enter a number to multiply amount: ";
        cin>>num;
        
        poundRes=pound1*num;
        shillingRes=shilling1*num;
        penceRes=pence1*num;
    }
    
    else {
        cout<<"Invalid Character";
        return 0;
    }

    if (penceRes >= 12)
    {
        shillingRes = shillingRes + (penceRes/12);
        penceRes = penceRes%12;
    }
  
    if (shillingRes >= 20)
    {
        poundRes = poundRes + (shillingRes/20);
        shillingRes = shillingRes%20;
    }
      
    cout<<"Total is :\x9c"<<poundRes<<"."<<shillingRes<<"."<<penceRes<<endl;
  
    return 0;
}