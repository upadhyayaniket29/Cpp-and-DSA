
#include <iostream>

using namespace std;

int main()
{
    int i;
    cout<<"enter the value of i";
    cin>>i;
    
    switch (i)
    
    {
        
        case 1:
        cout<<"Monday";
        break;
        case 2:
        cout<<"Tuesday";
        break;
        case 3:
        cout<<"Wednesday";
        break;
        case 4:
        cout<<"Thursday";
        break;
        case 5:
        cout<<"Friday";
        break;
        case 6:
        cout<<"Saturday";
        break;
        case 7:
        cout<<"sunday";
        break;
        default:
        cout<<"enter the valid date";
    }

    return 0;
}
