#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int p[110], inv[110];
    for(int i=0;i<n;i++){
        scanf("%d",&p[i]);
    }
    for(int i=0;i<n;i++){
        inv[p[i]-1]=i+1;
    }
    for(int i=0;i<n;i++){
        printf("%d ",inv[i]);
    }
    return 0;
}
