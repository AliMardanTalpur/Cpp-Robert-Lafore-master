#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    
char sign; 
char oprator;
int choice;
float a,b,c,d,R1,R2;

do
{
system("cls");

cout<<"write your first fractional value  Ex : a+b,a-b,a*b,a/b"<<endl;
cin>>a>>sign>>b;

cout<<"write your Oprator   Ex : +,-,*,/"<<endl;
cin>>oprator;

cout<<"write your second fractional value  Ex : a+b,a-b,a*b,a/b"<<endl;

cin>>c>>sign>>d;

if (oprator == '+')
{
    //R1 = a/b + c/d;
    R1 =(a*d) + (b*c);
    R2 = b*d;
    cout<<R1<<'/'<<R2;
}
else if (oprator == '-')
{
    R1 = a/b - c/d;
    //R1 = (a*d) - (b*c);
    //R2 = (b*d);
    cout<<R1;//<<R2;
}

else if (oprator == '*')
{
    R1 = a/b * c/d;
    //R1 = (a*d) * (b*c);
    //R2 = (b*d);
    cout<<R1;//<<R2;
}

else if (oprator == '/')
{
    R1 = a/b / c/d;
    //R1 = (a*d) / (b*c);
    //R2 = (b*d);
    cout<<R1;//<<R2;
}

else
{
    cout<<"Invalid Oprator";
}


    cout<<"\nDo you wish to continue (y/n)?"<<endl;
    choice=getche();
    cout<<endl;

    } while(choice=='y');
return 0;
}