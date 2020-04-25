#include <iostream>

using namespace std;

int main()
{
    int pA , pB , year=1;
    double rA , rB ;

    cout << "Enter the population of town A" ;
    cin >> pA ;
    cout << "Enter the growth rate of town A" ;
    cin >> rA ;
    cout << "Enter the population of town B" ;
    cin >> pB ;
    cout << "Enter the growth rate of town b" ;
    cin >> rB ;
    if(pA<pB && rA>rB)
    {
        for(year ; pA<pB ; year++)
        {
            (pA=((rA/100)*pA)+pA) ;
            (pB=((rB/100)*pB)+pB) ;


        }
        cout << "Town A will surpass town B after " << year << "years \n" << endl ;
        cout << "The final population of town A =" << pA<< ".\n" ;
         cout << "The final population of town B =" << pB<< ".\n" ;

    }
    else
    {
        cout << "Invslid data." ;
    }
    return 0;
}
