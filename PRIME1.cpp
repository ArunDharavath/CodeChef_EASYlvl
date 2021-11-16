#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool isprime(int n)
{
    if(n <= 1)
        return false;
    
    for(int i = 2; i <= sqrt(n); ++i)
    {
        if(n%i == 0)
            return false;
    }
    return true;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    
    int tc; 
    cin >> tc;
    
    while(tc--)
    {
        ll m, n;
        cin >> m >> n;  
        for(int i = m; i <= n; ++i)
        {
            if(isprime(i))
            {
                cout << i << endl;
            }
        }
        cout << endl;
    }
	return 0;
}
