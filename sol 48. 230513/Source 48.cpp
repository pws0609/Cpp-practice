#include<iostream>
#include<cmath>
using namespace std;
int** arr;
int main() {
	arr = new int*[9]();
	for(int i = 0; i<9; i++)
		arr[i] = new int[9]();
	for (int i = 0; i < 9; i++) {
		for(int j = 0; j < 9;j++)
			cin >> arr[i][j];
	}
	
	int avg, num, tmp;
	float sum;
	for(int i = 0; i<9;i++){
		sum = 0;
		avg = 0;
		num = 0;
		tmp = 100;
		for(int j = 0; j<9;j++){
			sum += arr[i][j];
		}
		//버림 여부 확인 
		avg = round(sum / 9);
		for(int j = 0; j<9;j++){
			if(tmp>abs(avg-arr[i][j])){
				num = arr[i][j];
				tmp = abs(avg-arr[i][j]);
			}
		}
		cout<<avg<<" "<<num<<endl;
		
	}
	
//	for (int i = 0; i < 9; i++) {
//		for(int j = 0; j<9;j++)
//			cout << arr[i][j]<<" ";
//		cout<<endl;
//	}
	return 0;
}
