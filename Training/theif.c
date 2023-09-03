#include <stdio.h>
#include<limits.h>
int main()
{
    int n,j,i,target,count=0,sum=0,ans=INT_MAX;
    printf("enter the no houses : ");
    scanf("%d",&n);
    int a[n];
    printf("enter the houses : ");
    for(i=0;i<n;++i)
       scanf("%d",&a[i]);
    printf("enter the target : ");
    scanf("%d",&target);   
    for(i=0;i<n;++i)
    {
        for(j=i;j<n;++j)
        {
            sum+=a[j];
            count++;
            if(sum>=target && ans>=count)
            {
                ans=count;
                break;
            }
        }
        count=0;
        sum=0;
    }
    printf("%d",ans);
    return 0;
}