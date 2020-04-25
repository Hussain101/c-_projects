#include <iostream>

using namespace std;

int main()
{
    string choice;
    do
    {
    int days  , sizee ;

    cout << "Enter the initial size of population of green crud " ;
    cin >> sizee ;
    cout << "Enter the number of days after you want to calculate the size" ;
    cin >> days ;
    int day_count=days/5 ;
    int f1=sizee , f2=sizee , f=sizee ;
    for(int i;(i<=day_count&&day_count>1);i++)
    {
    f=f1+f2;
    f1=f2;
    f2=f;
    }
    cout << "\nThe new size of population is" << f << "pounds";
    cout << "\nDo you want to calculate again";
    cout << "Enter Y for yes and N for NO" ;
    cin >> choice ;
    }
    while(choice== "Y"||choice=="y");
        cout << "thats all" ;
    return 0;
}
