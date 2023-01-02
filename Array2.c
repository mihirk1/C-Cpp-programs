#include <stdio.h>

int a[10],n,i;

void accept()
{
    printf("enter size of array: ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
         printf("\nenter element: ");
         scanf("%d", &a[i]);
    }
}

void display()
{
    for(i=0;i<n;i++) 
    {
        printf("\n%d", a[i]);
    }
}

int sum()
{
    int sum=0;
    for(i=0;i<n;i++)
    sum=sum+a[i];
    printf("sum of array:%d", sum);
    return 0;
}

int max()
{
    int mx;
    mx=a[0];
    for(i=0;i<n;i++)
    if(a[i]>mx)
    {
        mx=a[i];
    }
    printf("max is %d", mx);
    return 0;
}

void search()
{
    int pos;
    printf("Enter element position\n");
    scanf("%d",&pos);
    printf("Element is %d",a[pos]);
}

int min()
{
    int mn;
    mn=a[0];
    for(i=0;i<n;i++)
    if(a[i]<mn)
    {
        mn=a[i];
    }
    printf("min is %d",mn);
    return 0;
}

int main()
{
    int res, ch, opt;
    accept();
    do
    {
        printf("\nMenu");
        printf("\n1.display\n2.sum\n3.search\n4.max\n5.min");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
          case 1:
                 display();
                 break;
          case 2:
                sum();
                break;
            
            case 3:
            search();
            break;

            case 4:
            max();
            break;

            case 5:
            min();
            break;
         }
        printf("\nDo you want to continue (1/0)");
        scanf("%d", &opt);
    }while(opt==1);
    
    return 0;
}

