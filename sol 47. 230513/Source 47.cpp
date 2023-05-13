#include<iostream>
using namespace std;
bool mountain(int a,int b,int num);
int N;
int** arr;
int main() {
	cin >> N;
	arr = new int*[N+2]();
	int res = 0;
	for(int i = 0; i<N+2; i++)
		arr[i] = new int[N+2]();
	for (int i = 1; i < N+1; i++) {
		for(int j = 1; j < N+1;j++)
			cin >> arr[i][j];
	}
	
	for (int i = 1; i < N+1; i++) {
		for(int j = 1; j < N+1;j++){
			if(mountain(i,j,arr[i][j]))
				res++;
		}
	}
	
	cout<<res;
//	for (int i = 0; i < N+2; i++) {
//		for(int j = 0; j<N+2;j++)
//			cout << arr[i][j]<<" ";
//		cout<<endl;
//	}
	return 0;
}

bool mountain(int a,int b,int num){
	if(arr[a-1][b]<num && arr[a+1][b]<num && arr[a][b-1]<num && arr[a][b+1]<num)
		return true;
	else
		return false;
}
