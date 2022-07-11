////#include<iostream>
//#include<algorithm>
//#include<stack>
//#include<vector>
//#include<string>
//#define ll long long
//using namespace std;
//int chkERR = 0;
//ll num;
//ll n;
//vector<ll>vec;
//vector<string>vv;
//stack<ll>stk;
//int c = 0;
//int main() {
//	while (1) {
//		while (1) {
//			string s; cin >> s;
//			if (s == "NUM") {
//				cin >> num;
//				vec.push_back(num);
//			}
//			if (s == "QUIT") exit(0);
//			if (s == "END") break;
//			vv.push_back(s);
//		}
//		cin >> n;
//		while (n--) {
//			c = 0;
//			ll k;  cin >> k;
//			stk.push(k);
//			for (int i = 0; i < vv.size(); i++) {
//				if (vv[i] == "NUM") { stk.push(vec[c]); c++; }
//
//			}
//		}
//	}
//	
//
//	return 0;
//}
//
//#include <iostream> // 존나어렵고 설명 존나못하네
//#include <stack>
//#include <vector>
//#include <string>
//#define ll long long
//using namespace std;
//
//ll n, x, errchk, num, c;
//string str;
//stack<ll> stk;
//vector<string> sttr;
//vector<ll> nums;
//
//bool NUM(ll x) {
//	stk.push(x);
//	return 0;
//}
//
//bool POP() {
//	if (stk.empty())	return 1;
//	stk.pop();
//	return 0;
//}
//
//bool INV() {
//	if (stk.empty())		return 1;
//	ll temp = stk.top();
//	stk.pop();
//	stk.push(-temp);
//	return 0;
//}
//
//bool DUP() {
//	if (stk.empty())
//		return 1;
//	stk.push(stk.top());
//	return 0;
//}
//
//bool SWP(){
//	if (stk.size() < 2)	return 1;
//	ll t1 = stk.top();
//	stk.pop();
//	ll t2 = stk.top();
//	stk.pop();
//	stk.push(t1);
//	stk.push(t2);
//	return 0;
//}
//
//bool ADD(){
//	if (stk.size() < 2)	return 1;
//	ll t1 = stk.top();
//	stk.pop();
//	ll t2 = stk.top();
//	stk.pop();
//	stk.push(t1 + t2);
//	return 0;
//}
//
//bool SUB(){
//	if (stk.size() < 2)	return 1;
//	ll t1 = stk.top();
//	stk.pop();
//	ll t2 = stk.top();
//	stk.pop();
//	stk.push(t2 - t1);
//	return 0;
//}
//
//bool MUL(){
//	if (stk.size() < 2)	return 1;
//	ll t1 = stk.top();
//	stk.pop();
//	ll t2 = stk.top();
//	stk.pop();
//	stk.push(t1 * t2);
//	return 0;
//}
//
//bool DIV(){
//	if (stk.size() < 2) return 1;
//	ll t1 = stk.top();
//	stk.pop();
//	ll t2 = stk.top();
//	stk.pop();
//	if (not t1) return 1;
//	ll temp = abs(t2) / abs(t1);
//	if (t1 * t2 < 0)	temp *= -1;
//	stk.push(temp);
//	return 0;
//
//}
//bool MOD(){
//	if (stk.size() < 2) 	return 1;
//	ll t1 = stk.top();
//	stk.pop();
//	ll t2 = stk.top();
//	stk.pop();
//	if (!t1) 	return 1;
//	ll temp = llabs(t2) % llabs(t1);
//	if (t2 < 0)	temp *= -1;
//	stk.push(temp);
//	return 0;
//}
//
//int main(){
//	while (1)	{
//		nums.clear();
//		sttr.clear();
//		errchk = 0;
//
//		while (1){
//			cin >> str;
//			if (str == "QUIT")	return 0;
//			if (str == "END")	break;
//			if (str == "NUM")	{
//				cin >> x;
//				nums.push_back(x);
//			}
//			sttr.push_back(str);
//		}
//
//		cin >> n;
//		while (n--){
//			c = 0;
//			cin >> num;
//			stk.push(num);
//
//			for (ll i = 0; i < sttr.size(); i++)	{
//				if (sttr[i] == "NUM") errchk = NUM(nums[c++]);
//				else if (sttr[i] == "POP") errchk = POP();
//				else if (sttr[i] == "INV") errchk = INV();
//				else if (sttr[i] == "DUP") errchk = DUP();
//				else if (sttr[i] == "SWP") errchk = SWP();
//				else if (sttr[i] == "ADD") errchk = ADD();
//				else if (sttr[i] == "SUB") errchk = SUB();
//				else if (sttr[i] == "MUL") errchk = MUL();
//				else if (sttr[i] == "DIV") errchk = DIV();
//				else if (sttr[i] == "MOD") errchk = MOD();
//
//				if (!stk.empty() && (llabs(stk.top()) > 1e9))	errchk = 1;
//				if (errchk) break;
//			}
//
//			if (errchk || stk.size() != 1)	cout << "ERROR" << "\n";
//			else cout << stk.top() << "\n";
//			while (not stk.empty())	stk.pop();
//		}
//		cout << "\n";
//	}
//	return 0;
//}
//
//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//string s;
//int dp[54][54];
//char bb[54][54];
//bool check[54][54];
//int n, m;
//int dx[4] = { 0,1,-1,0 };
//int dy[4] = { 1,0,0,-1 };
//bool in(int xx, int yy) {
//	return (1 <= xx and xx <= n and 1 <= yy and yy <= m);
//}
//int DFS(int x, int y) {
//	if (not in(x, y) or bb[x][y] == 'H') return 0;
//	if (check[x][y]) {
//		cout << -1 << endl;
//		exit(0);
//	}
//	int &ret = dp[x][y];
//	if (ret) return ret;
//	check[x][y] = 1;
//	int val = (int)bb[x][y] - '0';
//	for (int i = 0; i < 4; i++) {
//		int nx = x + dx[i] * val;
//		int ny = y + dy[i] * val;
//		ret = max(ret, DFS(nx, ny) + 1);
//	}
//	check[x][y] = 0;
//	return ret;
//}
//
//
//
//int main() {
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) {
//		cin >> s;
//		for (int j = 1; j <= m; j++) {
//			bb[i][j] = s[j - 1];
//		}
//	}
//	cout << DFS(1, 1) << "\n";
//}
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int n, m;
bool flag = 0;
int alpha[26];
int cnt = 0;
void DFS(char ch) {
	//for (int i = 0; i < s.size(); i++) {
	//	if (alpha[s[i] - 'a'] == 1)continue;
	////	if (s[i] == 'a' or s[i] == 'n' or s[i] == 't' or s[i] == 'i' or s[i] == 'c') continue;
	//	else {
	//		alpha[s[i] - 'a'] = 1;
	//	}
	//}
	if (cnt == m - 5)return;
	if (alpha[ch - 'a'] == 1) {
		return; 
	}
	else {
		alpha[ch - 'a'] = 1;
		cnt++;
		cout << cnt << endl;
	
	}
}
int main() {
	cin >> n >> m;
	if (m < 5) {
		while (n--) {
			string s; cin >> s;
		}
		cout << 0 << endl; exit(0);
	}
	else {
		alpha[0] = 1; alpha[2] = 1; alpha[8] = 1; alpha[13] = 1; alpha[19] = 1;
		while (n--) {
			string s; cin >> s;
			for (int i = 4; i < s.size() - 4; i++) {
				DFS(s[i]);
			//	if (cnt == m)break;

			}
			//	DFS(s);
		}
	}
	return 0;
}
