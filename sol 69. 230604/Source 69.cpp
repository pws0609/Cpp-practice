#include<iostream>
#include<vector>
using namespace std;
int Q[8], front = -1, back = -1, chk[8];
vector<int> graph[8];
int main(){
	int a, b, x;
	for(int i = 0; i < 6; i++){
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	Q[++back] = 1;
	chk[1] = 1;
	while(front < back){
		x = Q[++front];
		cout << x << " ";
		for(int i = 0; i < graph[x].size(); i++){
			if(chk[graph[x][i]] == 0){
				chk[graph[x][i]] = 1;
				Q[++back] = graph[x][i];
			}
		}
	}
	return 0;
}
