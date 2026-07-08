#include <iostream>
using namespace std;

int main(){
	int matriz [100][100];
	int n, m;
	cin>>n>>m;
	
	for(int i=0; i<n; i++){
		for( int j=0; j<m; j++){
			cin>> matriz [i][j];
		}
	}
	for (int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<< matriz[j][i]<<" ";
			int endl;
		}
	}
	return 0;
}
