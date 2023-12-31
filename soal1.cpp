#include <iostream>
using namespace std;

void ReviewData(double data[], int size) {
    if (size == 0) {
        cout << "Tidak ada data";
        return;
    }

    double lowest = data[0];
    double highest = data[0];
    double total = 0.0;

    for (int i = 0; i < size; ++i) {
        if (data[i] < lowest) {
            lowest = data[i];
        }
        if (data[i] > highest) {
            highest = data[i];
        }
        total += data[i];
    }

    double average = total / size;

   cout << "[" << lowest << "," << highest << ",";
    printf("%.1f", average);
    :cout << "]";
}

int main() {
    double input1[] = {4.5, 2.0, 1.5, 3.0, 2.5, 4.0, 5.0, 3.5, 2.0, 1.0};
    int size1 = sizeof(input1) / sizeof(input1[0]);
    analyzeData(input1, size1);

    double input2[] = {5, 4, 2.5, 5, 3.6, 1.1, 3.6, 4, 4.2, 1.5};
    int size2 = sizeof(input2) / sizeof(input2[0]);
    analyzeData(input2, size2);

    return 0;
}
