#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int tc;
    cin >> tc;
    while(tc--)
    {
        string s;
        cin >> s;
        stack<char> opr;
        for(auto i: s)
        {
            if(i == ')' && !opr.empty())
            {
                cout << opr.top();
                opr.pop();
            }
            else if(i >= 'a' && i <= 'z')
	            cout << i;
	        else if(i != ')' && i != '(')
	            opr.push(i);
        }
        
        while(!opr.empty())
	    {
	        cout << opr.top();
	        opr.pop();
	    }
        cout << endl;
    }
	return 0;
}
