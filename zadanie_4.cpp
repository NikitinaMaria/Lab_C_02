#include <iostream>
#include <string>

using namespace std;
int prime(int n) {
    int res = 0;

    // Cases for 2 and 3
    if (n == 1) {
        res = 2;
    }
    else if (n == 2) {
        res = 3;
    }

    else {
        res = 3;
        int check;

        while (n > 2) {
            check = 0;
            res += 2;

            // Prime number or not
            for (int i = 3; i < sqrt(res) + 1; i += 2) {
                if (res % i == 0) {
                    check = 1;
                }
            }

            if (check == 0) {
                n -= 1;
            }
        }
    }
    return res;
}

int main()
{
    cout << "Enter a number:" << endl;
    int x;
    cin >> x;
    cout << "Prime number: " << prime(x) << endl;
    return 0;
}