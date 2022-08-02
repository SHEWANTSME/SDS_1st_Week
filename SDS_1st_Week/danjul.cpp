//#include<iostream>
//#include<vector>
//using namespace std;
//int V, E, a, b;
//int CutVertex[10001];// 각정점의 단절점 여부 저장
//vector<int>AL[10001];
//int VisitOrder[10001];// 미방문:0, 방문순서가 저장됨
//int Answer[10001], s_Ans;// 출력할 단절점 정보와 개수
//int Order;// 방문순서
//int DFS(int now, int parent) {
//	VisitOrder[now] = Order++; // 방문 order 저장
//	
//	for (auto &next : AL[now]) {// 다음 방문 예정인 점 탐색
//		if (next == parent) continue; // 직접적인 부모 노드일 경우 pass
//		if (VisitOrder[next] > 0) {// next가 이미 방문했을경우
//
//		}
//		else {// 아직 방문 ㄴㄴ
//
//		}
//	}
//}
//int main() {
//	cin >> V >> E;
//	for (int i = 0; i < E; i++) {
//		cin >> a >> b;
//		AL[a].push_back(b);
//		AL[b].push_back(a);
//	}
//	// given graph is not a connected graph
//	for (int i = 1; i <= V; i++)
//		if (not VisitOrder[i])DFS(i,0);
//	int ans = 0;
//	for (int i = 1; i <= V; i++) // 단절점 정보 출력
//		if (CutVertex[i])Answer[s_Ans] = i;
//	cout << s_Ans << endl;
//	for (int i = 0; i < s_Ans; i++)cout << Answer[i] << " ";	
//}

#include<iostream>
using namespace std;
int a, b, value = 0;

//int Rec(int time, int now, bool dir) {
//	if (now <= 0)return value += 1;
//	if (time == b - 1) return 0;
//	return value += (Rec(time + 1, now - 1, dir) + Rec(time + 1, now + 1, dir));
//} -> int방식으로 어떻게 return주지..? 씨발
int cnt = 0;
long long Rec(int now, bool dir) {

}

void Rec(int time, int now, bool dir) {
	if (now <= 0 and time==b-1) {
		cnt++; return;
	}
	if (now > 0 and time == b - 1) {
		cnt++;	return;
	}
	if (now <= 0 and time != b - 1) {
		cnt++; return;
	}
	if (now > 0 and time != b - 1) {
		if (dir == 0) {
			Rec(time + 1, now - 1, 0);
			Rec(time + 1, now - 1, 1);
		}
		if (dir == 1) {
			Rec(time + 1, now + 1, 0);
			Rec(time + 1, now + 1, 1);
		}
	}
//	if (time == b - 1) { cnt++; return; }
}

int dp[65][65][2];


int main() {	
	int a, b;
	cin >> a >> b;
	dp[0][a][1] = 0;
	dp[0][a][0] = 0;
	for (int i = 1; i < a; i++) {
		dp[i - 1][a][0] = dp[i][a - 1][0] + dp[i][a - 1][1];
		dp[i - 1][a][1] = dp[i][a + 1][0] + dp[i][a + 1][1];
	}
	for (int i = 0; i < n; i++) {
		for(int j=0 ; j<)
	}



	cin >> a >> b;
	//Rec(0, a, 0);
	//cout << cnt << endl;
	//cnt = 0;
	//Rec(0, a, 1);
	//cout << cnt << endl;
//	int t2 = Rec(0, a, 1);
	//cout << t2 << endl;
	
}
