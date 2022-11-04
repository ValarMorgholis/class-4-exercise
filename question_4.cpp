#include <iostream>

using namespace std;

int main()
{
    int x, Y;

    cout << "Please enter x value : ";
    cin >> x;

    if (x < 0)
    {
        Y = x * 3 + 5;

        cout << "Y = " << Y << endl;
    }
    else if (x > 0)
    {
        Y = x * 3 + 5;
        cout << "Y = " << Y << endl;
    }
    else
    {
        Y = 2;
        cout << "Y = 2" << Y << endl;
    }
    
    return 0;
}