//#include<iostream>
//#include<vector>
//using namespace std;
//int V, E, a, b;
//int CutVertex[10001];// �������� ������ ���� ����
//vector<int>AL[10001];
//int VisitOrder[10001];// �̹湮:0, �湮������ �����
//int Answer[10001], s_Ans;// ����� ������ ������ ����
//int Order;// �湮����
//int DFS(int now, int parent) {
//	VisitOrder[now] = Order++; // �湮 order ����
//	
//	for (auto &next : AL[now]) {// ���� �湮 ������ �� Ž��
//		if (next == parent) continue; // �������� �θ� ����� ��� pass
//		if (VisitOrder[next] > 0) {// next�� �̹� �湮�������
//
//		}
//		else {// ���� �湮 ����
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
//	for (int i = 1; i <= V; i++) // ������ ���� ���
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
//} -> int������� ��� return����..? ����
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
