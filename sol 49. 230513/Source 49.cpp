#include<iostream>
#include<cmath>
using namespace std;
int N;
int** arr;
int main() {
	int res = 0;
	cin >> N;
	arr = new int*[2]();
	int** tot = new int*[N]();
	for(int i = 0; i < 2; i++)
		arr[i] = new int[N]();
	for(int i = 0; i < N; i++)
		tot[i] = new int[N]();
	for(int j = 0; j < N;j++)
		cin >> arr[0][j];
	for(int j = N-1; j >= 0;j--)
		cin >> arr[1][j];
	
	for(int i = 0; i<N;i++){
		for(int j = 0; j<N; j++){
			if(arr[0][i] < arr [1][j])
				tot[j][i] = arr[0][i];
			else
				tot[j][i] = arr[1][j];
		}
	}
	
	for(int i = 0; i<N;i++){
		for(int j = 0; j<N; j++){
			res += tot[i][j];
		}
	}
	
	cout << res;
	
//	for (int i = 0; i < N; i++) {
//		for(int j = 0; j<N;j++)
//			cout << tot[i][j]<<" ";
//		cout<<endl;
//	}
	return 0;
}
