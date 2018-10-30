#include<iostream>

using namespace std ;
int main()
{
    int a ;
    
    cout << "Enter the  no. for which you want to check for odd or even:\n";
    cout << "Enter Your Choice : " ;
    cin >> a ;
    if (a%2==0)
    {
            cout<<"Even";
                          
    }
    else
    {
            cout<<"Odd";
    }
    return 0;
}
