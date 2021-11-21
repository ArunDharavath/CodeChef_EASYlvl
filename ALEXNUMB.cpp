#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int tc;
	cin >> tc;
	while(tc--)
	{
	    int n;
	    cin >> n;
	    int arr[n];
	    
	    for(int i = 0; i < n; ++i)
	    {
	        cin >> arr[i];
	    }
	    int64_t count = (int64_t(n)*(n - 1))/2;
	    cout << count <<endl;
	}
	return 0;
}
