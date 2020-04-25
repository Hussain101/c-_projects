#include <iostream>

using namespace std;

int main()
{
    int num , binary=0 ;
    int i = 1 , rem ;
    cout << "This program converts the number into its equivalent binary number." << endl;
    cout << "Enter the number=" ;
    cin >> num ;

    while(num!=0)
    {

        rem = num%2;
        num /=2 ;
        binary += rem*i ;
         i*=10 ;
    }
    cout << "The equivalent number is =" << binary ;
    return 0;
}
