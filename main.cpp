#include <iostream>

using namespace std;

int main()
{
    int A,B ;
    char choice;
    double answer;
    cout << "This calculator tales two input from you and work according to your given operation! " << endl;
    cout << "Enter two numbers\n";
    cout << "A=" ;
    cin >> A ;
    cout << "B=" ;
    cin >> B ;
    cout << endl ;
    cout << "Choose your operation from following!\n" ;
    cout << "OP0      Addition\n" ;
    cout << "OP1      Subtraction\n" ;
    cout << "OP2      Product\n" ;
    cout << "OP3      Division\n" ;
    cout << "OP4      Remainder\n" ;
    cout << "OP5      Sq of A\n" ;
    cout << "OP6      Sq of B\n" ;
    cout << "OP7      Inccrement of A\n" ;
    cout << "OP8      Decrement of A\n" ;
    cout << "OP9      Increment of B\n" ;
    cout << endl ;
    cout << "Enter operation number=" ;
    cin >> choice ;
    switch(choice)
    {
    case '0' :
        answer = A+B ;
        cout << "A+B=" << answer << endl ;
        break;

    case '1' :
        answer = A-B ;
        cout << "A-B=" << answer << endl ;
        break;
    case '2' :
        answer = A*B ;
        cout << "A*B=" << answer << endl ;
        break;
    case '3' :
        answer = A/B ;
        cout << "A/B=" << answer << endl ;
        break;
    case '4' :
        answer = A%B ;
        cout << "A%B=" << answer << endl ;
        break;
    case '5' :
        answer = A*A ;
        cout << "A*A=" << answer << endl ;
        break;
    case '6' :
        answer = B*B ;
        cout << "B*B=" << answer << endl ;
        break;
    case '7' :
        answer = A++ ;
        cout << "A increment=" << answer << endl ;
        break;
    case '8' :
        answer = A-- ;
        cout << "A decrement=" << answer << endl ;
        break;
     case '9' :
        answer = B-- ;
        cout << "B decrement=" << answer << endl ;
        break;
     default :
        cout << "Not a vslid operation" ;
    }
    return 0;
}
