#include <stdio.h>
#include<stdlib.h>
int main()
{    
  int t;
  scanf("%d",&t);
  while(t--){
      int l,r,i,c=0;
      scanf("%d%d",&l,&r);
      for(i=l;i<=r;i++){
          if(i%10==2 || i%10==3 || i%10==9){
              c++;
          }
      }
      printf("%d\n",c);
  }
}
