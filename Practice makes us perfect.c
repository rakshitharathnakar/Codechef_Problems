#include <stdio.h>
#include<stdlib.h>
int main()
{    

    int p[4];
    int c=0;
    for(int i=0;i<4;i++){
        scanf("%d",&p[i]);
        if(p[i]>=10){
            c++;
        }
    }
    {
        printf("%d\n",c);
    }
}
