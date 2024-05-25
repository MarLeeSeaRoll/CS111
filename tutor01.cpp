#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>


using namespace std;

int readint()//Parameter: x, use for validate input, 
{
    int x;
    cin >> x;

    while(cin.fail())
    {
        cin.clear();
        string notint;
        cin >> notint;
        cout << "Input " << notint << " is not an integer. Enter an integer.";
        cin >> x;
    }

    return x;
}

char signchar(int x)
{
    if(x >= 0)
    {
        return '+';
    }

    else
    {
        return '-';
    }
}

int main()
{
    const int MAXINT = 10;
    const int MININT = -10;
    int counter=0;
    int x;
    int score = 0;
    char reply;

    
    srand(time(0)); 
    cout << "***********************************\n";
    cout << "*        CS111 math tutor         *\n";
    cout << "***********************************\n\n";
    cout << "Enter 'L'' to try a linear  and 'Q' to try a quadratic equation.\nAny other key to quit.";
    cin >> reply;

    while(reply == 'L' || reply == 'Q')
    {
    	counter++;
		int a = rand()%(MAXINT-MININT+1)+MININT;
    	int b = rand()%(MAXINT-MININT+1)+MININT;
        if(reply == 'L')
        {
            cout << "\nWhat is the solution to\n";
            cout << a << " x " << signchar(a * b) << " " << fabs(a * b) << " = 0\n";
            x = readint();

            if( a * x + a * b == 0)
            {
                score++;
                cout << "Great!\n\n";
            }

            else
            {
                cout << "Oops!\n\n";
            }
        }

        else
        {
            cout << "\nWhat is a solution to\n";
            cout << "x^2 "<<signchar( a+b )<< " "<<fabs(a + b)<< " x "<<signchar(a*b)<<" "<<fabs(a*b)<< " = 0\n";
            x = readint();

            if( x * x + (a + b)* x + a * b == 0)
            {
                score++;
                cout << "Great!\n\n";
            }

            else
            {
                cout << "Oops!\n\n";
            }
        }

        cout << "Enter 'L'' to try a linear  and 'Q' to try a quadratic equation.\nAny other key to quit.";
        cin >> reply;
    }

    cout << "Your score is: " << score << endl;
    cout << "You have tried: "<< counter<<endl;
    return 0;
}
