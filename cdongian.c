#include<stdio.h>
#include<math.h>
int Ngto(int i)
{
    int t=0;
    for(int j=1;j<=i/2;j++)
    {
        if(i%j==0)
        {
            t+=1;
        }
    }
        if(t==1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
}
int main()
{
    int n;
    scanf("%d",&n);
    int (*ham)(int a);
    ham=Ngto;
    if((*ham)(n)==0)
    {
        printf("Khong phai so nguyen to");
    }
    else if((*ham)(n)==1)
    {
        printf("So do la so nguyen to");
    }

    return 0;
}
