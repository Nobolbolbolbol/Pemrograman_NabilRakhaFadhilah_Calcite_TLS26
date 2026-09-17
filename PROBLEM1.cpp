#include <iostream>
#include <string>
using namespace std;

int main() {
    string pesan, hasil = "";

    cout << "Masukkan pesan: ";
    cin >> pesan;

    // Huruf pertama tetap
    hasil += pesan[0];

    // Proses huruf berikutnya
    for (int i = 1; i < pesan.length(); i++) {

        // Nilai huruf sekarang dan sebelumnya
        int hurufSekarang = pesan[i] - 'A' + 1;
        int hurufSebelumnya = pesan[i - 1] - 'A' + 1;

        // Pergeseran
        int nilaiBaru = hurufSekarang + hurufSebelumnya;

        // Jika lebih dari 26, kembali ke A
        if (nilaiBaru > 26) {
            nilaiBaru = nilaiBaru - 26;
        }

        // Mengubah angka kembali menjadi huruf
        char hurufBaru = 'A' + nilaiBaru - 1;

        hasil += hurufBaru;
    }

    cout << "Pesan setelah disandi: " << hasil << endl;

    return 0;
}ROB
