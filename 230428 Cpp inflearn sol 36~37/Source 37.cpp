#include <iostream>
using namespace std;
int scan(int n, int* arr, int len);
int main() {
	int S;
	int N;
	int scanres;
	cin >> S >> N;
	int* cache = new int[S]();
	int* work = new int[N];
	for(int i = 0; i<N; i++){
		cin >> work[i];
	}
	
	cache[0] = work[0];
	for(int i = 1; i<N; i++){
//		cout << i << " ";
//		for(int k = 0; k<S; k++){
//			cout << cache[k] << " ";
//		}
//		cout << endl;
		scanres = scan(work[i], cache, S);
		if(scanres != -1){
			//캐시에 있다
			for(int j = scanres - 1; j >= 0; j--){
				cache[j+1] = cache[j];
			}
			cache[0] = work[i];
		}
		else{
			//캐시에 없다
			for(int j = S-1; j >= 0; j--){
				cache[j+1] = cache[j];
			}
			cache[0] = work[i];
		}
	}
	
	for(int i = 0; i<S; i++){
		cout << cache[i] << " ";
	}
	return 0;
}

int scan(int n, int* arr, int len){
	for(int i = 0; i < len; i++){
		if(arr[i] == n)
			return i;
	}
	return -1;
}
