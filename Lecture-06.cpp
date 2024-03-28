/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    // int row,col;
    
    // for(row=1;row<=4;row=row+1){
        
    //     for(col=1;col<=5;col=col+1){
            
    //         cout<<"10 ";
    //     }
    
    
    // cout<<endl;
    // }
    
    int row,col;
    
    // for(row=1;row<=5;row=row+1)
    // {
    //     for(col=1;col<=5;col=col+1){
        
    //     cout<<" row ";
    //     }
    
    // cout<<endl;
    // }
    // for(col=1;col<=5;col=col+1)
    // {
    //     for(row=5;row>=1;row=row-1)
    //     {
    //      cout<<row;
    //     }
    //     cout<<endl;
    // }
    
 
// 
// for(row=1;row<=5;row=row+1)
// {
//     char name='a'+row-1;
    
//     for(col=1;col<=5;col=col+1)
//     {
        
//         cout<<name<<" ";
//     }
    
//     cout<<endl;
// }
int count=1;

for(row=1;row<=5;row=row+1){
    for(col=1;col<=5;col=col+1){
        
        cout<<count<<" ";
        count=count+1;
    }
    cout<<endl;
}
    return 0;
}


