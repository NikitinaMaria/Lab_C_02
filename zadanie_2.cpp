#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Data entry
    cout << "Enter a three-digit number:" << endl;
    int x;
    cin >> x;
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        // Add the last digit of the number to the sum
        sum += x % 10;
        // Delete the last digit of the number
        x /= 10;
    }
    cout << "Sum of digits:" << sum << endl;
    return 0;
}