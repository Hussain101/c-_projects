#include <iostream>

using namespace std;

int main()
{
    	int f1=1 , f2=1 ,f=1 ;
    	cout << "THis program calculates the fibonacci series upto 200 \n" ;
        for(int i=2; (f1<=200); i++)
        {
            cout << f1 << endl;
            f=f1+f2 ;
            f1=f2 ;
            f2=f;
        }
    return 0;
}
