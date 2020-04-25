#include <iostream>

using namespace std;

int main()
{
    int n ,i ,logic =0;
    cout << "Hello!This program checks the number is prime or not! " << endl;
    cout << "Enter the positive number=" ;
    cin >> n ;
    for(i=2;i=n/2;++i)
    {
        if(n%1==0)
        {
            logic=1;
            break;
        }
        if(logic==0)
        {
            cout << n << "is a prime number" ;
        }
        else
        {
            cout << n << "is not a prime number" ;
        }
    }
    return 0;
}
