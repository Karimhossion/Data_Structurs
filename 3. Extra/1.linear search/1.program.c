//linear search (function use)
//---user input use------------

#include<stdio.h>
void linear_search(int a[],int n,int x){
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]==x)
        {
            printf("the element position: %d\n",i+1);
            count+=1;
        }
    }
    if (count==0)
    {
        printf("The element is not postition\n");
    }
}
int main()
{
    int i,n,x;

    printf("size array : ");
    scanf("%d",&n);

    int a[n];
    printf("elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Search element : ");
    scanf("%d",&x);

    linear_search(a,n,x);
    return 0;
}



































//-----derect input use
/*#include<stdio.h>
void linear_search(int a[],int n,int x){
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]==x)
        {
            printf("the element position: %d\n",i+1);
            count+=1;
        }
    }
    if (count==0)
    {
        printf("The element is not present\n");
    }
}
int main()
{
    int i,n,x;

    n=6;
    int a[10]={12,44,32,18,4,10};
    
    x=18;
    linear_search(a,n,x);

    x=23;
    linear_search(a,n,x);
    return 0;
}*/