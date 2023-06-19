#include <iostream>

using namespace std;

double hitung(double x, int y);

int main() {
    double x, hasil;
    int y;
    
    cout << "Masukkan basis : ";
    cin >> x;
    
    cout << "Masukkan eksponen: ";
    cin >> y;
    
    hasil = hitung(x, y);
    
    cout << x << "^" << y << " = " << hasil << endl;
    
    return 0;
}



double hitung(double x, int y) {
    double hasil = 1;
    
  if(y<0){
  	for (int a=0; a <= y; ) {
        hasil /= x;
        a--;
    }
  }
    
    
//    if (y >= 0) {
//        while (y > 0) {
//            hasil *= x;          //yes
//            y--;
//        }
//        
//    } else {
//        while (y < 0) {
//            hasil /= x;
//            y++;
//        }
//    }
    
    return hasil;
}

