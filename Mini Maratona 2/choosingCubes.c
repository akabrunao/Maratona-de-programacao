#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,f,k;
        scanf("%d%d%d",&n,&f,&k);
        int a[110];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        int fav = a[f-1], high=0, equal=0;
        for(int i=0;i<n;i++){
            if(a[i]>fav) high++;
            if(a[i]==fav) equal++;
        }
        if(k < high+1) printf("NO\n");
        else if(k >= high+equal) printf("YES\n");
        else printf("MAYBE\n");
    }
    return 0;
}
