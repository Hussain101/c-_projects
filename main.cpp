#include <iostream>

using namespace std;

int main()
{
    int x ,y, z;
    cout << "This program show the multiplication table of number of its multiple" << endl;
    cout << "Enter the number-" ;
    cin >> x ;
    cout << "Enter the value of y=" ;
    cin >> y ;
    cout << endl ;
        for(z=1 ; z<=y; z++)
    {
      cout << x << '*' << z << "=" << x*z << "\n" ;
    }

    return 0;
}
