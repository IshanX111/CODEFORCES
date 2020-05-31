#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s, s1;
    cin>>s;
    s1 = 'a' + s;
    int l = s1.size();
    int res = 0, z;
    for (int i = 0; i < l-1; i++)
    {
        int z=abs(s1.at(i)-s1.at(i+1));
        if (z > 13)
        {
            res = res + 26 - z;
        }
        else
        {
            res = res + z;
        }
    }
    printf("%d\n", res);
}
