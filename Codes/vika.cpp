#include<iostream>
using namespace std;
void solve()
{
    int a,b;
    cin>>a>>b;
    string z[a];
    string c="vika";
    for(int i=1;i<=a;i++)
    {
        cin>>z[i];
    }
    int idx=0;
    for(int i=0;i<b;i++)
    {
        for(int j=1;j<=a;j++)
        {
            if(z[j][i]==c[idx])
            {
                idx++;
                break;
            }
        }
    }
    if(idx==4)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
int main()
{
    int num;
    cin>>num;
    while(num--)
    {
        solve();
    }
    return 0;
}