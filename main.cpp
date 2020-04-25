#include <iostream>

using namespace std;

int main()
{
    int n ,x=0 ,y=0 ;
    cout << "Hello! This program calculates the sum of the even and odd numbers." << endl;
    for(int n=1; n<=20 ; n++)
    {
        if((n%2!=0))
        {
            x+=n ;
        }
        else
        {
            y+=n ;
        }

    }
    cout << "The sum of the first ten odd numbers=" << x << endl ;
    cout << "The sum of the first ten even numbers=" << y << endl ;
    return 0;
}
