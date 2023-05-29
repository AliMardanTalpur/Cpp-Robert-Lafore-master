/*
Create a structure called employee that contains two members: an employee number
(type int) and the employee’s compensation (in dollars; type float). Ask the user to fill
in this data for three employees, store it in three variables of type struct employee, and
then display the information for each employee
*/

#include<iostream>
using namespace std;

struct employee
{
    int EmployeeNo;
    float compensation;
};

int main(){
    
    employee e1;
    employee e2;
    employee e3;



cout<<"Type in Employee No : "<<endl;
cin>>e1.EmployeeNo;
cout<<"Employee Compensation : "<<endl;
cin>>e1.compensation;

cout<<"Type in Employee No : "<<endl;
cin>>e2.EmployeeNo;
cout<<"Employee Compensation : "<<endl;
cin>>e2.compensation;

cout<<"Type in Employee No : "<<endl;
cin>>e3.EmployeeNo;
cout<<"Employee Compensation : "<<endl;
cin>>e3.compensation;

cout<<"Employee No : "<<e1.EmployeeNo<<endl<<"Employee Compensation : "<<e1.compensation;
cout<<"\nEmployee No : "<<e2.EmployeeNo<<endl<<"Employee Compensation : "<<e2.compensation;
cout<<"\nEmployee No : "<<e3.EmployeeNo<<endl<<"Employee Compensation : "<<e3.compensation;



return 0;
}