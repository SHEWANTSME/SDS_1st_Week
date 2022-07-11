//#include<iostream>
//#include<algorithm>
//#define ll long long
//#define endl "\n"
//using namespace std;
////  512mb -> 1.2억개 int
//ll arr[10001];
//int main() {
//	int n, m;
//	cin >> n >> m;
//	if (n == 1) {
//		int c; cin >> c; 
//		if (c != m) { cout << 0 << endl; exit(0); }
//		else {cout << 1 << endl; exit(0);}
//	}
//	int left = 0; int right =0;
//	for (int i = 0; i <n; i++) {
//		cin >> arr[i];
//	}
//	ll ans = 0;
//	ll hello = arr[0];
//	while (left <= right and right<n ) {
//		if (hello < m) {
//			right++;
//			hello += arr[right];
//		}
//		else if (hello == m) {
//			ans++;
//			left++;
//			hello += arr[left];
//		}
//		else if (hello > m) {
//			left++;
//			hello -= arr[left];
//			if (left > right) {
//				right = left;
//				hello = arr[left];
//			}
//		}
//
//
//	}
//	cout << ans << endl;
//
//	return 0;
//}
//
////#include<iostream>
////#include<algorithm>
////using namespace std;
////int a[4] = { 0,-1,1,7 };
////bool cmp(int &a, int &b) {
////	return b < a;
////}
////int main() {
////	sort(a, a + 4,cmp);
////	for (int i = 0; i < 4; i++)
////		cout << a[i] << endl;
////	return 0;
////}


//#include <iostream>
//using namespace std;
//int m, n;
//double fir;
//int L, R, ans = -1;
//int main() {
//	cin >> n >> m;
//	R = n; L = 1;
//	if (n == m or ((double)m / n) * 100 >= 99) { cout << -1 << endl; exit(0); }
//	while (L <= R) {
//		int mid = (L + R) / 2;
//		int now = ((double)(m + mid) / (n + mid)) * 100;
//		fir = ((double)m / n) * 100;
//		if (now > fir) { ans = mid; R = mid - 1; }
//		else L = mid + 1;
//	}
//	cout << ans << endl;
//	return 0;
//}
#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;
int n, m;
ll a[100000001];
//ll L = 0; 
//ll R, Mid;
int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	ll L = 0;
	ll R = a[n - 1];
	ll Mid = (L + R) / 2;
	ll cnt = 0;
	while (L <= R ) {
		Mid = (L + R) / 2;
		int pre_i = 0;
		for (int i = 1; i < n; i++) {
			if (a[i] - a[pre_i] > Mid) {
				cnt++;
				pre_i = i;
			}
		}
		if (cnt >= m) L = Mid + 1;
		else R = Mid - 1;
	}
	cout << R << endl;
	// 이분탐색
	//
	//R = n - 1;
	//ll valueL = a[0];
	//ll valueR = a[n - 1];
	//ll valuemid = (a[n - 1] + a[0]) / 2;
	//Mid = a[(n - 1 )/ 2];

	return 0;
}