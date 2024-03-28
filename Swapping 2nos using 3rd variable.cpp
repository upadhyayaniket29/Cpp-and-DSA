//Swapping 2 numbers using 3rd variable 

#include<iostream>
using namespace std;

int main(){
    
    int a,b,temp;
    cout<<"enter the first number ";
    cin>>a;
    
    cout<<"enter the second number ";
    cin>>b;
    
    cout<<"\n values before swapping :"<<endl;
    cout<<"first variable "<<a<<endl;
    cout<<" second variable " <<b<<endl;
    
    temp=a;
    a=b;
    b=temp;
    
    cout<<"\n values after swapping "<<endl;
    cout<<" first variable "<<a<<endl;
    cout<<" second variable "<<b<<endl;
    
    return 0;
    
    
    
}
