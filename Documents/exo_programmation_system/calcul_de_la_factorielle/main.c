#include <stdio.h>
#include <stdlib.h>
int factorielle(int n){
    int i,f;
    if(n>0){
        f=1;
        for(i=2;i<=n;i++){
            f=f*i;
        }
        return f;
    }else if(n==0){
        return 1;
    }else{
        return -1;
    }

}

int main()
{
    int a,w;
    printf("entrez une valeur\n");
    scanf("%d",&a);
    w=factorielle(a);
    printf("la factorielle de %d est:%d",a,w);
    return 0;
}
