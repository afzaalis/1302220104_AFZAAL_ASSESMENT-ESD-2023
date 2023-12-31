#include <iostream>
using namespace std;
char toLower(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    }
    return c;
}

bool isPalindrome(const std::string& str) {
    int left = 0;
    int right = str.length()- 1;

    while (left < right) {
        while (left < right && (str[left] == ' ' || str[right] == ' ')) {
            if (str[left] == ' ') {
                left++;
            }
            if (str[right] == ' ') {
                right--;
            }
        }

        char leftChar = toLower(str[left]);
        char rightChar = toLower(str[right]);

        if (leftChar != rightChar) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    string input;
    cout << "Masukkan kata ";
    getline(std::cin, input);

    if (isPalindrome(input)) {
       cout << "Eureeka! Kata atau kalimat ini adalah palindrom.\n";
    } else {
        cout << "Suka blyat! Ini bukan palindrom.\n";
    }

    return 0;
}
