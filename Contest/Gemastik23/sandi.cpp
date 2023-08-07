#include <iostream>
#include <unordered_map>
using namespace std;

// Membuat tabel kebalikan dari Tabel 2
unordered_map<char, char> inverseTable = {
    {'C', 'A'}, {'B', 'D'}, {'A', 'B'}, {'D', 'C'}
};

// Fungsi untuk mendekripsi pesan
string decryptMessage(const string& encryptedMessage) {
    string decryptedMessage = "";
    for (int i = 0; i < encryptedMessage.length(); i += 2) {
        char firstChar = encryptedMessage[i];
        char secondChar = encryptedMessage[i + 1];
        // Mendekripsi blok pesan dengan tabel kebalikan
        decryptedMessage += inverseTable[firstChar];
        decryptedMessage += inverseTable[secondChar];
    }
    return decryptedMessage;
}

int main() {
    string encryptedMessage;
    cout << "Masukkan pesan yang terenkripsi: ";
    cin >> encryptedMessage;

    string decryptedMessage = decryptMessage(encryptedMessage);

    cout << "Pesan asli: " << decryptedMessage << endl;

    return 0;
}
