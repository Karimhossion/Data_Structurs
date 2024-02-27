//dhara jog
/*#include<stdio.h>
int main()
{
    int n,result;
    scanf("%d",&n);
    result=n*(n+1)/2;
    printf("%d",result);
    return 0;
}*/
#include<stdio.h>
int main()
{
    int n,result;
    scanf("%d",&n);

    for (int i = 0; i <=n; i++)
    {
        result=result+i;
    }
    printf("%d",result);
    return 0;
    
}