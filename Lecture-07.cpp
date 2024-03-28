/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int row,col,sol;
    // for(row=1;row<=5;row=row+1)
    // {
        
    //     for(col=1;col<=row;col=col+1){
    
    // char name='a'+ row-1;
    // cout<<name<<" ";
    //     }
    //     cout<<endl;
    // }
    // MEthod 1 
    // for(row=1;row<=5;row=row+1)
    // {
    //     for(col=1;col<=5-(row-1);col=col+1)
    //     {
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // Method 2 
    
    // for(row=5;row>=1;row=row-1)
    // {
    //     for(col=1;col<=row;col=col+1)
    //     {
    //         cout<<"*"<<"";
            
    //     }
    //     cout<<endl;
        
        
        
    // }
    // for(row=1;row<=5;row++)
    // {
        
            
    //         for(sol=1;sol<=5-(row-1);sol++){
                
    //         cout<<sol;
    //         }
    //     cout<<endl;
        
        
    // }
    // cout<<endl;
    
    for(row=1;row<=5;row++)
    {
        for(col=5;col>=5-(row-1);col--)
        {
            cout<<col<<"";
        }
        
        cout<<endl;
    }
        
        
        
        
    
}


