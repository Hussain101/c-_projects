#include <iostream>

using namespace std;

int main()
{
    int date,month ;
    int startdate,startmonth,enddate,endmonth ;
    char continuee;
    cout << "Enter the date of your birthday's month=";
    cin >> date ;
    cout << "Enter your birthday's month=" ;
    cin >> month ;
    if(month>12 || date>31)
        cout << "Invalid input\n";
        else
        {
         startdate = 21;
         enddate = 19 ;
         startmonth = 3;
         endmonth = 4;
        if((month==startmonth && date>=startdate) ||(month==endmonth && date<=enddate) )
    {
     cout << "Your sign is Aries \n";
     cout << "Leo and Sagittarius will be compatible for your birthday\n" ;
     if((date>enddate-3) && (month==endmonth))
     {
         cout << "You are a cusp baby and with the adjacent sign: Taurus\n";
     }
     else if((date<enddate+3) && (month==endmonth))
        cout << "You are a cusp baby and with the adjacent sign: Pieces\n";
    }
        startdate = 26;
         enddate = 26 ;
         startmonth = 4;
         endmonth = 5;
        if((month==startmonth && date>=startdate) ||(month==endmonth && date<=enddate) )
    {
     cout << "Your sign is Taurus \n";
     cout << "Virgo and Capricorn will be compatible for your birthday\n" ;
     if((date>enddate-3) && (month==endmonth))
     {
         cout << "You are a cusp baby and with the adjacent sign: Germini\n";
     }
     else if((date<enddate+3) && (month==endmonth))
        cout << "You are a cusp baby and with the adjacent sign: Aries\n";
    }
        startdate = 21;
         enddate = 21 ;
         startmonth = 5;
         endmonth = 6;
        if((month==startmonth && date>=startdate) ||(month==endmonth && date<=enddate) )
    {
     cout << "Your sign is Germini \n";
     cout << "Libra and Aquarius will be compatible for your birthday\n" ;
     if((date>enddate-3) && (month==endmonth))
     {
         cout << "You are a cusp baby and with the adjacent sign: Cancer\n";
     }
     else if((date<enddate+3) && (month==endmonth))
        cout << "You are a cusp baby and with the adjacent sign: Taurus\n";
    }
        startdate = 22;
         enddate = 22 ;
         startmonth = 6;
         endmonth = 7;
        if((month==startmonth && date>=startdate) ||(month==endmonth && date<=enddate) )
    {
     cout << "Your sign is Cancer \n";
     cout << "Scorpio and Pieces will be compatible for your birthday\n" ;
     if((date>enddate-3) && (month==endmonth))
     {
         cout << "You are a cusp baby and with the adjacent sign: Leo\n";
     }
     else if((date<enddate+3) && (month==endmonth))
        cout << "You are a cusp baby and with the adjacent sign: Germini\n";
    }
        startdate = 23;
         enddate = 22;
         startmonth = 7;
         endmonth = 8;
        if((month==startmonth && date>=startdate) ||(month==endmonth && date<=enddate) )
    {
     cout << "Your sign is Leo \n";
     cout << "Aries and Sagittarius will be compatible for your birthday\n" ;
     if((date>enddate-3) && (month==endmonth))
     {
         cout << "You are a cusp baby and with the adjacent sign: Virgo\n";
     }
     else if((date<enddate+3) && (month==endmonth))
        cout << "You are a cusp baby and with the adjacent sign: Cancer\n";
    }
        startdate = 23;
         enddate = 22 ;
         startmonth = 8;
         endmonth = 9;
        if((month==startmonth && date>=startdate) ||(month==endmonth && date<=enddate) )
    {
     cout << "Your sign is Virgo \n";
     cout << "Taurus and Capricorn will be compatible for your birthday\n" ;
     if((date>enddate-3) && (month==endmonth))
     {
         cout << "You are a cusp baby and with the adjacent sign: libra\n";
     }
     else if((date<enddate+3) && (month==endmonth))
        cout << "You are a cusp baby and with the adjacent sign: Leo\n";
    }
        startdate = 23;
         enddate = 22 ;
         startmonth = 9;
         endmonth = 10;
        if((month==startmonth && date>=startdate) ||(month==endmonth && date<=enddate) )
    {
     cout << "Your sign is libra \n";
     cout << "Germini and Aquaruis will be compatible for your birthday\n" ;
     if((date>enddate-3) && (month==endmonth))
     {
         cout << "You are a cusp baby and with the adjacent sign: Scorpio\n";
     }
     else if((date<enddate+3) && (month==endmonth))
        cout << "You are a cusp baby and with the adjacent sign: Virgo\n";
    }
        startdate = 23;
         enddate = 21 ;
         startmonth = 10;
         endmonth = 11;
        if((month==startmonth && date>=startdate) ||(month==endmonth && date<=enddate) )
    {
     cout << "Your sign is Scorpio \n";
     cout << "Cancer and Pieces will be compatible for your birthday\n" ;
     if((date>enddate-3) && (month==endmonth))
     {
         cout << "You are a cusp baby and with the adjacent sign: Sagittarius\n";
     }
     else if((date<enddate+3) && (month==endmonth))
        cout << "You are a cusp baby and with the adjacent sign: libra\n";
    }
        startdate = 22;
         enddate = 21 ;
         startmonth = 11;
         endmonth = 12;
        if((month==startmonth && date>=startdate) ||(month==endmonth && date<=enddate) )
    {
     cout << "Your sign is Sagittarius \n";
     cout << "Aries and Leo will be compatible for your birthday\n" ;
     if((date>enddate-3) && (month==endmonth))
     {
         cout << "You are a cusp baby and with the adjacent sign: Capricorn\n";
     }
     else if((date<enddate+3) && (month==endmonth))
        cout << "You are a cusp baby and with the adjacent sign: Scorpio\n";
    }
        startdate = 22;
         enddate = 19 ;
         startmonth = 12;
         endmonth = 1;
        if((month==startmonth && date>=startdate) ||(month==endmonth && date<=enddate) )
    {
     cout << "Your sign is Capricorn \n";
     cout << "Taurus and Virgo will be compatible for your birthday\n" ;
     if((date>enddate-3) && (month==endmonth))
     {
         cout << "You are a cusp baby and with the adjacent sign: Aquarius\n";
     }
     else if((date<enddate+3) && (month==endmonth))
        cout << "You are a cusp baby and with the adjacent sign: Sagittarius\n";
    }
        startdate = 20;
         enddate = 18 ;
         startmonth = 11;
         endmonth = 2;
        if((month==startmonth && date>=startdate) ||(month==endmonth && date<=enddate) )
    {
     cout << "Your sign is Aquarius \n";
     cout << "Germini and Libra will be compatible for your birthday\n" ;
     if((date>enddate-3) && (month==endmonth))
     {
         cout << "You are a cusp baby and with the adjacent sign; Pisces\n";
     }
     else if((date<enddate+3) && (month==endmonth))
        cout << "You are a cusp baby and with the adjacent sign: Capricorn\n";
    }
        startdate = 19;
         enddate = 26 ;
         startmonth = 2;
         endmonth = 3;
        if((month==startmonth && date>=startdate) ||(month==endmonth && date<=enddate) )
    {
     cout << "Your sign is Pisces \n";
     cout << "Cancer and Scorpio will be compatible for your birthday\n" ;
     if((date>enddate-3) && (month==endmonth))
     {
         cout << "You are a cusp baby and with the adjacent sign: Aries\n";
     }
     else if((date<enddate+3) && (month==endmonth))
        cout << "You are a cusp baby and with the adjacent sign: Aquarius\n";
    }
        }
    return 0;
}
