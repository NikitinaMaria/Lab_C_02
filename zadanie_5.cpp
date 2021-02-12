#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Data entry
    cout << "Enter a number:" << endl;
    int x;
    cin >> x;

    int a, b, c, d;
    int check = 0;
    
    for (int i1 = int(sqrt(x)); i1 >= 0; i1--) {
        if (check == 1) { // Whether suitable numbers have already been found
            break;
        }
        a = i1 * i1;
        for (int i2 = int(sqrt(x - a)); i2 >= 0; i2--) {
            if (check == 1) {
                break;
            }
            b = i2 * i2;
            for (int i3 = int(sqrt(x - a - b)); i3 >= 0; i3--) {
                if (check == 1) {
                    break;
                }
                c = i3 * i3;
                for (int i4 = int(sqrt(x - a - b - c)); i4 >= 0; i4--) {
                    if (check == 1) {
                        break;
                    }
                    d = i4 * i4;
                    if ((a + b + c + d == x) && (check == 0)) {
                        cout << i1 << " " << i2 << " " << i3 << " " << i4 << endl;
                        check = 1;
                    }
                }
            }
        }
    }
    return 0;
}