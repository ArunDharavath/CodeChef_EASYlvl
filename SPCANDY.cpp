#include <iostream>
using namespace std;

int main() {
	// your code goes here
    long long int tc, n, k;
    cin >> tc;
    while(tc--)
    {
        cin >> n >> k;
        if(k == 0)
        {
            cout << 0 << " " << n << endl;
        }
        else
            cout << n/k << " " << n%k << endl;
    }
	return 0;
}
