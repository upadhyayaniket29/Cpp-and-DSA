#include <iostream>

using namespace std;

int main()
{
    void swap (int * , int *);
    int x ,y;
    x=6;
    y=7;
    
    cout<<"value in main before swapping "<<endl;
    cout<<x<<y;
    
    swap (&x,&y);
    cout<<"value in main after swapping "<<endl;
    return 0;

    
}

    void swap ( int *a, int *b)
{
int t;
t=*a;
*a=*b;
*b=t;

cout<<"value in swap after swapping "<<endl;
cout<<*a<<*b;
}
