#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int l = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (l == 0 && s[i] == 'h')
            l++;
        else if (l == 1 && s[i] == 'e')
            l++;
        else if (l == 2 && s[i] == 'l')
            l++;
        else if (l == 3 && s[i] == 'l')
            l++;
        else if (l == 4 && s[i] == 'o')
            l++;
    }
    if (l == 5) 
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
