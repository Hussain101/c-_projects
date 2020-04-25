#include <iostream>

using namespace std;

int main()
{
    int n ;
    double answer ,guess,previous ,r;
    cout << "This program will calculate the square root of the number \n using the babaybolian algorithm." << endl ;
    cout << "Enter a whole  number="
;
    cin >> n ;
    r=n/guess;
    guess=(guess+r)/2;
    previous+=guess;
    while(n>guess);
    {
        if(previous<=(guess*0.01)+guess)
            answer+=previous;
        else
            r=n/guess;
    guess=(guess+r)/2;
    previous+=guess;
    }
    cout << "The square root of_" << n << "is_" << answer ;
    return 0;
}
