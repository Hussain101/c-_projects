#include <iostream>

using namespace std;

int main()
{int n;
    cout << "Hello! this program calculates the cube and square of first ten even numbers!" << endl;
    for(int n=1;n<=20;n++)
    {
        if(n%2==0)
        {
            cout << "The square of the number" << n << "is_" << n*n << "and cube of number is_" << n*n*n <<endl ;
        }
    }
    return 0;
}
