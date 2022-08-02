////#include<iostream>
////#include<algorithm>
////#include<string>
////#include<vector>
////using namespace std;
////struct TreeNode {
////	string label; // to 자료저장
////	TreeNode *parent;
////	vector<TreeNode*> children;
////};
////void PrintLabel(TreeNode *root) {
////	cout << root->label << endl;
////	for (int i = 0; i < root->children.size(); i++)
////		PrintLabel(root->children[i]);
////}
////int height(TreeNode *root) {
////
////}
////int main() {
////
////
////	return 0;
////}
//
//// 1922 네트워크 연결 with kruskal
//// how to make MST?
//#include<iostream>
//#include<vector>
//#include<tuple>
//#include<algorithm>
//#define ff first
//#define sc second
//#define PP pair<int,int>
//using namespace std;
////vector<int>parent(1001, -1);
//int parent[1003];
//int node, edge;
////tuple<int, int, int>edge[100005];
//vector < pair<int, PP>>v;
//int find(int x) {
//	if (parent[x] ==x)return x;
//	return parent[x] = find(parent[x]);
//}
//void Union(int x, int y) {
//	x = find(x); y = find(y);
//	if (x == y)return;
//	else if (x < y)parent[y] = x;
//	else parent[x] = y;
//}
//int main() {
//	int n, m;
//	cin >> n >> m;
//	while (m--) {
//		int a, b, c;	cin >> a >> b >> c;
//		v.push_back({ c,{a,b } });
//		v.push_back({ c,{b,a} });
//	}
//	sort(v.begin(), v.end());
//	for (int i = 0; i < n; i++)
//		parent[i] = i;
//	int ans = 0;
//	for (int i = 0; i < v.size(); i++) {
//		if (find(v[i].sc.sc) == find(v[i].sc.ff)) continue;
//		Union(v[i].sc.ff, v[i].sc.sc);
//		ans += v[i].ff;
//
//	}
//	cout << ans << endl;
//}

// pipe 옮기기
#include<iostream>
#include<algorithm>
#include<string>
int dx[4] = { 0,1,-1,0 };
int dy[4] = { 1,0,0,-1 };
using namespace std;
int n;
int arr[33][33];
int visited[33][33];
int dp[33][33];
void Recursion(string chk, int x, int y) {
	if (x < 0 or y < 0 or x >= n or y >= n)return;
	if (arr[x][y] == 1)return;	
	visited[x][y] = 1;
	
	if (chk == "garo") {
	//	if (y + 1 >= n)return;
		//if (arr[x][y + 1] == 1)return;
		Recursion("garo", x, y + 1);
	//	if (arr[x + 1][y] == 1 or arr[x][y + 1] == 1 or arr[x + 1][y + 1] == 1)return;
		Recursion("diag",x+1 ,y+1 );
	}
	else if (chk == "sero") {
	//	if (x + 1 >= n)return;
	//	if (arr[x + 1][y] == 1)return;
		Recursion("sero",x+1 ,y );
	//	if (arr[x + 1][y] == 1 or arr[x][y + 1] == 1 or arr[x + 1][y + 1] == 1)return;
		Recursion("diag",x+1 ,y+1 );
	}
	else {
	//	if (arr[x][y + 1] == 1)return;
		//if (y + 1 >= n)return;
		Recursion("garo",x ,y+1 );
		//if (x + 1 >= n)return;
		//if (arr[x + 1][y] == 1)return;
		Recursion("sero",x+1 ,y );
		if (arr[x + 1][y] == 1 or arr[x][y + 1] == 1 or arr[x + 1][y + 1] == 1)return;
		Recursion("diag",x+1 ,y+1 );
	}
	
}
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			visited[i][j] = -1;
			cin >> arr[i][j];
		}
	}
	visited[0][0] = 1;
	visited[0][1] = 1;

	Recursion("garo", 0, 1); // garo, sero, diag
}
