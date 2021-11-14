#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc, num, speed, count, max;
    cin >> tc;
    while(tc--)
    {
        count = 1;
        cin >> num;
        if(num == 1)
            cin >> speed;
        else
        {
            int sp[num];
            for(int i = 0; i < num; ++i)
                cin >> sp[i];
            max = sp[0];
            for(int i = 1; i < num; ++i)
            {
                if(max < sp[i])
                    continue;
                else
                {
                    ++count;
                    max = sp[i];
                }
            }
        }
        cout << count << endl;
    }
	return 0;
}
