#include <iostream>
using namespace std;

void Input(int batas){
	int angka[batas];
	for(int i=0; i<batas; i++){ 
		cout<<"Masukkan nilai mahasiswa ke- "<<i+1<<" : ";
		cin>>angka[i];
	}
}

void Output(int batas){
	int angka[batas];
	for(int k=0; k<batas; k++){ 
		cout<<"Mahasiswa "<<k+1<<" : "<<angka[k]<<endl;
	}
}

void minimum(int batas){
	int angka[batas],minimum;
	minimum = angka[0];
	for(int i=0;i<batas;i++){
		if(angka[i]<minimum){
			minimum = angka[i];
		}
	}
	cout<<"Nilai Minimum: "<<minimum;
}

void maksimum(int batas){
	int angka[batas],maksimum;
	maksimum = angka[0];
	for(int i=0;i<batas;i++){
		if(angka[i]>maksimum){
			maksimum = angka[i];
		}
	}
	cout<<"Nilai Maksimum: "<<maksimum;
}
int main(){
	char nama[100],matkul[100];
	int batas;	
	cout<<"Masukkan Nama dosen: ";cin>>nama;
	cout<<"Masukkan Mata Kuliah: ";cin>>matkul;
	cout<<"Masukkan Jumlah Mahasiswa : ";cin>>batas;
	cout<<endl;
	
	Input(batas);
	cout<<endl;
	cout<<endl;
	cout<<"Nama Dosen: "<<nama<<endl;
	cout<<"Nama Mata Kuliah: "<<matkul<<endl;
	cout<<"---------------------------------------------"<<endl;
	
	Output(batas);
	
	minimum(batas);
	cout<<endl;
	maksimum(batas);
	return 0;
}
