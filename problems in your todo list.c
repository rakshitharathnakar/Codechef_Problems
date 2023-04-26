#include <stdio.h>
#include<stdlib.h>
int main()
{    
    int t;
    scanf("%d",&t);
    while(t--){
        int n,d[10000],c=0;
        scanf("%d\n",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d\n",&d[i]);
            if(d[i]>=1000)
                c++;
        }
               printf("%d\n",c);
        }
}
