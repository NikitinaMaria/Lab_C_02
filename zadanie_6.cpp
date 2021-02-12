#include <iostream>
#include <string>

using namespace std;

int main()
{
    int x;
    cin >> x;

    int max = x;
    int count = 0;

    while (x != 0) {
        if (x > max) {
            max = x;
            count = 1;
        }
        else if (x == max) {
            count += 1;
        }

        cin >> x;
    }

    cout << "Maximum number: " << max << endl;
    cout << "The number of occurrences of this number: " << count << endl;
    return 0;
}