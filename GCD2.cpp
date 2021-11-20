#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if(a == 0)
        return b;
    else
        return gcd(b%a, a);
}

void solve(int a, string b)
{
    if(!a)
    {
        cout << b << endl;
        return;
    }
    
    int mod  = 0;
    
    for(int i = 0; i < b.length(); ++i)
        mod = (mod*10 + b[i] - '0')%a;
    
    cout << gcd(a, mod) << endl;
}

int main() {
	// your code goes here
	int tc;
    cin >> tc;
    int a;
    string b;
    
    while(tc--)
    {
        cin >> a >> b;
        solve(a, b);
    }
    
	return 0;
}
