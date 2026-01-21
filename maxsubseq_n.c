// Online C compiler to run C program online
#include <stdio.h>
int maxsubseq(int a[], int n)
{
    int i,j,k,max=0,sum=0;
    for(j=0;j<n;j++)
    {
        sum+=a[j];
        if(sum>max)
        {
            max=sum;
        }
        else if(sum<0)
        {
            sum=0;
        }
    }
    return max;
}
int main() {
    int a[]={-2,11,-4,13};
    int n=sizeof(a)/sizeof(a[0]);
    int r=maxsubseq(a,n);
    printf("Maximum subsequence sum %d ",r);
    return 0;
}
