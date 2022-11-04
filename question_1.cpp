#include <iostream>

using namespace std;

int main()
{
    int first_number, second_number;

    cout << "Please enter the first number : ";
    cin >> first_number;

    cout << "Please enter the second number : ";
    cin >> second_number;

    if (first_number > second_number)
        cout << "The bigger number is " << first_number << endl;
    else
        cout << "The bigger number is " << second_number << endl;

    return 0;
}