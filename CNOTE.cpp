#include <iostream>
using namespace std;

int main() {
	int tc, n, x, y, k;
	cin >> tc;
	while(tc--)
	{
	    cin >> x >> y >> k >> n;
	    int p[n], c[n], temp=0;
	    for(int i = 0; i < n; ++i)
	    {
	        cin >> p[i] >> c[i];
	        if(p[i] >= x - y && c[i] <= k)
	        {
	            temp += 1;
	        }
	    }
	    if(temp > 0)
	        cout << "LuckyChef" << endl;
	    else
	        cout << "UnluckyChef" <<endl;
        
	}
	
	return 0;
}
