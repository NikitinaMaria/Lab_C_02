#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Data entry
    cout << "Enter a in ax = b (mod m):" << endl;
    int a;
    cin >> a;

    cout << "Enter b in ax = b (mod m):" << endl;
    int b;
    cin >> b;

    cout << "Enter m in ax = b (mod m):" << endl;
    int m;
    cin >> m;

    int x;
    
    // Checking if there are solutions
    int check = 0;

    for (x = 0; x <= m; x++) {
        if ((a * x) % m == b) {
            check = 1;
            cout << "x = " << x << endl;
        }
    }

    if (check == 0) {
        cout << -1 << " (There are no solutions)" << endl;
    }
    return 0;
}
