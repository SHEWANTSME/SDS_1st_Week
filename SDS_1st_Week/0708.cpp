//#include<iostream>
//#include<vector>
//#define ll long long
//#define endl "\n"
//using namespace std;
//int t = 0;
//ll memoi[51][51];
//ll combi(int a, int b) {
//	if (b == 0 or a == b)return  memoi[a][b] = 1;
//	if (memoi[a][b]) return memoi[a][b];
//	return	memoi[a][b] = combi(a - 1, b - 1) + combi(a - 1, b);
//}
//int main() {
//	int n; cin >> n; vector<ll>v;
//	while (n--) {
//		int t; cin >> t;
//		v.push_back(t);
//	}
//	int tt; cin >> tt;
//	ll ans = 0;
//	ll sum = 0;
//	while (not v.empty()) {
//		int vv = v.back();
//		v.pop_back();
//		sum += vv;
//		if (vv < tt) ans += 0;
//		else ans += combi(vv, tt);
//	}
//	ll bunmo = combi(sum,tt);
//    int a = combi(12, 4);
//	//int b = combi(2, 4);
//	int c = combi(34, 4);
//	int d = combi(13, 4);
//	int e = combi(17, 4);
//	int ttt = combi(76, 4);
//	//int tt = combi(18, 2);
//	cout.precision(15);
//	cout << double(ans) /double(bunmo) << endl;
//	cout << double(a + d+e + c) / double(ttt) << endl;
////	cout << combi(5, 3) << endl;
//}



#include <iostream>
using namespace std;

long long dp[64 * 2][64];
int n, k;

long long solved(int kk, int nn) {

	if (kk == 0)
		return 0;
	if (nn == 0)
		return 1;

	long long& ret = dp[kk][nn];
	if (ret != -1)
		return ret;
	ret = 0;

	ret += solved(kk - 1, nn - 1);
	ret += solved(kk + 1, nn - 1);

	return ret;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	cin >> k >> n;

	for (int i = 0; i < 64 * 2; i++)
		for (int j = 0; j < 64; j++)
			dp[i][j] = -1;

	cout << solved(k, n) << endl;

	return 0;
}