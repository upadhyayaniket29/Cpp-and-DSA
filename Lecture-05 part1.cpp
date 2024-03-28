/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
// {int i,n,fact=1;

// cout<<"enter the number ";
// cin>>n;

// for(i=1;i<=n;i++)
// {
//     fact=fact*i;
// }
// cout<<fact;
{
    
int n,i;
cout<<"enter the number";
cin>>n;

if (n<2)
{
    cout<<"not a prime number ";
    return 0;
}
else
{
    for(i=2;i<n;i=i+1)
    {
       if(n%i==0){
           cout<<"not a prime number ";
       return 0;
       }
       
    }
}
cout<<"prime number";
return 0;
}
