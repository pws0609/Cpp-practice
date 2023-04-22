#include <iostream>
#include <algorithm>

using namespace std;
bool compare(int a, int b){
	return a>b;
}
int main() {
	int N;
	int grd = 1;
	int tmp = -1;
	cin >> N;
	int* arr = new int[N];
	int* cpy = new int[N];
	int* arrres = new int[N]();
	for(int i =0; i<N; i++)
		cin>>arr[i];
	for(int i = 0;i<N;i++)
		cpy[i] = arr[i];
	sort(cpy,cpy + N,compare);
	for(int i = 0; i<N; i++){
		if(cpy[i]==tmp){
			grd++;
			continue;
		}
		for(int j = 0; j<N; j++){
			if(cpy[i] == arr[j])
				arrres[j] = grd;
		}
		tmp = cpy[i];
		grd++;
	}
	for(int i = 0; i< N; i++)
		cout << arrres[i] << " ";
	return 0;
}
