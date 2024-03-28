#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, k, x;
    cin >> t;
    while(t--)
    {
        cin >> n >> k >> x;
        ll sum=1;
        for(int i=2; i<k; i++)
        {
            sum+=(sum+1);
            if(sum>=x) break;
        }
        if(k==1) cout << "YES\n";
        else if(sum<x) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}