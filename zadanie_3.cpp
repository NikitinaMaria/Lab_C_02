#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Data entry
    cout << "Enter a number:" << endl;
    int x;
    cin >> x;
    cout << x << " = ";
    // starting value
    int start = x;
    // Current divisor
    int del = 2;
    if (x == 1) {
        cout << 1 << endl;
    }
    else {
        while (x > 1) {
            if (x % del == 0) {
                if (x == start) {
                    cout << del;
                }
                else {
                    cout << " * " << del;
                }
                x /= del;
            }
            else { // Change to a new divisor
                del++;
            }
        }
    }
    return 0;
}