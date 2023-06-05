#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int chk[10001], d[3] = {1, -1, 5};
int main(){
	int S, E, x, pos;
	cin >> S >> E;
	vector<int> graph[3];
	queue<int> Q;
	Q.push(S);
	chk[S] = 1;
	while(!Q.empty()){
		x = Q.front();
		Q.pop();
		for(int i = 0; i < 3; i++){
			pos = x + d[i];
			if(pos <= 0 || pos > 10000)
				continue;
			if(pos == E){
				cout << chk[x];
				return 0;
			}
			if(chk[pos] == 0){
				chk[pos] = chk[x] + 1;
				Q.push(pos);
			}
		}
	}
	return 0;
}
