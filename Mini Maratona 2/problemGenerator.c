#include <stdio.h>
#include <string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d %d",&n,&m);
        char s[60];
        scanf("%s",s);
        int cnt[7]={0};
        for(int i=0;i<n;i++){
            cnt[s[i]-'A']++;
        }
        int ans=0;
        for(int i=0;i<7;i++){
            if(cnt[i]<m) ans+=m-cnt[i];
        }
        printf("%d\n",ans);
    }
    return 0;
}
