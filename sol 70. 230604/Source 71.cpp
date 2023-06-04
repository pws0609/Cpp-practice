#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int N, M;
int chk[21], dis[21], x;
vector<int> graph[21];
queue<int> Q;
int main(){
	int a, b;
	cin >> N >> M;
	for(int i = 0; i < M; i++){
		cin >> a >> b;
		graph[a].push_back(b);
	}
	Q.push(1);
	chk[1] = 1;
	while(!Q.empty()){
		x = Q.front();
		Q.pop();
		for(int i = 0; i < graph[x].size(); i++){
			if(chk[graph[x][i]] == 0){
				chk[graph[x][i]] = 1;
				Q.push(graph[x][i]);
				dis[graph[x][i]] = dis[x] + 1;
			}
		}	
	}
	for(int i = 2; i <= N; i++){
		cout<<i<<" : "<<dis[i]<<"\n";
	}
	return 0;
}
