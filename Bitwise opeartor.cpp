#include<iostream>
using namespace std;
int main()

{  cout<< ( 10 & 2 )<<endl;
   /* 1010 ( For Bitwise AND OPERATOR)
      0010
     ----------
      0010 */

    
    
    cout<< (10 | 2)<<endl;
    /* 1010 (For  bitwise OR OPERATOR)
       0010
      ----------
       1010 */
       cout<<(10 ^ 2)<<endl;
       /* 1010 ( For Bitwise XOR)
          0010
         ----------
          1000*/
          cout<<(~10)<<endl;
          /* 0000000000000000000000000000000000000 1010 ( For Bitwise Not)
             1111111111111111111111111111111111111 0101 */
             cout<<(10 <<3 )<<endl;// This thing means we are multiplying 10 by 2 raised to the power of 3 
             /* 0000000000000000000000 1  0 1 0  We increased the number 
                0000000000000000000000 1  0 1 0  0
                20 - in decimel notation 
              */
              cout<<(10 >> 1)<<endl; // This thing means we are dividing 10 by 2 raised to the power of 1
             
    return 0;
}
