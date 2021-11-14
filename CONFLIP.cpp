#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tc, count, i, n, g, q;
	cin >> tc;
	while(tc--)
	{
	    cin >> g;
	    while(g--)
	    {
	        count = 0;
	        cin >> i >> n >> q;
	        if(n%2 == 0)
	            cout << n/2 << endl;
	        else
	        {
	            if(q == 1)
	            {
	                if(i == 1)
	                    cout << n/2 << endl;
	                else
	                    cout << (n/2) + 1 << endl;
	            }
	            else
	            {
	                if(i == 1)
	                    cout << (n/2) + 1 << endl;
	                else
	                    cout << n/2 << endl;
	            }
	        }
	    }
	}
	return 0;
}
