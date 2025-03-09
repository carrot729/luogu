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
bool isPrime(ll x) {
    if (x < 2) return 0;
    for (ll i = 2; i * i < x; i++) {
        if (x % i == 0) return 0;
    }
    return 1;
}
ll n;
void input() {
//  freopen(".in","r",stdin);
//  freopen(".out","w",stdout);
    cin >> n;
    // cout << n << endl;
}
map<ll, ll> num;
void solve() {
    ll tmp = n;
    // cout << tmp << endl;
    for (ll i = 2; i * i <= n && tmp > 1; i++) {
        while (!(tmp % i)) {
            num[i]++;
            // cout << tmp <<endl;
            tmp /= i;
            // cout << tmp <<endl;
        }
        if (isPrime(tmp)){
            num[tmp] = 1;
            break;
        }
    }
    for (map<ll, ll>::iterator it = num.begin(); it != num.end(); it++) {
        printf("%lld", it -> first);
        if (it -> second > 1)
            printf("^%lld", it -> second);
        if (it != --num.end()) 
            printf(" * ");
    }
}
bool match1() {
    return isPrime(n);
}
void solve1() {
    cout << n << endl;
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
