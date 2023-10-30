#include <iostream>
using namespace std;
int main(){
  int n,m,jmlh,sisa;

  cout << "bebek punya pak Tatang : ";
  cin >> n;
  cout << "diberi kepada temannya : ";
  cin >> m;

  jmlh=n/m;
  sisa=n%m;

  cout << "jumlah bebek yang harus diberikan kepada masing-masing temannya : " << jmlh<<endl;
  cout << "Jumlah sisanya : "<<sisa<<endl;


    return 0;


}
