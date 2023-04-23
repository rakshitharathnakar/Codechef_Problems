#include <stdio.h>
#include<stdlib.h>
int main()
{    
   int t;
   int x,y;
   scanf("%d",&t);
   while(t--){
       scanf("%d%d",&x,&y);
       if(x*5>=y)
         printf("\nyes");
       else
         printf("\nno");
   }
}
