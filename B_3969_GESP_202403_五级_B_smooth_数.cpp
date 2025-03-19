#include<bits/stdc++.h>
using namespace std;
#define elif else if
#define INF 1e9+9
#define ERR 1e-8
typedef long long ll;
typedef string str;

const ll N=1e5+9;
void input();void solve();
bool match1();void solve1();
bool match2();void solve2();
bool match3();void solve3();
ll n, b;
ll maxPrime(ll x) {
    for (ll i = 2; i * i <= x; i++)
        if (!(x % i))
            return maxPrime(x / i);
    return x;
}
bool isBsmooth(ll x) {
    return maxPrime(x) <= b;
}
void input() {
//  freopen(".in","r",stdin);
//  freopen(".out","w",stdout);
    cin >> n >> b;
}
void solve() {
    
}
bool match1() {
    return n <= 1e3 && b <= 1e3;
}
void solve1() {
    ll ans = 0;
    for (ll i = 1; i <= n; i++) 
        ans += isBsmooth(i);
    cout << ans << endl;
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
	input();
    if(match1()) solve1();
    elif(match2()) solve2();
    elif(match3()) solve3();
    else solve();
	return 0;
}
