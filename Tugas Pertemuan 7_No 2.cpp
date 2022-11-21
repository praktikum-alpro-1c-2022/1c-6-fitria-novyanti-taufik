#include <iostream>
using namespace std;

    double konversi (double);
    float konversi (float);
    int konversi (int);


int main(){

    cout << "Hasil konversi celcius 1 : " << konversi(100.0) << endl;
    cout << "Hasil konversi celcius 2 : " << konversi(60.5) << endl;
    cout << "Hasil konversi celcius 3 : " << konversi(80) << endl;

 return 0;
}

double konversi (double konversi){
 return ((konversi - 32.0)*5/9);
}
float konversi (float konversi){
 return ((konversi - 32.0)*5/9);
}
int konversi (int konversi){
 return ((konversi - 32)*5/9);
}



