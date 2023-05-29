#include<iostream>
using namespace std;
int main(){
	int N, M;
	cin >> N >> M;
	int** graph = new int* [N];
	int** arr = new int* [M];
	for (int i = 0; i < N; i++)
		graph[i] = new int[N]();
	for (int i = 0; i < M; i++) {
		arr[i] = new int[3]();
		for (int j = 0; j < 3; j++)
			cin >> arr[i][j];
	}

	for (int k = 0; k < M; k++) {
		//cout << arr[k][0] << " " << arr[k][1] << " " << arr[k][2]<<endl;
		graph[arr[k][0] - 1][arr[k][1] - 1] = arr[k][2];
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << graph[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
