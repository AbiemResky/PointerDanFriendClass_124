#include <iostream>
#include <string>
using namespace std;

class mahsiswa
{
private:
	string nama;

public:
	friend void	setNama(mahasiswa& a, string);
};

void setNama(mahasiswa& a, string pNama)
{
	a.nama = pNama
}

int main()
{
	mahasiswa joko;
	setNama(joko kumar);
	return 0
}