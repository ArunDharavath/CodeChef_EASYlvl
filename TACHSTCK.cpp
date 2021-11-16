#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d;
	cin >> n >> d;
	vector<int> a(n);
	for(int i = 0; i < n; ++i)
        cin >> a[i];
	
	sort(a.begin(), a.end());
	int count = 0;
	
	for(int i = n - 1; i >= 0; i--)
	{
	    if(a[i] - a[i-1] <= d)
	    {
	        count++;
	        i--;
	    }
	}
	
	cout << count <<endl;
	return 0;
}
