#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> ip;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        ip.push_back(s);
    }
    vector<string> ans;
    for (int i = 0; i < n; i++)
    {
        if (ip[i].length() <= 10)
        {
            ans.push_back(ip[i]);
        }
        else{
            int size = ip[i].length();
            string s = "";
            s += ip[i][0] +to_string(size-2)+ ip[i][size-1];
            ans.push_back(s);
        }
    }

    for (auto x : ans)
    {
        cout << x << endl;
    }
    return 0;
}