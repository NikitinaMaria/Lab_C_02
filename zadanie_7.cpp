#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Data entry
    cout << "Enter a number:" << endl;
    int x;
    cin >> x;

    int a, b;
    int check = 0;
    int start1 = int(pow(x, 1.0 / 3));

    for (int i1 = start1; i1 >= 0; i1--) {
        if (check == 1) { // Whether suitable numbers have already been found
            break;
        }
        a = i1 * i1 * i1;
        int start2 = int(pow(x - a, 1.0 / 3));

        for (int i2 = start2; i2 >= 0; i2--) {
            if (check == 1) {
                break;
            }
            b = i2 * i2 * i2;

            if ((a + b == x) && (check == 0)) {
                cout << i1 << " " << i2 << endl;
                check = 1;
            }
        }
    }

    if (check == 0) {
        cout << "Impossible" << endl;
    }
    return 0;
}