//#include<iostream>
//#include<queue>
//#include<string>
//using namespace std;
//int n;
//queue<int>q;
//int main() {
//	cin >> n;
//	while (n--) {
//		string s;  cin >> s;
//		if (s == "push") {
//			int t; cin >> t;
//			q.push(t);
//		}
//		if (s == "pop") { 
//			if (q.empty()) { cout << -1 << endl; }
//			else {
//				int tt = q.front();
//				q.pop();
//				cout << tt << endl;
//			}
//		}
//		if (s == "size") { cout << q.size() << endl; }
//		if (s == "empty") {
//			if (q.empty()) { cout << 1 << endl; }
//			else cout << 0 << endl;
//		}
//		if (s == "front") {
//			if (q.empty()) { cout << -1 << endl; }
//			else {
//				cout << q.front() << endl;
//			}
//		}
//		if (s == "back") {
//			if (q.empty()) { cout << -1 << endl; }
//			else {
//				cout << q.back() << endl;
//			}
//		}
//	}
//
//	return 0;
//}

//#include<iostream>
//#include<string>
//#include<stack>
//using namespace std;
//int n;
//stack<int>stk;
//int main() {
//	cin >> n;
//	while (n--) {
//		string s; cin >> s;
//		if (s == "push") {
//			int tt; cin >> tt;
//			stk.push(tt);
//		}
//		if (s == "top") {
//			if (stk.empty()) { cout << -1 << endl; }
//			else { cout << stk.top() << endl; }
//		}
//		if (s == "pop") {
//			if (stk.empty()) { cout << -1 << endl; }
//			else {
//				int kk = stk.top();
//				stk.pop();
//				cout << kk << endl;
//			}
//		}
//		if (s == "size") 	cout << stk.size() << endl;
//		if (s == "empty") {
//			if (stk.empty())cout << 1 << endl;
//			else cout << 0 << endl;
//		}
//
//		
//	}
//
//
//	return 0;
//}

//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<stack>
//#include<queue>
//#include<string>
//using namespace std;
//int leftnode[10001];
//int rightnode[10001];
//vector<int>adj[10];
//int parent[10];
//int depth[10];
////using 재귀
//void DDFS(int now) {
//	cout << now << " ";
//	for (int &next : adj[now]) {
//		if (parent[now] == next)continue;
//		parent[next] = now;
//		depth[next] = depth[now] + 1;
//		DDFS(next);
//	}
//}
////using 비재귀
//void DFS(int root) { // 얘네는 lc,rc를 구분해서 한게 아니고 그냥 뭉퉁그려서 adj로 집어 넣은거임 just like how we did in graphs
//	stack<int>stk;
//	stk.push(root);
//	while (not stk.empty()) {
//		int now = stk.top();
//		stk.pop();
//		cout << now << " ";
//		for (int &next : adj[now]) {
//			if (parent[now] == next) continue;
//			stk.push(next);
//			parent[next] = now;
//			depth[next] = depth[now] + 1;
//		}
//	}
//}
//int LC[9] = { 0,2,4,6,0,0,0,0,0 };
//int RC[9] = { 0,3,5,7,8,0,0,0,0 };
//vector<int>lc;
//vector<int>rc;
//void BBFS() {
//	stack<int>qq;
//	qq.push(1);// root 1
//	while (not qq.empty()) {
//		int now = qq.top();
//		qq.pop();
//		if (RC[now])qq.push(RC[now]);
//		cout << now << " ";
//			if (LC[now])	qq.push(LC[now]);
//		}
//}
//
//int main() {
//	// 근데 이진트리에서는 left child와 right child를 구분할 필요성이 있음
//	//BBFS();
//	int root; cin >> root;
//	cin.ignore();
//	int t;
//	while (cin>>t) {
//		if (t == -1)break;
//	//	if (t == EOF) break;
//		if (t < root) {
//			leftnode[t] = 1;
//			lc.push_back(t);
//			rc.push_back(0);
//		}
//		else {
//			rightnode[t] = 1;
//			rc.push_back(t);
//			lc.push_back(0);
//		}
//	}
//	
//		stack<int>stk;
//		stk.push(root);
//		while (not stk.empty()) {
//			int now = stk.top();
//			stk.pop();
//			//if(rightnode[now])stk.push()
//			if (rc[now])stk.push(rc[now]);
//			cout << now << " ";
//			if (lc[now])stk.push(lc[now]);
//		}
//	
//	return 0;
//}


// tree직접 짜보는 연습을 해보자
// 오늘은 tree를 직접 짜보는 연습 + 세그트리 연습 씨발
//#include<iostream>
//#include<queue>
//#include<algorithm>
//using namespace std;
//typedef pair<int, int> pii;
//#define L first
//#define R second
//int sib[10000004][2];
//pii sibling[1000005];
//void rec(int now) {
//	if (sib[now][0]) rec(sib[now][0]);
//	if (sib[now][1])rec(sib[now][1]);
//	cout << now << endl;
//}
////void print_recursion(int cur) {
////	if (sibling[cur].L != 0)
////		print_recursion(sibling[cur].L);
////	if (sibling[cur].R != 0)
////		print_recursion(sibling[cur].R);
////	printf("%d\n", cur);
////}
//int main(void) {
//	int root;
//	cin >> root;
//	//scanf("%d", &root);
//	int t;
//	while (scanf_s("%d", &t) != EOF) {
//		int st = root;
//		while (true) {
//			if (t < st) {
//				if (sib[st][0] == 0) {
//					sib[st][0] = t;
//					break;
//				}
//				else st = sib[st][0];
//				/*if (sibling[st].L == 0) {
//					sibling[st].L = t;
//					break;
//				}*/
//				/*else
//					st = sibling[st].L;*/
//			}
//			if (t > st) {
//				if (sib[st][1] == 0){
//					sib[st][1] = t; break;
//				}
//				else st = sib[st][1];
//			/*	if (sibling[st].R == 0) {
//					sibling[st].R = t;
//					break;
//				}
//				else
//					st = sibling[st].R;*/
//			}
//		}
//	}
//	rec(root);
//	//print_recursion(root);
//}


// string형태로 한다음.. 바꿔야 할거 같은데....
#include<iostream>
#include<string>
#include<algorithm>
#include<deque>
using namespace std;
deque<string>dq;
void Rec(string s, int cnt) {
	bool flag = 0;
	for (int i = 0; i < s.size() -1; i++) {
		if ((s[i] - '0') - (s[i + 1] - '0') != 1) {	flag = 1; break;	}
	}
	if (flag == 1) {

	}

	int chk = s[0] - '0' + 1;
	if (s[0] - '0' + 1 > 9) return;

//	int fr = s[0] - '0';
}
int main() {
	//int n; cin >> n;
	//if (n < 10) {cout << n << endl; exit(0);}
	//Rec("10", 10);
	//string ss = "1024";
	//cout << ss[0]-'0' + 3 << endl;

	return 0;
}