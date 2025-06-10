//
// Created by usernamenuh on 6/10/25.

#include <iostream>
#include <string>

using namespace std;

void gameOver(string reason) {
    cout << "\n💀 GAME OVER: " << reason << endl;
    cout << "Terima kasih sudah bermain!" << endl;
}

void menang() {
    cout << "\n🏆 SELAMAT! Kamu berhasil keluar dari hutan dan menemukan harta karun!" << endl;
    cout << "Petualanganmu berakhir dengan kemenangan!" << endl;
}

int main() {
    string nama;
    cout << "Masukkan namamu: ";
    getline(cin, nama);

    cout << "\nHalo " << nama << "! Selamat datang di...\n";
    cout << "=== PETUALANGAN MISTERI DI HUTAN GELAP ===\n";
    cout << "Kamu terbangun di tengah hutan yang gelap dan tidak tahu arah pulang.\n";

    cout << "\nKamu melihat dua jalur: kiri (1) atau kanan (2). Pilih (1/2): ";
    int pilihan1;
    cin >> pilihan1;

    if (pilihan1 == 1) {
        cout << "\nKamu berjalan ke kiri dan menemukan sungai besar.\n";
        cout << "Apa yang ingin kamu lakukan?\n";
        cout << "1. Menyeberang sungai\n2. Mengikuti aliran sungai\n";
        int pilihan2;
        cin >> pilihan2;

        if (pilihan2 == 1) {
            gameOver("Kamu terseret arus sungai yang deras.");
        } else if (pilihan2 == 2) {
            cout << "\nKamu menemukan perahu tua dan menggunakannya untuk menyusuri sungai.\n";
            cout << "Setelah beberapa waktu, kamu melihat sebuah pondok misterius.\n";
            cout << "1. Masuk ke pondok\n2. Melewati dan terus jalan\n";
            int pilihan3;
            cin >> pilihan3;

            if (pilihan3 == 1) {
                gameOver("Pondok itu ternyata perangkap penyihir jahat.");
            } else {
                menang();
            }
        } else {
            gameOver("Pilihan tidak valid.");
        }
    } else if (pilihan1 == 2) {
        cout << "\nJalur kanan mengarah ke gua gelap.\n";
        cout << "1. Masuk ke gua\n2. Berbalik arah\n";
        int pilihan2;
        cin >> pilihan2;

        if (pilihan2 == 1) {
            gameOver("Gua tersebut dihuni oleh beruang lapar.");
        } else {
            gameOver("Kamu tersesat semakin jauh di hutan.");
        }
    } else {
        gameOver("Pilihan tidak valid.");
    }

    return 0;
}
