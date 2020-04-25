#include <iostream>

using namespace std;

int main()
{
    double sum=0;
    cout << "This program calculates the sum of the series 1+1/2+1/3+1/4+..........1/45" << endl;
    for(double n=1; n<=45; n++)
    {
        sum=sum+1/n ;
    }
    cout << "The sum of the series=" << sum << endl ;
    return 0;
}
