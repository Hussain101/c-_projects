#include <iostream>

using namespace std;

int main()
{
    int num_exc , possiblep , recievedp ;
    double total_rec=0 , total_poss=0 ;
    cout << "This program calculates the total grades for n excercise of a classroom as a percentage\n";
    cout << "How many excercise to input=" ;
    cin >> num_exc ;
    for(int i=1 ;i<=num_exc ; i++ )
    {
        cout << "Score recieved for the excercise" << i <<  "=" ;
        cin >> recievedp ;
        cout << "\nTotal points possible for excercise"<< i << "=" ;
        cin >> possiblep ;
        cout << endl ;
        total_rec+=recievedp;
        total_poss+=possiblep;
    }
    cout << " Your total is " << total_rec << "out of " << total_poss << "or" << 100 *(total_rec/total_poss) << "%" ;
    return 0;
}
