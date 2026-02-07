#include <stdio.h>
#include <stdlib.h>
//function
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
    return 0;
}
