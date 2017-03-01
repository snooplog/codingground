#ifndef _COLORS_

#define _COLORS_


/* FOREGROUND */

#define RST "\x1B[0m"

#define KRED "\x1B[31m"

#define KGRN "\x1B[32m"

#define KYEL "\x1B[33m"

#define KBLU "\x1B[34m"

#define KMAG "\x1B[35m"

#define KCYN "\x1B[36m"

#define KWHT "\x1B[37m"


#define FRED(x) KRED x RST

#define FGRN(x) KGRN x RST

#define FYEL(x) KYEL x RST

#define FBLU(x) KBLU x RST

#define FMAG(x) KMAG x RST

#define FCYN(x) KCYN x RST

#define FWHT(x) KWHT x RST


#define BOLD(x) "\x1B[1m" x RST

#define UNDL(x) "\x1B[4m" x RST


#endif /* _COLORS_ */

#include <iostream>

using namespace std;

int main()
{
   int x, y, z;
   
   cout << "Ievadi 3 skaitļus pec katra nospied Enter" << endl;
   cin >> x;
   cin >> y;
   cin >> z;
   
   if(x < y && y < z){
       cout << "Iespejamais lielakais 3 ciparu skaitlis " << z << y << x << endl;
   }if(x > y && y > z){
       cout << "Iespejamais lielakais 3 ciparu skaitlis " << x << y << z << endl;
    }if(y < x && x < z){
        cout << "Iespejamais lielakais 3 ciparu skaitlis " << z << x << y << endl;
     }if(z < x && x < y){
         cout << "Iespejamais lielakais 3 ciparu skaitlis " << y << x << z << endl;
      }else{
          cout << "nav" << endl;
      }
   
   return 0;
}

