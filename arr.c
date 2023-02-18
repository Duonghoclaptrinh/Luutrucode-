#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int t=0;
        for(int j=1;j<=i;j++)
        {
            t+=j;
        }
        printf("%d\n",t);
    }
}
