#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define f(i, n) for (i = 0; i < n; i++)
#define f(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;


const int mod = 1'000'000'007;
const int N = 3e5, M = N;

void solve()
{
    int k;
    cin >> k;
    
    string ans = "";
    char c = 'a';
    
    while(k--)
    {
        ans.push_back(c);
        
        if(c == 'z')
        {
            ans.push_back('a');
            c = 'a';
        }
        c++;
    }
    ans.push_back(c);
    reverse(ans.begin(), ans.end());
    
    cout << ans << endl;
}

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    
	int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }

    return 0;
}