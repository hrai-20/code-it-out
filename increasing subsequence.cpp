#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,p=0;string s="";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int l=0,r=n-1;
    while(l<=r){
        if(a[l]<a[r]){
            if(a[l]>p){
                s+='L';p=a[l];l+=1;
            }
            else if(a[r]>p){
                s+='R';p=a[r];r-=1;
            }
            else break;
        }
        else{
            if(a[r]>p){
                s+='R';p=a[r];r-=1;
            }
            else if(a[l]>p){
                s+='L';p=a[l];l+=1;
            }
            else break;
        }
    }
    cout<<s.size()<<"\n";
    cout<<s<<"\n";
}