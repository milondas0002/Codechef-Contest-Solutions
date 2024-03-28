#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, a, b;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        int dif=a-b;
        if(dif>=10) cout << "0\n";
        else{
        int need=ceil((10.0-(double)dif)/3.0);
        cout << need << "\n";
        }
    }
    return 0;
}