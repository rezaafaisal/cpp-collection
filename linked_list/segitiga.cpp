#include  <iostream>
using namespace std;

int main(){

    int n;

    cout<<"Masukkan panjang segitiga : ";cin>>n;

    for(int i = 0;i<n+1;i++){
        if(i != 0)cout<<"*";
        for(int j=0;j<i;j++){
            if(i==n){
                cout<<"**";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<"*";

        cout<<endl;
    }
    
    return 0;
}