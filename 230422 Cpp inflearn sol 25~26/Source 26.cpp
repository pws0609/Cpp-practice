#include <iostream>
#include <algorithm>

using namespace std;
int main() {
	int N;
	int grd = 1;
	cin >> N;
	int* arr = new int[N];
	for(int i =0; i<N; i++)
		cin>>arr[i];
	for(int i = 0; i<N; i++){
		grd = 1;
		for(int j = 0; j<i; j++){
			if(arr[i] <= arr[j])
				grd++;
		}
		cout << grd << " ";
	}
}
