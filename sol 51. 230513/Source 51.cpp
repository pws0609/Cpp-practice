#include<iostream>
#include<cmath>
using namespace std;
int area(int a, int b);
int** arr;
int H,W,h,w;
int main() {
	int res = 0;
	cin >> H >> W;
	arr = new int*[H]();
	for(int i = 0; i < H; i++){
		arr[i] = new int[W]();
		for(int j = 0; j < W;j++)
			cin >> arr[i][j];
	}
	cin >> h >> w;
		
//	for (int i = 0; i < H; i++) {
//		for(int j = 0; j<W;j++)
//			cout << arr[i][j]<<" ";
//		cout<<endl;
//	}

	res = area(0,0);
	
	int tmp;
	for(int i = 0; i<H-h+1; i++){
		tmp = area(i,0);
		if(res < tmp)
			res = tmp;
		for(int j = 1; j<W-w+1; j++){
			for(int k = 0; k < h ;k++){
				tmp-=arr[i+k][j-1];
				tmp+=arr[i+k][j+w-1];
			}
			if(res < tmp)
				res = tmp;
			//cout<<i<<","<<j<<","<<arr[i][j]<<","<<tmp<<endl;
		}
	}
	
	cout << res;
	return 0;
}

int area(int a, int b){
	int sum = 0;
	for(int i = a; i<a+h; i++){
		for(int j = b; j<b+w; j++)
			sum+=arr[i][j];
	}
	return sum;
}
