#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Data entry
    cout << "Enter the first side of the triangle:" << endl;
    int a;
    cin >> a;
    cout << "Enter the second side of the triangle:" << endl;
    int b;
    cin >> b;
    cout << "Enter the third side of the triangle:" << endl;
    int c;
    cin >> c;
    if ((a + b <= c) || (a + c <= b) || (b + c <= a)) { // Checking the triangle inequality
        cout << "Impossible" << endl;
    }
    else { // Finding the cosines of angles
        double cos1 = (b * b + c * c - a * a) / (2.0 * b * c);
        double cos2 = (a * a + c * c - b * b) / (2.0 * a * c);
        double cos3 = (a * a + b * b - c * c) / (2.0 * a * b);
        double check = cos1 * cos2 * cos3;
            if (check == 0) {
                cout << "Right" << endl;
            }
            else if (check < 0) {
                cout << "Abtuse" << endl;
            }
            else {
                cout << "Acute" << endl;
            }
    }
    return 0;
}
