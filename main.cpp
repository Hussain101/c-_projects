#include <iostream>

using namespace std;

int main()
{
    int n=10, answer ;
    cout << "This progrsm prints the number in decending order!" << endl;
    while(n>=1)
    {
        cout << n ;
        answer=n--;
    }

    return 0;
}
