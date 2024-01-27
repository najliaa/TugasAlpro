#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>

using namespace std;

// Struktur untuk menyimpan informasi transaksi keuangan
struct Transaction {
    string type;      // "Pendapatan" atau "Pengeluaran"
    string name;      // Nama transaksi
    double amount;    // Nominal transaksi
    string category;  // Kategori transaksi
};

// Kelas untuk merepresentasikan manajemen keuangan
class FinancialManagement {
private:
    double totalIncome;
    double totalExpense;
    double balance;
    vector<Transaction> transactions;

public:
    // Konstruktor untuk inisialisasi manajemen keuangan
    FinancialManagement() : totalIncome(0.0), totalExpense(0.0), balance(0.0) {}

    // Fungsi untuk menambah transaksi pendapatan
    void addIncome() {
        Transaction transaction;
        transaction.type = "Pendapatan";
        cout << "Masukkan nama pendapatan: ";
        cin.ignore();
        getline(cin, transaction.name);
        cout << "Masukkan nominal pendapatan: ";
        cin >> transaction.amount;
        cout << "Masukkan kategori pendapatan: ";
        cin.ignore();
        getline(cin, transaction.category);
        transactions.push_back(transaction);
        totalIncome += transaction.amount;
        balance += transaction.amount;
    }

    // Fungsi untuk menambah transaksi pengeluaran
    void addExpense() {
        Transaction transaction;
        transaction.type = "Pengeluaran";
        cout << "Masukkan nama pengeluaran: ";
        cin.ignore();
        getline(cin, transaction.name);
        cout << "Masukkan nominal pengeluaran: ";
        cin >> transaction.amount;
        cout << "Masukkan kategori pengeluaran: ";
        cin.ignore();
        getline(cin, transaction.category);
        transactions.push_back(transaction);
        totalExpense += transaction.amount;
        balance -= transaction.amount; // Ubah menjadi negatif
    }

    // Fungsi untuk mencetak data keuangan dalam bentuk tabel
    void printFinancialData() const {
        cout << setw(15) << "Jenis" << setw(20) << "Nama" << setw(15) << "Nominal" << setw(20) << "Kategori" << endl;
        cout << setfill('-') << setw(70) << "-" << setfill(' ') << endl;

        for (const Transaction& transaction : transactions) {
            cout << setw(15) << transaction.type << setw(20) << transaction.name << setw(15) << transaction.amount
                 << setw(20) << transaction.category << endl;
        }

        cout << setfill('-') << setw(70) << "-" << setfill(' ') << endl;
        cout << setw(35) << "Total Pendapatan:" << setw(15) << totalIncome << endl;
        cout << setw(35) << "Total Pengeluaran:" << setw(15) << totalExpense << endl; // Ubah menjadi negatif
        cout << setw(35) << "Saldo Akhir:" << setw(15) << balance << endl;
    }

    // Fungsi untuk menyimpan data keuangan ke dalam file
    void saveData() const {
        ofstream file("financial_data.txt");

        if (file.is_open()) {
            file << "Jenis\tNama\tNominal\tKategori\n";
            file << setfill('-') << setw(70) << "-" << setfill(' ') << endl;

            for (const Transaction& transaction : transactions) {
                file << transaction.type << "\t" << transaction.name << "\t" << transaction.amount << "\t"
                     << transaction.category << "\n";
            }

            file << setfill('-') << setw(70) << "-" << setfill(' ') << endl;
            file << "Total Pendapatan:\t" << totalIncome << "\n";
            file << "Total Pengeluaran:\t" << totalExpense << "\n"; // Ubah menjadi negatif
            file << "Saldo Akhir:\t" << balance << "\n";

            cout << "Data berhasil disimpan ke dalam file 'financial_data.txt'.\n";
            file.close();
        } else {
            cout << "Gagal membuka file untuk menyimpan data.\n";
        }
    }
};

int main() {
    FinancialManagement financeManager;

    char choice;

    do {
        cout << "Menu:\n";
        cout << "1. Tambah Pendapatan\n";
        cout << "2. Tambah Pengeluaran\n";
        cout << "3. Informasi Saldo\n";
        cout << "4. Simpan Data\n";
        cout << "5. Exit\n";
        cout << "Pilih: ";
        cin >> choice;

        switch (choice) {
            case '1':
                financeManager.addIncome();
                break;

            case '2':
                financeManager.addExpense();
                break;

            case '3':
                financeManager.printFinancialData();
                break;

            case '4':
                financeManager.saveData();
                break;

            case '5':
                cout << "Keluar dari program.\n";
                break;

            default:
                cout << "Pilihan tidak valid.\n";
        }
    } while (choice != '5');

    return 0;
}