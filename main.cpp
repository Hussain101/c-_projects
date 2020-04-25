#include <iostream>

using namespace std;

int main()
{
    float y=62.4 ;
    float radius, volume;
    double weight,fb ;
    cout << "This program will calculate the bouyant force and tells the user\n whether the sphere will float or sink!"<< endl;
    cout  << endl ;
    cout << "Enter the weight of the object in lbs=" ;
    cin >> weight ;
    cout << "Enter the radius of the object in feet=" ;
    cin >> radius ;
    radius=(4/3)*3.14*(radius*radius*radius) ;
    fb = volume*y ;
    if(fb>=weight)
    {
        cout << "This sphere will float!" << endl ;
    }
    else
    {
        cout << "This sphere will sink!";
    }
    return 0;
}
