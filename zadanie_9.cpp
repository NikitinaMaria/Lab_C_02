#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Enter N >= 2:" << endl;
    int N;
    cin >> N;

    // The current number
    int x;

    int max1;
    cin >> max1;
    int max2;
    cin >> max2;

    // Ordering max1 and max2
    if (max2 > max1) {
        x = max1;
        max1 = max2;
        max2 = x;
    }

    int min1 = max1;
    int min2 = max2;

    for (int i = 2; i < N; i++) {
        cin >> x;

        // Checking the new number
        if (x > max2) {
            if (x >= max1) {
                max2 = max1;
                max1 = x;
            }
            else {
                max2 = x;
            }
        }

        if (x < min1) {
            if (x <= min2) {
                min1 = min2;
                min2 = x;
            }
            else {
                min1 = x;
            }
        }
    }

    cout << "Maximum numbers: " << max1 << " and " << max2 << endl;
    cout << "Minimum numbers: " << min1 << " and " << min2 << endl;
    cout << "(The same numbers are also taken into account)." << endl;
    return 0;
}