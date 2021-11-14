#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int tc;
    cin >> tc;
    while(tc--)
    {
        int n, k;
        cin >> n >> k;
        int w[n], sum = 0, sum1 = 0, sum2 = 0;
        for(int i = 0; i < n; ++i)
        {
            cin >> w[i];
            sum += w[i];
        }
        sort(w, w + n);

        for(int i = 0; i < k; ++i)
            sum1 += w[i];
        
        for(int i = n - 1; i > n - k - 1; --i)
            sum2 += w[i];
        
        cout << max(abs(sum1 - (sum - sum1)), abs(sum2 - (sum - sum2))) << endl;
    }
	return 0;
}
