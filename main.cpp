#include <iostream>
#include <time.h>
using namespace std;

  int main(){
  srand(time(0));
  int a[20][20];   //defin� mas�vu ar 20 rind�m un 20 kolon�m
  int n,m,i,j;
  do{   //ar cikla pal�dz�bu kontrol� v�rt�bu, ko ievada lietot�js
	cout << "Noradiet masiva rindu skaitu (max=20): ";
	cin >> n;
}while (n<1 || n>20);
do{   //ar cikla pal�dz�bu kontrol� v�rt�bu, ko ievada lietot�js
	cout << "Noradiet masiva kolonu skaitu (max=20): ";
	cin >> m;
}while (m<1 || m>20);
//ar konstrukcijas cikls-cikl� pal�dz�bu pak�peniski aizpilda mas�va elementus
//ar v�rt�b�m un izvada tos ekr�n�
for (i=0; i<n; i++){   //rindas indekss
   for (j=0; j<m; j++){   //kolonas indekss
      a[i][j]=rand()%10;   //aizpilda mas�va elementu
      cout << a[i][j] << " ";   //izvada mas�va elementa v�rt�bu ekr�n�
   }
   cout << "\n";   //rindas beig�s p�rce� kursoru jaun� rind�
}
system("pause");
return 0;
  }
