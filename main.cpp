#include <iostream>
#include <time.h>
using namespace std;

  int main(){
  srand(time(0));
  int a[20][20];   //definç masîvu ar 20 rindâm un 20 kolonâm
  int n,m,i,j;
  do{   //ar cikla palîdzîbu kontrolç vçrtîbu, ko ievada lietotâjs
	cout << "Noradiet masiva rindu skaitu (max=20): ";
	cin >> n;
}while (n<1 || n>20);
do{   //ar cikla palîdzîbu kontrolç vçrtîbu, ko ievada lietotâjs
	cout << "Noradiet masiva kolonu skaitu (max=20): ";
	cin >> m;
}while (m<1 || m>20);
//ar konstrukcijas cikls-ciklâ palîdzîbu pakâpeniski aizpilda masîva elementus
//ar vçrtîbâm un izvada tos ekrânâ
for (i=0; i<n; i++){   //rindas indekss
   for (j=0; j<m; j++){   //kolonas indekss
      a[i][j]=rand()%10;   //aizpilda masîva elementu
      cout << a[i][j] << " ";   //izvada masîva elementa vçrtîbu ekrânâ
   }
   cout << "\n";   //rindas beigâs pârceï kursoru jaunâ rindâ
}
system("pause");
return 0;
  }
