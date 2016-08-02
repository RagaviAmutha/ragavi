#include <stdio.h>

int main(void) {
    // your code goes here
    int t,a[100],i,b[100],c[100],k=0,k1=0,max=999,max1=999,j,ans1,a1,b1,ans;
    scanf("%d",&t);
    for(i=0;i<t;i++)
        scanf("%d",&a[i]);
    for(i=0;i<t;i++)
    {
        if(a[i]>0)
            b[k++]=a[i];
        if(a[i]<0)
            c[k1++]=a[i];
    }
   // for(i=0;i<k;i++)
    //	printf("%d ",b[i]);
     //for(i=0;i<k1;i++)
    //	printf("%d ",c[i]);
    
    if(k<k1)
    {
       
        for(i=0;i<k1;i++)
        {
            for(j=0;j<k;j++)
            {
                ans=abs(c[i]+b[j]);
                if(ans<max)
                {
                    max=ans;
                    a1=b[j];
                    b1=c[i];
                }
            }
        }
        printf("%d %d",a1,b1);
    }
    else
    {
        for(i=0;i<k;i++)
        {
            for(j=0;j<k1;j++)
            {
                ans1=abs(b[i]+c[j]);
                //printf("%d %d %d\n",ans1,b[i],c[j]);
                if(ans1<max1)
                {
                    max1=ans1;
                    a1=b[i];
                    b1=c[j];
                }
            }
        }
        printf("%d %d",a1,b1);
    }
   
    return 0;
}
