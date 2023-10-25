#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--)
    {
      int m,n;
      cin>>n>>m;
      int v=0, c=0, i=0, d=0, k=0, e=0, b=0, f=0,count=0, c1=0,c2=0,c3=0,c4=0;
      for(int z=0; z<n; z++)
      {	
        for(int j=0; j<m; j++){
            char s;
            cin>>s;
            count++;
            if(v==c and (s=='v') ){
                c1=count;
                if(c2!=0){
                    if(c1<c2){
                      v++;
                    }
                    else{
                        continue;
                    }
                } else{
                    v++;
                }
            }
            else if((i==d) and (s=='i') ){
               c2= count;
               if(c3!=0){
                    if(c1!=0){
                        if(c2<c3 and c1<c2){
                        i++;
                        }
                        else {
                        continue;
                        }
                    }
                    else{
                        if(c2<c3 ){
                            i++;
                            }
                        else{
                        continue;
                        }
                    }
               }
               else{
                i++;
               }
            }
            else if((k==e) and (s=='k') ){
                c3=count;
                if(c2!=0){
                    if(c4!=0){
                        if(c4>c3 and c3>c2){
                        k++;
                        }
                        else{
                        continue;
                        }
                    }
                    else{
                        if(c3>c2 ){
                            k++;
                            }
                        else{
                        continue;
                        }
                    }
               }
               else{
                k++;
               }
                
            }
            else if((b==f) and (s=='a') and (c3<count)){
                c4=count;
                 if(c2!=0){
                    if(c1<c2){
                      v++;
                    }
                    else{
                        continue;
                    }
                } else{
                    v++;
                }
            }
        } 
        count=0;
      }
      if(v>0 and i>0 and k>0 and b>0){
        cout<<"yes"<<endl;
      } else{
        cout<<"no"<<endl;
      }
    }
    return 0;
}