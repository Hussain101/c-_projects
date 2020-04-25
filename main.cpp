#include <iostream>

using namespace std;

int main()
{
    string ans;
    do
    {
        int arab_no;
        int th_dig,hun_dig,ten_dig,one_dig;
        int hun,ten,one,hund,tend;
        cout << "This program converts the ordinary number to arabic four digit number.\n";
        cout << "Enter the arabic four digit number from 1000 to 3000 =";
        cin >> arab_no;
        th_dig=arab_no - arab_no%1000;
        hun_dig=(arab_no - arab_no%100)-th_dig;
        ten_dig=(arab_no - arab_no%10)-th_dig-hun_dig;
        one_dig=(arab_no -th_dig-hun_dig-ten_dig);
        for(int i;i<=(th_dig/1000);i++)
        {
            cout << "M" ;
        }
        switch(hun_dig)
        {
        case 100 :
            case 200 :
                case 300 :
                    hun=hun_dig/100;
                    while(hun>0)
                    {
                        cout << "C" ;
                        hun--;
                    }
                    break;
                case 400:
                    cout << "Cd" ;
                    break;
                case 500:
                    cout << "d" ;
                    case 600 :
                        case 700 :
                            case 800 :
                            cout << "d" ;
                            hund=hun_dig/100-5;
                            while(hund>0)

        {
            cout << "C" ;
                        hun--;
        }
        break;
                            case 900 :
                                cout << "CM" ;
                                break ;

        }
        switch (ten_dig)
        {
            case 10 :
                case 20 :
                    case 30 :
                        ten=ten_dig/10 ;
                        while(ten>0)
                            {
                        cout << "X" ;
                        ten--;
                    }
                    break;
                case 40:
                    cout << "XL" ;
                    break;
                case 50:
                    cout << "L";
                    case 60 :
                        case 70 :
                            case 80 :
                            cout << "d" ;
                            tend=(ten_dig/100)-5;
                            while(tend>0)

        {
            cout << "X" ;
                        tend--;
        }
        break;
                            case 90 :
                                cout << "XC" ;
                                break ;
        }

    switch(hun_dig)
        {
        case 100 :
            case 200 :
                case 300 :
                    hun=hun_dig/100;
                    while(hun>0)
                    {
                        cout << "C" ;
                        hun--;
                    }
                    break;
                case 400:
                    cout << "Cd" ;
                    break;
                case 500:
                    cout << "d";
                    case 600 :
                        case 700 :
                            case 800 :
                            cout << "d" ;
                            hund=hun_dig/100-5;
                            while(hund>0)

        {
            cout << "C" ;
                        hun--;
        }
        break;
                            case 900 :
                                cout << "CM" ;
                                break ;

        }
        switch (one_dig)
        {
            case 1 :
                case 2 :
                    case 3 :

                        while(ten>0)
                            {
                        cout << "i" ;
                        one_dig--;
                    }
                    break;
                case 4:
                    cout << "iv" ;
                    break;
                case 5:
                    cout << "v";
                    case 60 :
                        case 70 :
                            case 80 :
                            cout << "d" ;
                            one=one_dig-5;
                            while(one>0)

        {
            cout << "i" ;
                        one--;
        }
        break;
                            case 9 :
                                cout << "ix" ;
                                break ;
        }
        cout << "\n Do you want to calculate another year?\n" << "press y for yes." ;
        cin >> ans ;
       }
        while(ans=="y"||ans=="Y");

    return 0;
}
