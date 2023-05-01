#include <iostream>
#include <algorithm>
using namespace std;
int scan(int n, int* arr, int len);
int main() {
	int N1, N2;
	cin >> N1;
	int* arr1 = new int[N1];
	for(int i = 0; i<N1; i++){
		cin >> arr1[i];
	}
	cin >> N2;
	int* arr2 = new int[N2];
	for(int i = 0; i<N2; i++){
		cin >> arr2[i];
	}
	int* res = new int[N1+N2];
	
	for(int i = 0; i<N1; i++)
		res[i] = arr1[i];
	for(int i = 0; i<N2; i++)
		res[i+N1] = arr2[i];
	sort(res,res+N1+N2);
	for(int i = 0; i<N1+N2; i++){
		cout << res[i] << " ";
	}
	
	return 0;
}
