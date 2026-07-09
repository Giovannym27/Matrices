#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int matriz[n][n];
    
    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++){
            if(j>=i){
                matriz [i][j]=1;
            } else{
                matriz [i][j]=0;
            }
        }
        
    }
    cout<<"-------Matriz Triangular Superior-------"<<endl;
    for( int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<< matriz[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}