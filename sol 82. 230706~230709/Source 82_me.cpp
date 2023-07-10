
void DFS(int a){
	if(a == R){
		for(int i = 0; i<a; i++){
			cout<<res[i];
		}
		cout << endl;
	}
	else{
		for(int i = 0; i < N; i++){
			if(chk[i] == 0){
				res[a] = num[i];
				chk[i] = 0;
				DFS(a+1);
				chk[i] = 1;
			}
		}
	}
}
