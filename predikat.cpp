#include <iostream>

using namespace std;
int main() {
    int skor;

    cout << "Masukkan skor: ";
    cin >> skor;

    if (skor >= 81 && skor <= 100) {
        cout << "Nilai: A (Sangat Baik)" << endl;
    } else if (skor >= 70 && skor <= 80) {
        cout << "Nilai: B (Baik)" << endl;
    } else if (skor >= 61 && skor <= 69) {
        cout << "Nilai: C (Cukup Baik)" << endl;
    } else if (skor >= 45 && skor <= 60) {
        cout << "Nilai: D (Cukup)" << endl;
    } else if (skor >= 0 && skor <= 44) {
        cout << "Nilai: E (Gagal)" << endl;
    } else {
        cout << "Skor tidak valid" << endl;
    }

    return 0;
}
