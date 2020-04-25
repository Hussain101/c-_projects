#include <iostream>

using namespace std;

int main()
{
    int deals,answer ;
    char option ;
    cout << endl ;
    cout << "             Welcome to Dhaba "<< endl ;
    cout << "/////MENU/////\n";
    cout << "Choose an option" << endl ;
    cout << "Option:0     Reshmi Kabab 4 pcs = Rs400 \n";
    cout << "Option:1     Special Murgh Pulao 1 plate=Rs 250\n";
    cout << "Option:2     Special Mutton Pulao 1 plate=Rs 350\n";
    cout << "Option:3     Special Beef Pulao 1 plate=Rs 250\n";
    cout << "Option:4     Special Matar Pulao 1 plate=Rs 150\n";
    cout << "Option:5     Special Beef Karhai 1 kg=Rs 1600\n";
    cout << "Option:6     Special Mutton Karhai 1 kg=Rs 2000\n";
    cout << "Option:7     Special Chicken Karhai 1 kg=Rs 750\n";
    cout << "Option:8     Special Lassi 1 glass =Rs 100\n";
    cout << "Option:9     Special chaye ke piyali 1 =Rs 50\n";
    cout << endl ;;
    cout << "Enter the option number=" ;
    cin >> option ;
    cout << "Enter the number of deals=" ;
    cin >> deals ;
    switch(option)
    {
        case '0' :
         cout << "Your deal is special Reshmi Kabab ";
         cout << "Quantity of deal is: " << 4*400 << endl ;
         answer = deals*400 ;
         cout << "Total bill is=Rs" << answer ;
         break ;
         case '1' :
         cout << "Your deal is special Murgh Pulao ";
         cout << "Quantity of deal is: " << 1*250 << endl ;
         answer = deals*250 ;
         cout << "Total bill is=Rs" << answer ;
         break ;
         case '2' :
         cout << "Your deal is special Muttton Pulao ";
         cout << "Quantity of deal is: " << 1*350 << endl ;
         answer = deals*350 ;
         cout << "Total bill is=Rs" << answer ;
         break ;
         case '3' :
         cout << "Your deal is special Beef Pulao ";
         cout << "Quantity of deal is: " << 1*250 << endl ;
         answer = deals*250 ;
         cout << "Total bill is=Rs" << answer ;
         break ;

         case '4' :
         cout << "Your deal is special Matar Pulao ";
         cout << "Quantity of deal is: " << 1*150 << endl ;
         answer = deals*150 ;
         cout << "Total bill is=Rs" << answer ;
         break ;

         case '5' :
         cout << "Your deal is special Beef Karhai ";
         cout << "Quantity of deal is: " << 1*1600 << endl ;
         answer = deals*1600 ;
         cout << "Total bill is=Rs" << answer ;
         break ;

         case '6' :
         cout << "Your deal is special Mutton Karhai ";
         cout << "Quantity of deal is: " << 1*2000 << endl ;
         answer = deals*2000 ;
         cout << "Total bill is=Rs" << answer ;
         break ;

         case '7' :
         cout << "Your deal is special Cicken karahi ";
         cout << "Quantity of deal is: " << 1*750 << endl ;
         answer = deals*750 ;
         cout << "Total bill is=Rs" << answer ;
         break ;

         case '8' :
         cout << "Your deal is special Lassi glass ";
         cout << "Quantity of deal is: " << 1*100 << endl ;
         answer = deals*1000 ;
         cout << "Total bill is=Rs" << answer ;
         break ;

         case '9' :
         cout << "Your deal is Chaye ke pilayi ";
         cout << "Quantity of deal is: " << 1*50 << endl ;
         answer = deals*50 ;
         cout << "Total bill is=Rs" << answer ;
         break ;
         default:
            cout << "Not a valid option,choose again\n";
    }
    cout << endl ;
    cout << "Thanks for ordering" ;
    return 0;
}
