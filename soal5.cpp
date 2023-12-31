#include <iostream>
using namespace std;

int countUsernameCombinations(const std::string& fullName) {
    int combinations = 0;
    int length = fullName.length();

    for (int i = 1; i <= length && i <= 6; ++i) {
        combinations += length - i + 1;
    }

    return combinations;s
}

int main() {
    string fullName = "Naip Lovyu";
    int totalCombinations = countUsernameCombinations(fullName);

    cout << "Jumlah kombinasi username yang mungkin dari nama lengkap 'Naip Lovyu' adalah: " << totalCombinations << std::endl;

    return 0;
}
