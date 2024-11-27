#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
	
    map<string, string> users;
    int choice;

    while (true) {
        
        cout << "\n=== Sistem Login dan Registrasi ===" << endl;
        cout << "1. Registrasi" << endl;
        cout << "2. Login" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilih opsi: ";
        cin >> choice;

        if (choice == 1) {
            
            string username, password;
            cout << "Masukkan username baru: ";
            cin >> username;

            
            if (users.find(username) != users.end()) {
                cout << "Username sudah terdaftar.\n";
            } else {
                cout << "Masukkan password: ";
                cin >> password;
                users[username] = password;
                cout << "Registrasi berhasil!\n";
            }

        } else if (choice == 2) {
           
            string username, password;
            cout << "Masukkan username: ";
            cin >> username;
            cout << "Masukkan password: ";
            cin >> password;

           
            if (users.find(username) != users.end() && users[username] == password) {
                cout << "Login berhasil! Selamat datang, " << username << "!\n";
            } else {
                cout << "Username atau password salah.\n";
            }

        } else if (choice == 3) {
           
            cout << "Keluar dari program. Terima kasih!\n";
            break;
        } else {
           
            cout << "Pilihan tidak valid. Coba lagi.\n";
        }
    }
    
}
