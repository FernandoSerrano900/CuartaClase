#include <iostream>

using namespace std;

int main()
{
    int playerPerformance;

    cout << "Rate the performance of the player in a system of 5 stars (1 is the worst and 5 the best)" << endl;
    cin >> playerPerformance;

    if (playerPerformance > 5 || playerPerformance < 1)
    {
        cout << "Please enter a valid rate" << endl;
    }
    else
    {

        switch (playerPerformance)
        {
        case 1:
            cout << "Very bad performance, train more." << endl;
            break;

        case 2:
            cout << "Bad performance, you need to train." << endl;
            break;

        case 3:
            cout << "Regular performance, you need to train." << endl;
            break;

        case 4:
            cout << "Good performance, keep training." << endl;
            break;

        case 5:
            cout << "Excellent performance, great job!" << endl;
            break;

        default:
            break;
        }

        return 0;
    }
}