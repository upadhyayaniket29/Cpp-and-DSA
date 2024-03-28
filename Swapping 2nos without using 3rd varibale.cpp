//Swapping program without using third variable

#include<iostream>
using namespace std;

int main(){
    int a,b;
    
    cout<<" enter the first varible :"<<endl;
    cin>>a;
    
    cout<<" enter the second varible :"<<endl;
    cin>>b;
    
    cout<<"\n values before swapping "<<endl;
    cout<<" first number "<<a<<endl;
    cout<<" second number "<<b<<endl;
    
    a=a+b;
    b=a-b;
    a=a-b;
    
    cout<<"\n\n values after swapping  "<<endl;
    cout<<"first number = "<<a<<endl;
    cout<<" second number = "<<b<<endl;
    
    cout<<"\n\n\n";
    return 0;
    
    
    
    
    
    
    
}
