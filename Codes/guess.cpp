#include <bits/stdc++.h>
using namespace std;

int main(){
  int T;
  cin>>T;
  while(T--)
  {
    int n,k,d=0,count=0,x=0;
    cin>>n>>k;
    vector<int>v;
    for(int i=0; i<n; i++)
    {	
      int a;
      cin>>a;
      d=(a%k)?(k-(a%k)):(a%k);
      if(4-(a%4)==2){
        count++;
      }
      v.push_back(d);
    }
    sort(v.begin(), v.end()); 
    if(v[0]==0){
      cout<<0<<endl;
    }
    else if(k==2){
      cout<<1<<endl;
    }
    else if(k==4){
      auto it = find(v.begin(), v.end(), 1);
        x = (it != v.end()) ? 1:2;
       if(count==2){
        cout<<0<<endl;
       }
       else if(count==1){
        cout<<1<<endl;
       }
       else{
        cout<<x<<endl;
       }
    }
    else{
      cout<<v[0]<<endl;
    }
  }
  return 0;
}
