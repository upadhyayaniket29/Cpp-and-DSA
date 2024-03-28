#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
   // int a=3,b=23,c=1234;
    //cout<<"the value of a is:"<<a<<endl;
    //cout<<"the value of b is : "<<b<<endl;
    //cout<<"the value of c is :"<<c<<endl;
    
    //cout<<"the value of a with setw  "<<setw(4)<<a<<endl;
    //cout<<"the value of b with setw  "<<setw(4)<<b<<endl;
    //cout<<"the value of c with setw  "<<setw(4)<<c<<endl;
    
    //Operator precedence
    int a=3,b=4;
    int c=(((a*5)+b)-19);
    cout<<c;
    return 0;
    
}
