#include<iostream>
using namespace std;

int main(){
long numC;
cin>>numC;

for (int j = 1; j <= 30; j++)
{
    cout<< setw(5) << j*numC<<" ";
    if (j % 10 == 0)
    cout<<endl;
}

return 0;
}