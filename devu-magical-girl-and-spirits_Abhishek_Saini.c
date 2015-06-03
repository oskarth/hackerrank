#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long int T,i,j,count,n,sp,pos,minMax;
    scanf("%lld",&T);

    // just keeps going. Why using longs?
    while(T--){
        scanf("%lld",&n);
        sp=0;
        count=0;
        minMax=-1;
        for(i=0;i<n;i++){ // loop through all spirits
            scanf("%lld",&j);
            sp=sp+j;
            if(j<0){ // if strength is negative
                j=-j;
                if(j>minMax) minMax=j; // worst case?
            }
            if(sp<0){ // special power?
              count++; // a hit? idk
              if(count==1){ // can use specialpower?
                sp=sp+2*minMax; // what?
                }
                if(count==2) pos=i+1; // dead
            }
        }
        if(count<2) printf("She did it!\n");
        else printf("%lld\n",pos);
    }
    return 0;
}
