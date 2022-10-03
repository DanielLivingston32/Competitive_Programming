
#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,avx,avx2,fma")

#include<bits/stdc++.h>

//ordered set
#include "ext/pb_ds/assoc_container.hpp"
#include "ext/pb_ds/tree_policy.hpp"
// Header Files End

using namespace std;
using namespace __gnu_pbds;

//typedef tree<pair<int, int>, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

// find_by_order --> find the element at the ith index
// order_of_key --> find the element smaller than the parameter passed in the array
//if you want to arrange the values in descending order replace less<int> with greater<int>
//less_equal for multiple values


template<class T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update> ;
//ordered_set<pair<int, int>> A; , ordered<int> A;


template<class key, class value, class cmp = std::less<key>>
using ordered_map = tree<key, value, cmp, rb_tree_tag, tree_order_statistics_node_update>;
// find_by_order(k)  returns iterator to kth element starting from 0;
// order_of_key(k) returns count of elements strictly smaller than k;


#define int long long
double pi = 3.14159265358979323846;
#define  PB push_back
#define  MP make_pair
#define INF 1000000007
const int mod = 1e9 + 7;

//vector<int> graph[(int)1000];  //defining array of vectors
//to_ullong()


int case_ans = 1;

//cout << "Case #" << case_ans << ": " << ans << endl;



void solve() {

	int n;
	cin >> n;

	int a[n], b[n];

	for (auto &it : a) {
		cin >> it;
	}
	for (auto &it : b) {
		cin >> it;
	}

	int maxi = a[0] - b[0];
	//cout << mini << endl;

	for (int i = 1; i < n; i++) {
		maxi = max(maxi, a[i] - b[i]);
	}
	if (maxi < 0) {
		cout << "NO" << endl;
		return;
	}
	//a[0] = a[0] - maxi;

	for (int i = 0; i < n; i++) {
		a[i] = max(0ll, a[i] - maxi);
	}
	bool flag = true;
	for (int i = 0; i < n; i++) {
		if (a[i] != b[i]) {
			flag = false;
			break;
		}
	}
	if (flag) {
		cout << "YES" << endl;
		//return;
	}

	else {
		//cout << "H" << endl;
		cout << "NO" << endl;
	}
}

int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;


}
