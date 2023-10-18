#include <iostream>
using namespace std;
int main(){
  int a,b,c;

   cout << "Masukkan nilai pertama = ";
   cin >> a;
   cout << "Masukkan nilai kedua = ";
   cin >> b;
   cout << "Bertukarlah Kau nilai pertama dan nilai kedua "<< endl;
   c = a,
   a = b,
   b = c;
   cout << "Nilai pertama = "<< a << endl;
   cout << "Nilai kedua = "<< b << endl;


    return 0;


}
