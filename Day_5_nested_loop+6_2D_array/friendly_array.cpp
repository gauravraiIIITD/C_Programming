#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int i,a[n],sum,min,temp,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        min=10000;
        for(j=0;j<n;j++)
        {
            if(j!=i)
            {
                int temp=abs(a[i]-a[j]);
                if(temp<min)
                {
                    min=temp;
                }
            }
        }
        sum+=min;
    }
    printf("%d",sum);   
    return 0;
}

