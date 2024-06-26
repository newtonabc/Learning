#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
vector<int> adj[N];
bool visited[N];
queue<int> q;
int main(){
	int n,m;
	cin>>n >>m;
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a >>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	q.push(1);
	visited[1]=true;
	while(!q.empty()){
		int u=q.front();
		q.pop();
		for(int i=0;i<adj[u].size();i++){
			int v=adj[u][i];
			if(!visited[v]){
				visited[v]=true;
				q.push(v);
			}
		}
	}
}
