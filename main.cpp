/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

void triangle(int);

int main()
{
    int rowOfTriangle;
    cout<<"please enter row of the triangle";
    cin>>rowOfTriangle;
    triangle(rowOfTriangle);

    return 0;
}
void triangle(int rowOfTriangle){
    //for each row
    for(int i=1; i<=rowOfTriangle;i++){
        //for handling namespace in each row
        for(int j=0;j<rowOfTriangle-i;j++){
            cout<<" ";
        }
        //for handling namespace in each row
        for(int k=0;k<i;k++){
            cout<<"*";
        }
        cout<<"\n";
        
        
        
        
        
        
    }
    
    
    
    
    
}