#include <iostream>

using namespace std;

int main()
{
    int res, n;

    cout << "Inster a whole number" << endl;
    cin >> n;

    res = n % 2;

    switch (res)
    {
    case 1:
        cout << "The number is odd" << endl;

        break;

    case 0:
        cout << "The number is even" << endl;

        break;

    default:
        cout << "Eror insert a valid number" << endl;
        break;
    }

    return 0;
}