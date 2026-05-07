#include <iostream>
using namespace std;

bool isPalindrome(string str, int i, int j) {
    // base case
    if (i > j)
        return true;

    if (str[i] != str[j])
        return false;

    // recursive case
    return isPalindrome(str, i + 1, j - 1);
}

int main() {
    string name = "babbab";
    bool ans = isPalindrome(name, 0, name.length() - 1);
    cout << (ans ? "Palindrome" : "Not Palindrome") << endl;
}
