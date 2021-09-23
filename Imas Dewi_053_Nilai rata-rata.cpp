#include <iostream>
#include <math.h>
using namespace std;

int main (){
	float praktikum, teori, tugas, final, project;
	cout<< "Program Menghitung Nilai Rata Rata"<<endl;
	cout<< "\n";
	
	cout << " Masukkan Nilai Praktikum : ";
	cin >> praktikum;
	cout << " Masukkan Nilai Teori : ";
	cin >> teori;
	cout << " Masukkan Nilai Tugas : ";
	cin >> tugas;
	
	
	cout << " Nilai Rata Rata = "<<((praktikum*0.4) + (teori*0.4) + (tugas*0.2)/4.0)<<endl;
	
	return 0;
}
