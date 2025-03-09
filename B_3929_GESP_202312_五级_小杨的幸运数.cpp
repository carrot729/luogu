#include<bits/stdc++.h>
using namespace std;
#define elif else if
#define INF 1e9+9
#define ERR 1e-8
typedef long long ll;
typedef string str;
typedef ll INT_TYPE ;
const ll N=2e5+9;
void input();void solve();
bool match1();void solve1();
bool match2();void solve2();
bool match3();void solve3();
ll a, n;
vector<ll> num;
void input() {
    cin >> a >> n;
    for (ll i = 0; i < n; i++) {
        ll tmp; cin >> tmp;
        num.push_back(tmp);
    }
}
set<ll> numList;
ll maxNum;
void makeList() {
    for (ll i = 0; i * i <= N; i++) {
        ll tmp = i * i;
        if (tmp < a)
            continue;
        numList.insert(tmp);
        for (ll j = 2; j * tmp <= N; j++) {
            numList.insert(j * tmp);
        }
    }
}
void work(ll num) {
    if (numList.find(num) != numList.end()) {
        cout << "lucky" << endl;
        return;
    }
    cout << *(numList.upper_bound(num)) << endl;
}
void solve() {
    maxNum = *max_element(num.begin(), num.end());
    makeList();
    // for (set<ll>::iterator it = numList.begin(); it != numList.end(); it++)
    //     cout << *it <<endl;
    // cout << "QWQ" <<endl;
    for (ll i = 0; i < n; i++)
        work(num[i]);
}
bool match1() {
    return 0;
}
void solve1() {
    solve();
}
bool match2() {
    return 0;
}
void solve2() {
    solve();
}
bool match3() {
    return 0;
}
void solve3() {
    solve();
}
int main(){
// freopen(".in","r",stdin);
// freopen(".out","w",stdout);
	input();
    if(match1()) solve1();
    elif(match2()) solve2();
    elif(match3()) solve3();
    else solve();
	return 0;
}
