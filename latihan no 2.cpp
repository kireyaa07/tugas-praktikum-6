#include <iostream>
using namespace std;

int main() 
{
    int pilihan;

    
    cout << "Masukkan nomor hari (1-7): ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            cout << "1 = MONDAY" << endl;
            break;
        case 2:
            cout << "2 = TEUSDAY" << endl; 
            break;
        case 3:
            cout << "3 = WEDNESDAY" << endl;
            break;
        case 4:
            cout << "4 = THURSDAY" << endl;
            break;
        case 5:
            cout << "5 = FRIDAY" << endl;
            break;
        case 6:
            cout << "6 = SATURDAY" << endl;
            break;
        case 7:
            cout << "7 = SUNDAY" << endl;
            break;
        default:
            cout << "Pilihan tidak valid! Masukkan angka antara 1 sampai 7." << endl;
            break;
    }

    return 0;
}
