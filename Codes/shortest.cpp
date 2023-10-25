#include <bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--)
	{
	  long long int n, d=0,e=0,cnt=0;
	  cin>>n;
	  vector<long long int>v;
	  for(int i=0; i<n; i++)
	  {	
	     long long int 	a; cin>>a;
		 v.push_back(a);
		 if(i!=0 && v[i-1]>v[i]){
		    d = ceil((double)v[i-1]/v[i]);
            e = ceil(log2(d));
			if(v[i]<=1000000000){
			v[i]*=pow(2,e);}
		   cnt+=e;
		 }
	  }
	  cout<<cnt<<endl; 
	}
	return 0;
}
