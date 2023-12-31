#include <iostream>
using namespace std;
bool checkDuplicates(const int nums[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (nums[i] == nums[j]) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    const int data[] = {20, 1, 3, 2, 4, 6, 8, 5, 7, 9, 11, 13, 15, 10, 12, 14, 16, 18, 20, 17, 19};
    int size = sizeof(data) / sizeof(data[0]);

    if (checkDuplicates(data, size)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}

