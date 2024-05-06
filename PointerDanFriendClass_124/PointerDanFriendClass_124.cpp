#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void ShowNim() {
		count << "No Induk = " << nim << endl;
	}
};

int main() {
	mahasiswa mhs(1);
	mhs.ShowNim();

	mahasiswa refmhs = mhs;
	refmhs.nim = 2;
	mhs.ShowNim();

	mahasiswa* pMhs = &mhs;
	pMhs->nim = 3;
	mhs.ShowNim();
	return 0;
}
