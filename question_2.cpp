#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter a parameter : ";
    cin >> a;

    cout << "Enter b parameter : ";
    cin >> b;

    cout << "Enter c parameter : ";
    cin >> c;

    if (c * c == (a * a) + (b * b) 
     || a * a == (c * c) + (b * b) 
     || b * b == (a * a) + (c * c))
     
        cout << "This triangle is rectangular.";
    else
        cout << "This triangle is not rectangular.";

    return 0;
}