#include<iostream>
using namespace std;

int main(){
    int a=4,b=5;
    
    cout<<"Operators in c++: ";
    cout<<"following are the types of operators in c++"<<endl;
    //Arithmetic operators
    cout<<"the value of a+b is:"<<a+b;
    cout<<"the value of a-b is :"<<a-b;
    cout<<"the value of a*b is :"<<a*b;
    cout<<"the value of a%b is :"<<a%b;
    cout<<"the value of a/b is :"<<a/b;
    cout<<"the value of a++ is :"<<a++;
    cout<<"the value of a-- is :"<<a--;
    cout<<"the value of --a is :"<<--a;
    cout<<"the value of ++a is : "<<++a;
    
    //Comparision operators
    cout<<"the value of a==b is :"<<(a==b)<<endl;
    cout<<"the value of a>=b is :"<<(a>=b)<<endl;
    cout<<"the value of a<=b is :"<<(a<=b)<<endl;
    cout<<"the value of a>b is :"<<(a>b)<<endl;
    cout<<"the value of a<b is :"<<(a<b)<<endl;
    cout<<"the value of a!=b is :"<<(a!=b)<<endl;
    
    //Logical operators
    cout<<"the value of a==b is:"<<((a==b)&&(a<b))<<endl;
    cout<<"the value of a==b is :"<<((a==b) ||(a<b))<<endl;
    cout<<"the value of a==b is :"<<(!(a==b))<<endl;
    
    return 0;
    
    


}

