#include<iostream>
using namespace std;
int fib(int n)
{
    int a,b,sum;
    a=0;
    b=1;
    if(n==0)
    return a;
    
    for(int i=2;i<=n;i++){
      sum=a+b;
      a=b;
      b=sum;
    }
    return b;
}

    int main()
    {

        int c;
        cout<<"enter the value of c ";
        cin>>c;

        cout<<fib(c);
        return 0;
    }
    

    

