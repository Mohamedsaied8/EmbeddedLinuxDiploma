
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>

using namespace std;

int main() {

    int numberVector;
    int numberQuary;
    cin >> numberVector >> numberQuary;
    int* mainArr[numberVector];
    
    int numberElements=0;
    for (int k=0; k<=numberVector-1; k++){
        cin>>numberElements;
        mainArr[k]= new int [numberElements]; 
        for (int i =0; i<= numberElements-1;i++){
            cin>>mainArr[k][i];
        }

    }

    int qq[numberQuary][2];
    
    for (int q=0;q<=numberQuary-1;q++){
      cin >> qq[q][1] >> qq[q][2];
      cout << mainArr[qq[q][1]][qq[q][2]] << endl;
   }
       
    
    return 0;
}
