// #include<iostream>
// using namespace std;
// int main(){

//     int num;
//     cout<<"enter the number";
//     cin>>num;
//     int rem; 
//     int ans=0;
//     int mul=1;
//  while(num>0)
//  {
//    // remainder
//    rem=num%2;
//    //quoitent
//    num=num/2;
//    //ans
//    ans=rem*mul+ans;
//    //mul
//    mul=mul*10;



//  }  

//  cout<<ans<<endl; 
// }
//  Binary To Decimel
#include<iostream>
using namespace std;
int main(){
int num,rem,ans , mul;
ans=0;
mul=1;
cout<<"enter the number";
cin>>num;

while(num>0){

  num=num/10;
  rem=num%10;
  
  ans=rem*mul+ans;
  mul=mul*2;
}

cout<<ans<<endl;


}