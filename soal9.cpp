#include <iostream>

using namespace std;
void catatNamaAnak() {
    const int totalAnak = 10;

    string namaAnak[totalAnak];
    int count[totalAnak] = {0};

    for (int i = 0; i < totalAnak; ++i) {
        cout << "Anak ke-" << i + 1 ;
        cin >> namaAnak[i];

        // Meningkatkan jumlah penunjukan nama anak nakal
        for (int j = 0; j <= i; ++j) {
            if (namaAnak[i] == namaAnak[j]) {
                count[j]++;
                break;
            }
        }
    }

    for (int i = 0; i < totalAnak - 1; ++i) {
        for (int j = i + 1; j < totalAnak; ++j) {
            if (count[i] < count[j]) {
                swap(count[i], count[j]);
                swap(namaAnak[i], namaAnak[j]);
            }
        }
    }

    for (int i = 0; i < totalAnak; ++i) {
        cout << namaAnak[i] << ": " << count[i] << " kali" << endl;
    }
}

int main() {
    cout << "Masukkan nama anak yang nakal:\n";
    catatNamaAnak();

    return 0;
}
