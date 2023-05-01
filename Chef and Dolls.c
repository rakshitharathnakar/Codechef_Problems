#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    int a[n];
	    int ans=0;
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	        ans=ans^a[i];
	    }
	    printf("%d\n",ans);
	}
	return 0;
}
