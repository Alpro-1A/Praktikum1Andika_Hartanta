#include <iostream>

using namespace std;

int main()
{
    int a,b;

   cout << "Masukkan nilai pertama = ";
   cin >> a;
   cout << "Masukkan nilai kedua = ";
   cin >> b;
   cout << "Bertukarlah Kau nilai pertama dan nilai kedua "<< endl;
    a = a + b,
    b = a - b,
    a = a - b;
   cout << "Nilai pertama = "<< a << endl;
   cout << "Nilai kedua = "<< b << endl;


    return 0;
}
