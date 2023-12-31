#include <iostream>

using namespace std;

void printKembalian(int pecahan[], int jumlah[]) {
    cout << "{ ";
    for (int i = 0; i < sizeof(pecahan) / sizeof(pecahan[0]); ++i) {
        cout << "'" << pecahan[i] << "': " << jumlah[i];
        if (i < (sizeof(pecahan) / sizeof(pecahan[0])) - 1) {
            cout << ", ";
        }
    }
    cout << " }" << endl;
}

void hitungKembalian(int totalPembayaran, int totalDibayarkan) {
    int kembalian = totalDibayarkan - totalPembayaran;
    int pecahan[] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100};
    int jumlah[sizeof(pecahan) / sizeof(pecahan[0])] = {0};

    for (int i = 0; i < sizeof(pecahan) / sizeof(pecahan[0]); ++i) {
        jumlah[i] = kembalian / pecahan[i];
        kembalian = kembalian % pecahan[i];
    }

    printKembalian(pecahan, jumlah);
}

int main() {
    cout << "Output: " << endl;
    hitungKembalian(7500, 10000);
    hitungKembalian(8500, 12000);
    hitungKembalian(12500, 100000);

    return 0;
}
