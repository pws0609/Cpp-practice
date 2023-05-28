#include<iostream>
using namespace std;
void divide(int lt, int rt);
int N;
int* arr;
int* tmp;
int main(){
	cin >> N;
	arr = new int[N];
	tmp = new int[N];
	for(int i = 0; i < N; i++)
		cin >> arr[i];
	divide(0,N-1);
	for(int i = 0; i < N; i++)
		cout << arr[i];
	return 0;
}

void divide(int lt, int rt){
	int mid;
	int p1, p2, p3;
	if(lt < rt){
		mid = (lt + rt) / 2;
		divide(lt, mid);
		divide(mid + 1, rt);
		p1 = lt;
		p2 = mid + 1;
		p3 = lt;
		while(p1 <= mid && p2 <= rt){
			if(arr[p1] < arr[p2])
				tmp[p3++] = arr[p1++];
			else
				tmp[p3++] = arr[p2++];
		}
		while(p1 <= mid)
			tmp[p3++] = arr[p1++];
		while(p2 <= rt)
			tmp[p3++] = arr[p2++];
		for(int i = lt; i<=rt; i++)
			arr[i] = tmp[i];
	}
}
