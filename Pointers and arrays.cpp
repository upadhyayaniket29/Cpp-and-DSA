#include<iostream>
using namespace std;
int main(){
    int marks[4]={1,2,3,4};
    //Pointers and arrays
    int *p=marks;
    //cout<<"the value of *p is"<<*p<<endl;
    //cout<<"the value of *p+1 is "<<*(p+1)<<endl;
    //cout<<"the value of *p+2 is "<<*(p+2)<<endl;
    //cout<<"the value of *p+3 is "<<*(p+3)<<endl;
    
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    
    return 0;
}
