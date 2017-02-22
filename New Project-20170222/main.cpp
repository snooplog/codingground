#include <iostream>

using namespace std;

int main()
{
   int temp;
   
   cout << "Ievadi ara gaisa temperaturu" << endl; 
   cin >> temp;
   
   if(temp > 0){
       cout << "Ir silts" << endl;
   
   }else{
    
    if(temp < 0){
       
       cout << "Ir auksts" << endl;

    }else{
        
        cout << "Error 404 file not found" << endl;
    }
    
   }
   if(temp > 0){
       cout << "Varam sadzivot" << endl;
       
   }
   return 0;
}

