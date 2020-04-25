#include <iostream>

using namespace std;

int main()
{
	int f1=1,f2=1,f=1 ;
	
    cout << "This proga=ram is for generate a serires of fibaonnci upto 200" << endl;
    for (int i=2 ; (f1<=200);i++)
    {
    	cout << f1 << endl;
    	f=f1+f2;
    	f1=f2;
    	f=f2;
	}
    return 0;
}
