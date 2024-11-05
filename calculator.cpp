#include <iostream>
#include <cmath>
using namespace std;

long long eksponensial(long x, long y) {
    if (y <= 1) {
        return x;
    }
    else {
        return x * eksponensial(x,(y-1));
    }
}

int main() {
    int pilihan;
    cout << "Haloo! Aku adalah sebuah program yang bisa melakukan operasi aritmatika, ";
    cout << "silahkan pilih operasi yang kamu inginkan: " << endl;
    cout << "1. penjumlahan" << endl;
    cout << "2. pengurangan" << endl;
    cout << "3. perkalian" << endl;
    cout << "4. pembagian" << endl;
    cout << "5. eksponensial" << endl;
    cout << "6. pengakaran" << endl;
    cout << " " << end/Users/macbook/Desktop/tugas2/tugas2l;
    cout << "pilih nomor operasi pilihanmu: ";
    cin >> pilihan;
    switch(pilihan) {
        case 1:
            int a1, b1;
            cout << "operasi a + b" << endl;
            cout << "pilih nilai a: ";
            cin >> a1;
            cout << "pilih nilai b: ";
            cin >> b1;
            cout << "hasilnya adalah: " << a1+b1 << endl;
            break;
        case 2:
            int a2, b2;
            cout << "operasi a - b" << endl;
            cout << "pilih nilai a: ";
            cin >> a2;
            cout << "pilih nilai b: ";
            cin >> b2;
            cout << "hasilnya adalah: " << a2-b2 << endl;
            break;
        case 3:
            int a3, b3;
            cout << "operasi a x b" << endl;
            cout << "pilih nilai a: ";
            cin >> a3;
            cout << "pilih nilai b: ";
            cin >> b3;
            cout << "hasilnya adalah: " << a3*b3 << endl;
            break;
        case 4:
            float a4, b4;
            cout << "operasi a : b" << endl;
            cout << "pilih nilai a: ";
            cin >> a4;
            cout << "pilih nilai b: ";
            cin >> b4;
            cout << "hasilnya adalah: " << a4/b4 << endl;
            break;
        case 5:
            long a5, b5;
            cout << "operasi a pangkat b" << endl;
            cout << "pilih nilai a: ";
            cin >> a5;
            cout << "pilih nilai b: ";
            cin >> b5;
            cout << "hasilnya adalah: " << eksponensial(a5, b5) << endl;
            break;
        case 6:
            float a6;
            cout << "operasi a akar 2" << endl;
            cout << "pilih nilai a: ";
            cin >> a6;
            cout << "hasilnya adalah: " << sqrt(a6) << endl;
            break;
        default :
            cout << "tolong pilih angka 1 sampai 6" << endl;
            break;
    }
    cout << " " << endl;
    cout << "terima kasih sudah menggunakan program saya :>" << endl;
    return 0;
}
