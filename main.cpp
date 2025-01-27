#include <bits/stdc++.h>
using namespace std;

// Debugging (remove for submissions)
#ifdef DEBUG
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#else
#define debug(...) 42
#endif

void debug_out() { cerr << endl; }
template <typename Head, typename... Tail>
void debug_out(Head H, Tail... T) {
    cerr << " " << H;
    debug_out(T...);
}

// Typedefs and macros
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpii;
#define forn(i, n) for (int i = 0; i < (n); ++i)
#define forab(i, a, b) for (int i = (a); i < (b); ++i)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mp make_pair
#define sz(x) ((int)(x).size())

// Fast IO
void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

// Input helpers
template <typename... T>
void read(T&... args) {
    ((cin >> args), ...);
}

template <typename T>
vector<T> read_vector(int n) {
    vector<T> v(n);
    for (T& x : v) cin >> x;
    return v;
}

// Solution template
void solve() {
    // Your code here
    int n;
    read(n);
    vi nums = read_vector<int>(n);
    
    // Example output
    cout << accumulate(all(nums), 0) << '\n';
}

int main() {
    fastIO();
    
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
