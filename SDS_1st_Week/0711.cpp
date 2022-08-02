//#include<iostream>
//#define endl "\n"
//#define ll long long
//#define fastio cin.tie(0), cout.tie(0), ios::sync_with_stdio(0)
//using namespace std;
//ll parent[1000002];
//ll n, m;
//ll find(ll x) { // find root 
//	if (parent[x] == x) return x;
//	return parent[x] = find(parent[x]);
//
//}
//void merge(ll x, ll y) {
//	x = find(x);
//	y = find(y);
//	if (x > y)parent[x] = y;
//	else parent[y] = x;
//}
//int main() {
//	fastio;
//	cin >> n >> m;
//	for (int i = 0; i <= n; i++)
//		parent[i] = i;
//	while (m--) {
//		ll a, b, c;
//		cin >> a >> b >> c;
//		if (a) {
//			if (find(c) == find(b)) cout << "YES" << endl;
//			else cout << "NO" << endl;
//		}
//		else merge(b, c);
//	}
//}

// 교수님 기달 ㄴㄴ 문제
#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int parent[100002];
int value[100002];
void Union(int x,int y) {

}
int Find(int x) {
	if (parent[x] == x) { value[x] = 0; return x; }
	int y = Find(parent[x]);
	value[x] = value[x] + value[parent[x]];
	return Find(parent[x]);
}
int main() {
	while (1) {
		int N, M; cin >> N >> M;
		if (N == 0 and M == 0)break;
		while (M--) {
			for (int i = 0; i <= N; i++)
				parent[i] = i;
			char ch;
			cin >> ch;
			if (ch == '!') {
				int a, b, c;
				cin >> a >> b >> c;
				// value[b]가 value[a]보다 c더 무거워
				// value[a]+c = value[b]
			}
			else { // ? 일때
				int a, b;
				cin >> a >> b;
			}
		}
		
			
		memset(parent, 0, sizeof(parent));
	}
	
}

//#include<iostream>
//#include<vector>
//#include<queue>
//#define fastio cin.tie(0), cout.tie(0), ios::sync_with_stdio(0)
//using namespace std;
//// 인접 리스트 사용
//vector<int>adj[32001];
//queue<int>q;
//int chasu[32001];
//int N, M;
//int main() {
//	fastio;
//	cin >> N >> M;
//	while (M--) {
//		int x, y;
//		cin >> x >> y;// x 에서 y로 가는 간선
//		adj[x].push_back(y);
//		chasu[y]++;// 도착지는 +1 시켜야  chasu가 0인 놈을 q.push하겠징
//	}
//	for (int i = 1; i <= N; i++)
//		if (chasu[i]==0)q.push(i);
//	while (not q.empty()) {
//		int now = q.front(); q.pop();
//		cout << now << " ";
//		for (int &next : adj[now]) {
//			chasu[next]--;
//			if (chasu[next] == 0)q.push(next);
//		}
//	}
//}