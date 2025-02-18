#include <stdio.h>
#include <stdlib.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int x,y,z;
        scanf("%d %d %d",&x,&y,&z);
        int mi=x,ma=x;
        if(y<mi) mi=y;
        if(z<mi) mi=z;
        if(y>ma) ma=y;
        if(z>ma) ma=z;
        int med=x+y+z-mi-ma;
        printf("%d\n",abs(x-med)+abs(y-med)+abs(z-med));
    }
    return 0;
}
