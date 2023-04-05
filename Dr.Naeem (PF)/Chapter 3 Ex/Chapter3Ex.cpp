#include<iostream>
#include<conio.h>
#include<iomanip>
#include<ctype.h>
using namespace std;


//task 4
//function
void retry(int a)
{
    double num1, num2, ans;
    char op;
    cout<<"Enter first number, operator, second number : ";
    cin>>num1>>op>>num2;
    switch (op)
    {
    case '+':
        ans = num1 + num2;
        break;
    case '-':
        ans = num1 - num2;
        break;
    case '*':
        ans = num1 * num2;
        break;
    case '/':
        ans = num1 / num2;
        break;
    default:
        cout<<"Invalid Operator";
        break;
    }
    cout<<"Answer = "<<ans<<endl;
    cout<<"Do another (y/n)? ";
    cin>>op;  
    if (op == 'y')
    {retry(0);}
    else
    {cout<<"Thank You";}

}

//task 6
//funtions
int fact(int n)
    {
        int f = 1;
        for (int i = 1; i <= n; i++)
        {
            f = f * i;
        }
        return f;
    }  



int main() 
{
//-----------------------------
//Q1
//-----------------------------
/*
long numC;
cin>>numC;
for (int j = 1; j <= 30; j++)
{
    cout<< setw(5) << j*numC<<" ";
    if (j % 10 == 0)
    cout<<endl;
}
*/

//-----------------------------
//Q2
//-----------------------------
/*
    double C;
    double F;
    double v;
    cout<<"Write in the Temperature : ";
    cin>>v;
    C = (v - 32) * 5 / 9; //fahranite to celcius
    F = (v * 1.8) + 32; //celcsius to fahranite
    cout<< "Temp in Celsius is : "<< C <<endl<<"Temp in Fahranite is : "<<F;
*/
//-----------------------------
//Q3
//-----------------------------

/*
    int num;
    char ch;
    cout<<"Enter a number : ";
    cin>>num;
    cout<<"Enter a character : ";
    ch = getche();
    cout<<endl;
    cout<<"The number is : "<<num<<endl;
    cout<<"The character is : "<<ch<<endl;
*/

//----------------------------- 
//Q4
//-----------------------------
/*
cout<<"WELCOME TO THE CALCULATOR"<<endl;
retry(0);
*/
//-----------------------------------------------------------------------------
// Task 5
//-----------------------------------------------------------------------------
//what I want is i want cin the no of * and repeat it on given no of line
/*
    int i,j,no_lines;
    cout << "Type in the number of rows: ";
    cin >> no_lines;
  for(i=0;i<=no_lines; ++i)
   {
    for(j=0;j<=no_lines-i;j++) // this add a gap in the start of each line
    cout<<" ";
    for(j=1;j<=2*i-1;j++)
    cout<<"X";
    cout<<endl;
   }
*/

//-----------------------------
//Q6
//-----------------------------
/*
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is : "<<fact(n);
    return 0;
*/

//-----------------------------
//Q7
//-----------------------------
/*
float I_amount,years,I_rate_per_year,total; // I_amount = initial amount, I_rate_per_year = initial rate per year 

cout<<"Type in your Initail Amount"<<endl;
cin>>I_amount;
cout<<"No of years"<<endl;
cin>>years;
cout<<"intial interst rate per year"<<endl;
cin>>I_rate_per_year;

for(float i = 1; i<= years; i++)
{
    total = I_amount + (I_amount * I_rate_per_year / 100);
    I_amount = total;
}

 cout<<"At the end of "<<years<<" years, you will have "<<total<<" dollars.";
*/












return 0;






}