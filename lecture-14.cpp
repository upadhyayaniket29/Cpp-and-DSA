// #include<iostream>
// using namespace std;
// bool prime(int n){
//     if (n<2)
//     return 0;

//     for(int i=2;i<n;i++){
//         if(n%i==0)
//         return 0;
//     }
//     return 1;
// }


// int Fact(int n=3){

   
//     int ans=1;
//     for(int i=1;i<=n;i++)
//         ans=ans*i;

       
    
//      return ans;

// }

// int main(){

//     int a,b;
//     cout<<"enter the nos";
//     cin>>a>>b;
//     //A is prime or not
//      cout<<prime(a)<<endl;
//     // Factorial of A
//     cout<<Fact(a)<<endl;
//     //B is Prime or Not
//     cout<<prime(b)<<endl;
//     //B ka Factorial
//     cout<<Fact(b);
//     //b-a is prime or Not
//     cout<<prime(b-a)<<endl;
//     //b-a ka factorail
//     cout<<Fact(b-a)<<endl;
//     cout<<Fact();//Default parameter 
// }

#include<iostream>
using namespace std;

void swap(int &n,int &m) //Pass by refeerence 
{ int c;
    c=n;
    n=m;
    m=c;
}
int main(){

    int a,b;
    cin>>a>>b;

    swap(a,b);
    cout<<a<<" "<<b<<" ";

}

