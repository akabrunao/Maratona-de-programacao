#include <stdio.h>
#include <string.h>
int main(){
    int n;
    scanf("%d",&n);
    char s[2100];
    scanf("%s",s);
    char res[2100];
    int len=0;
    for(int i=0;i<n;i++){
        if(i%2==0)res[len++]=s[i];
        else{
            memmove(res+1,res,len);
            res[0]=s[i];
            len++;
        }
    }
    if(n%2==0){
        for(int i=0;i<n/2;i++){
            char tmp=res[i];
            res[i]=res[n-1-i];
            res[n-1-i]=tmp;
        }
    }
    res[n]='\0';
    printf("%s",res);
    return 0;
}
