/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// #include <iostream>

// using namespace std;

// int main()
// {
//     int row,col;
//     int n;
//     cout<<" Enter The Input ";
//     cin>>n;
    
// //     for(row=1;row<=n;row++){
// //         for(col=1;col<=n-row;col++){
// //           cout<<" ";  
// //         }
        
    
// //     for(coll=1;coll<=2*(row)-1;coll++){
// //         cout<<"*";
// //     }
// //     cout<<endl;
// // }
// //     return 0;
// for(row=1;row<=n;row=row+1){
    
//      //Space Print
//     for(col=1;col=n-row;col<=col+1)
//         cout<<" ";
    
//         //1 to Row
    
//     for(col=1;col<=row;col<=col+1)
//         cout<<col<<" ";
    
//         //Row-1 to 1
    
//     for(col=row-1;col>=1;col--)
//         cout<<col<<" ";
        

//             cout<<endl;
        
    
// } 

// }

#include <iostream>

using namespace std;

int main()
{
    int row, col;
    int n;
    cout << "Enter the Input: ";
    cin >> n;

    // for (row = 1; row <= n; row = row + 1) {

    //     // Space Print
    //     for (col = 1; col <= n - row; col++)
    //         cout << "  ";

    //     // 1 to Row
    //     for (col = 1; col <= row; col++)
    //         cout << col << " ";

    //     // Row-1 to 1
    //     for (col = row - 1; col >= 1; col--)
    //         cout << col << " ";

    //     cout << endl;
    // }

    // return 0;
    // for(row=n;row>=1;row=row-1)
    // {
        
        
    //     for(col=1;col<=n-row;col++)
    //         cout<<" ";
            
    //     for(col=1;col<=2*row-1;col++)
    //         cout<<"*";
            
    //         cout<<endl;
    
    // for(row=n;row>=1;row--){
    //     for(col=1;col<=row;col++)
    //     cout<<"* ";
    //     for(col=1;col<=(2*n-2*row);col++)
    //     cout<<" ";
    //     for(col=1;col<=row;col++)
    //     cout<<"* ";
        
    //     cout<<endl;
        
        
        
        
    // }
    // for(row=1;row<=n;row++){
    //      for(col=1;col<=row;col++)
    //     cout<<"* ";
    //     for(col=1;col<=(2*n-2*row);col++)
    //     cout<<" ";
    //     for(col=1;col<=row;col++)
    //     cout<<"* ";
        
    //     cout<<endl;
    
    // for(row=1;row<=n;row++){
    //     for(col=1;col<=row;col++)
    //     cout<<"*";
    //     for(col=1;col<=(2*n-2*row);col++)
    //     cout<<" ";
    //     for(col=1;col<=row;col++)
    //     cout<<"*";
        
    //     cout<<endl;
    // }
    // for(row=n-1;row>=1;row--){
        
    
    //  for(col=1;col<=row;col++)
    //     cout<<"*";
    //     for(col=1;col<=(2*n-2*row);col++)
    //     cout<<" ";
    //     for(col=1;col<=row;col++)
    //     cout<<"*";
        
    //     cout<<endl;
    for(row=1;row<=n;row++){
        for(col=1;col<=n-row;col++)
        cout<<" ";
        for(col=1;col<=row;col++)
            cout<<"*"<<" ";
           
            cout<<endl;
        }
        for(row=n;row>=1;row--){
        for(col=1;col<=n-row;col++)
        cout<<" ";
        for(col=1;col<=row;col++)
            cout<<"*"<<" ";
           
            cout<<endl;
        }
    }
    
        
    
        
    
    



    






