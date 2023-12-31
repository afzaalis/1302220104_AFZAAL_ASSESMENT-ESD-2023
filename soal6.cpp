#include <iostream>

using namespace std;

string decryptText(string encryptedText) {
    for (char& ch : encryptedText) {
        if (ch >= 'a' && ch <= 'z') {
            ch -= 5;
            if (ch < 'a') {
                ch += 26;
            }
        } else if (ch >= 'A' && ch <= 'Z') {
            ch -= 5;
            if (ch < 'A') {
                ch += 26;
            }
        }
    }
    return encryptedText;
}

int main() {
    string encryptedText = "xfqfr bfmdz\ngjxtp lzj rfz ifkyfw jxi snm\ngwt, gjxtp qz rfz rfpfs in bfwlty lfp?\nfpz xfdfsl pfrz, rfz lfp ofin ufhfwpz\ndfsl pnwnr xynhpjw otrtp pz pnhp ifwn lwzu";

    cout << "Teks terdekripsi:" << endl;
    cout << decryptText(encryptedText) << endl;

    return 0;
}
