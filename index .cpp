#include <iostream>
using namespace std;
int main() 
{
    int num, i, j;
    char pat, cond;
    const char in = 'i', In = 'I', d = 'd', D = 'D';

    cout << "Enter a Condition increasing or decreasing (i/d): ";
    cin >> cond;

    cout << "Enter a character for the pattern: ";
    cin >> pat;

    cout << "Enter a Number: ";
    cin >> num;

    if (cond == in || cond == In) {
        // Correct increasing pattern
        for (i = 1; i <= num; i++) {
            for (j = 1; j <= i; j++) {
                cout << " " << pat;
            }
            cout << "\n";
        }
    } 
    else if (cond == d || cond == D) {
        // Correct decreasing pattern
        for (i = num; i >= 1; i--) {
            for (j = 1; j <= i; j++) {
                cout << " " << pat;
            }
            cout << "\n";
        }
    } 
    else {
        cout << "Invalid choice! Enter 'i' for increasing or 'd' for decreasing.\n";
    }

    return 0;
}
