#include <stdio.h>
int sum(int *p,int n)
{
    int i,total=0;
    for(i=0;i<n;i++)
    {
        total+=*(p+i);
    }
    return total;
}
int main()
{
    int a[5],n=5,i,result;
    int *p;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    p=a;
    result=sum(p,n);
    printf("%d",result);
    return 0;


}
