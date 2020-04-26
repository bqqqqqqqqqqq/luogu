#include<cstdio>
#include<iostream>
#include<algorithm>
#define MAXN 100005
#define INF 0x3f3f3f3f
using namespace std;
struct dat{
    int cot,pro;
}d[MAXN];
bool cmp(dat a,dat b){
    return a.cot<b.cot;
}
int main(){
    int ned,n,i,ans=0,mn;
    cin>>ned>>n;
    for(i=0;i<n;++i)scanf("%d%d",&d[i].cot,&d[i].pro);
    sort(d,d+n,cmp);
    i=0;
    while(ned){
        mn=min(ned,d[i].pro);
        ned-=mn;
        ans+=mn*d[i].cot;
        ++i;
    }
    cout<<ans<<endl;
}