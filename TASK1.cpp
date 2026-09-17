#include <iostream>
using namespace std;

int main() {
    int N, K;

    cout << "Masukkan jumlah astronot (N): ";
    cin >> N;

    cout << "Masukkan nilai K awal: ";
    cin >> K;

    // Array untuk menyimpan nomor astronot
    int astronot[100];

    for (int i = 0; i < N; i++) {
        astronot[i] = i + 1;
    }

    int jumlah = N;
    int posisi = 0;

    cout << "\nUrutan astronot yang dieliminasi:\n";

    while (jumlah > 1) {

        // Menentukan posisi astronot yang dieliminasi
        posisi = (posisi + K - 1) % jumlah;

        int tereliminasi = astronot[posisi];

        cout << tereliminasi << " ";

        // Mengubah nilai K
        if (tereliminasi % 2 == 0) {
            K = K + 2;
        } else {
            K = K - 1;

            if (K < 2) {
                K = 2;
            }
        }

        // Menghapus astronot dari array
        for (int i = posisi; i < jumlah - 1; i++) {
            astronot[i] = astronot[i + 1];
        }

        jumlah--;

        // Jika posisi sudah berada di luar jumlah astronot
        if (posisi == jumlah) {
            posisi = 0;
        }
    }

    cout << "\n\nAstronot terakhir yang bertahan: "
         << astronot[0] << endl;

    cout << "Nilai K terakhir: " << K << endl;

    return 0;
}
