#include <iostream>

using namespace std;

int main()
{
    int num ,factorial=1 ;

    cout << "This program finds the factorial of the integer" << endl;
    cout << "Enter the integer=" ;
    cin >> num ;
    for(int x=1; x<=num; x++)
    {
        factorial*=x;
    }
    cout << "The factorial of the integer_" << num << "is_" << factorial << endl ;
    return 0;
}
