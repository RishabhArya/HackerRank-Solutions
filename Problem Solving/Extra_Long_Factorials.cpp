#include <bits/stdc++.h>
#include <vector>
#include <iostream>

using namespace std;

// Complete the extraLongFactorials function below.
void extraLongFactorials(int n) {
    if (n == 1) {
        cout << 1 << endl;
        return;
    }

    vector<int> digits(1, 1);
    for (int curr(2); curr <= n; ++curr) {
        auto digit_count = digits.size();

        // Every digit times the number.
        for (int i(0); i < digit_count; ++i) {
            digits[i] *= curr;
        }

        // From the units to tenths, hundreds...
        // Perform the carry.
        for (int i(0); i < digit_count; ++i) {
            auto carry = digits[i] / 10;
            digits[i] = digits[i] % 10;
            if (i != digit_count - 1) {
                // Add the carry to the next digit.
                digits[i + 1] += carry;
            } else {
                // New leftmost digit(s).
                if (carry > 0) {
                    int & remaining(carry);
                    do {
                        auto digit = remaining % 10;
                        remaining /= 10;
                        digits.push_back(digit);
                    } while (remaining > 0);
                }
            }
        }
    }

    // Print out the digits.
    for (auto it = digits.rbegin(); it != digits.rend(); ++it) {
        cout << *it;
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    extraLongFactorials(n);

    return 0;
}

