#include <iostream>

using namespace std;

int main()
{
    int weight , cost ;
    string location ;
    cout << "Welcome!to the HS courier agency Multan\n" << endl;
    cout << "This program calculates the charges of the parcel.\n" ;
    cout << "Enter the weight of the parcel in kg=" ;
    cin >> weight ;
    cout << "\n Enter the delivery location=" ;
    cin >> location ;
    if (location== "lahore"||location== "Lahore" )
    {
        cost = (weight*2)+20 ;

    }
    else
    {
        cost = (weight*2)+40 ;
    }
    cout  << "The cost of parcel is" << cost << "\n" ;
    return 0;
}
