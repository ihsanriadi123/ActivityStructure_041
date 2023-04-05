#include <iostream>
using namespace std;

struct mahasiswa
{
	string nim;
	string nama;
	string alamat;
	int umur;
};

int main()
{
	mahasiswa mhs;

	cout << "masukkan nim = ";
	cin >> mhs.nim;
	cout << "masukkan nama = ";
	cin >> mhs.nama;
	cout << "masukkan alamat = ";
	cin >> mhs.alamat;
	cout << "masukkan umur =";
	cin >> mhs.umur;

	cout << "\nmasukkan nim = " << mhs.nim;
	cout << "\nmasukkan nama =" << mhs.nama;
	cout << "\nmasukkan alamat = " << mhs.alamat;
	cout << "\nmasukkan umur = " << mhs.umur;
}