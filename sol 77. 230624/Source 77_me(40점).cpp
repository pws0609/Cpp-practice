#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int N, M, a, b, front, flga = 0, flgb = 0;
	cin >> N >> M;
	vector<int> V[N+1];
	for(int i = 1; i < N+1; i++){
		V[i].push_back(i);
	}
	cin >> a >> b;
	if(b<a)
		swap(a,b);
	V[a].push_back(b);
	for(int i = 1; i<M; i++){
		front = 0;
		cin >> a >> b;
		if(b<a)
			swap(a,b);
		for(int j = 1; j < N+1; j++){
			if(find(V[j].begin(), V[j].end(), a) != V[j].end()){
				front = j;
				break;
			}
		}
		if(front != 0)
			V[front].push_back(b);
		else
			V[a].push_back(b);
	}
	cin >> a >> b;
	for(int i = 1; i < N+1; i++){
		if(find(V[i].begin(), V[i].end(), a) != V[i].end()){
			a = i;
			flga = 1;
			break;
		}
	}
	for(int i = 1; i < N+1; i++){
		if(find(V[i].begin(), V[i].end(), b) != V[i].end()){
			b = i;
			flgb = 1;
			break;
		}
	}
	for(int i = 0; i < N+1; i++){
		for(int j = 0; j < V[i].size(); j++){
			cout <<V[i][j] <<" ";
		}
		cout << '\n';
	}
	cout << '\n';
	if(a==b && flga == 1 && flgb == 1)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
