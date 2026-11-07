#include <iostream>
using namespace std;

int main() {
    double totalBelanja;
    char statusMember;

    cout << "Masukkan total belanja (Rp): ";
    cin >> totalBelanja;
    cout << "Apakah memiliki kartu member? (y/t): ";
    cin >> statusMember;

    if (statusMember == 'y' || statusMember == 'Y') {
        
        if (totalBelanja >= 500000) {
            cout << "Selamat! Anda mendapatkan diskon 20%." << endl;
        } else {
            cout << "Selamat! Anda mendapatkan diskon 10%." << endl;
        }
    } else {
    
        if (totalBelanja >= 500000) {
            cout << "Selamat! Anda mendapatkan diskon 5%." << endl;
        } else {
            cout << "Maaf, Anda tidak mendapatkan diskon." << endl;
        }
    }

    return 0;
}
