#include <iostream>

using namespace std;

int main()
{
    string day ;
    int timeh, timem , length;
    char nothing ;
    double cost;
    cout << "Enter the day as sa for Saturday :" ;
    cin >> day ;
    cout << "Enter the time the call started in 24-hour notification as (13:30) for 01:30  " ;
    cin >> timeh >> nothing >> timem ;
    cout << "Enter the call length minutes as rounded off to whole numbers :" ;
    cin >> length ;
    if((day != "SA" )||(day!="sa")||(day!="Sa")||(day!="sA")||(day!="su")||(day!="sU")||(day!="SU")||(day!="Su"))
    {
    	if ((8 <=timeh)||(18 <=timeh))
    	cost = 0.4 ;
    	else
    	cost = 0.25 ;
	}
	else 
	cost =0.15 ;
	cout << endl ;
	cout << "THe cost of the call is $" << cost*length ;
	cout << "At the rate of $" << cost << "per minute .\n" ;
    return 0;
}
