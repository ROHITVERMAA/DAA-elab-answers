#include <bits/stdc++.h>
using namespace std;
#define solve int beads(int len,int lim1,int lim2) cin>>n>>m;
#define rep(i,s,t) for(I i=s;i<=t;++i)
#define c(f) memset(f,-1,sizeof f);
#define R return
#define I int
#define L long long
L f[55][2][2],K,d;I a[55],n;
L C(I l,I r,I x,I y){
 if (l>r)R 1;L&F=f[l][x][y];if(~F)R F;F=0;
 rep(i,0,1)rep(j,0,1)if(a[l]-!i&&a[r]-!j&&(l<r||i==j)&&(x||i<=j)&&(y||i<=(!j)))F+=C(l+1,r-1,x||(i<j),y||(i<!j));R F;
}
I main(){
 cin>>n>>K;c(a)c(f)if(C(1,n,a[1]=0,0)<++K)R cout<<-1,0;
 rep(i,2,n){c(f)d=C(1,n,a[i]=0,0);K-=(a[i]=(d<K))*d;}
 rep(i,1,n)cout<<a[i];
}
