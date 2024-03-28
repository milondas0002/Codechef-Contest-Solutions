#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, l;
    cin >> t;
    while(t--)
    {
        cin >> n >> l;
        if(l>=1e4)
        {
            for(int i=1; i<=n; i++)
            {
                cout << i << " ";
            }
            cout << "\n";
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                cout << i*l+1 << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}