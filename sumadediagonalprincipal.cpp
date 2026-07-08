#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Igrese el orden de la matriz: ";
    cin>>n;

    int matriz[100][100], s=0;


    for(int i=0;i<n;i++){
        for (int j=0; j<n; j++){
            cin >>matriz[i][j];
        }
    }
    for( int i=0;i<n;i++){
    s= s + matriz[i][i];
    }
    cout<< "La suma de la diagonal principal es: "<<s;
    return 0;
}

