#include<iostream>
#include<conio.h>
#include<iomanip>
#include<ctype.h>
using namespace std;

int main(){
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

return 0;
}