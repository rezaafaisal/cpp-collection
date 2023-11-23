#include <iostream>
using namespace std;


void print(string data){
    cout<<data;
}

int main(){
    string *nama;
    int *usia;

    nama = new string;
    usia = new int;

    print("Masukkan nama : ");cin>>*nama;
    print("\nMasukkan usia : ");cin>>*usia;

    cout<<"Nama anda : "<<*nama;
    cout<<"\nUsia anda : "<<*usia;


}