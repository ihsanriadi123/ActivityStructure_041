#include <iostream>
using namespace std;

struct detailalamat {
	string desa;
	string kota;
};

struct mahasiswa
{
	string nim;
	string nama;
	detailalamat alamat;
	int umur;

};

int main()
{
	mahasiswa mhs;

	cout << "masukkan nim = ";
	cin >> mhs.nim;
	cout << "masukkan nama = ";
	cin >> mhs.nama;
	cout << "alamat :" << endl;
	cout << "\nmasukkan desa = ";
	cin >> mhs.alamat.desa;
	cout << "\nmasukkan kota = ";
	cin >> mhs.alamat.kota;
	cout << "masukkan umur = ";
	cin >> mhs.umur;

	cout << "\nnim = " << mhs.nim;
	cout << "\nnama = " << mhs.nama;
	cout << "\ndesa = " << mhs.alamat.desa;
	cout << "\nkota = " << mhs.alamat.kota;
	cout << "\numur = " << mhs.umur;
}