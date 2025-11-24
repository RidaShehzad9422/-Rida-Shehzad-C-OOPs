#include <iostream>
using namespace std;

bool isPalindromeNumber(long long n) {
    if (n < 0) return false;
    long long original = n, reversed = 0;
    while (n > 0) {
        int d = n % 10;
        reversed = reversed * 10 + d;
        n /= 10;
    }
    return original == reversed;
}

int main() {
    long long x;
    cout << "Enter an integer: ";
    if (!(cin >> x)) return 0;
    cout << x << (isPalindromeNumber(x) ? " is a palindrome\n" : " is NOT a palindrome\n");
    return 0;
}

