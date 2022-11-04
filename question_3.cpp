#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c, delta;

    cout << "Enter a : ";
    cin >> a;

    cout << "Enter b : ";
    cin >> b;

    cout << "Enter c : ";
    cin >> c;

    delta = (b * b) - (4 * a * c);

    if (delta < 0)
        cout << "This number doesnt have square root";

    else if (delta > 0)
    {
        cout << "x1 = " << (-b + sqrt(delta)) / (2 * a);
        cout << "x2 = " << (-b - sqrt(delta)) / (2 * a);
    }

    else
        cout << "x = " << (-b + sqrt(delta)) / (2 * a);

    return 0;
}
