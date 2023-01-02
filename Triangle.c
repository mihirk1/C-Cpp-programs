#include<stdio.h>
#include<math.h>

int equi(int s[3])
{
    int *p=s,i,ct=0;

    for(i=0;i<3;i++)
    {
        if(*p==s[0])
        {
            ct+=1;
        }
        p++;
    }
    if(ct==3)
    return 1;
    else
    return 0;
}

int isosceles(int s[3])
{
    int *p,*q,*r;
    p=&s[0];
    q=&s[1];
    r=&s[2];

    if(*p==*q || *p==*r || *q==*r)
    return 1;
    else
    return 0;
}

int right(int s[3])
{
    int *p,*q,*r;
    p=&s[0];
    q=&s[1];
    r=&s[2];

    if(pow(*p,2)+pow(*q,2)==pow(*r,2) || pow(*p,2)+pow(*r,2)==pow(*q,2) || pow(*r,2)+pow(*q,2)==pow(*p,2))
    return 1;
    else
    return 0;

}


int main()
{
    int i,side[3];
    printf("Enter sides of triangle: ");
    for(i=0;i<3;i++)
    {
        scanf("%d",&side[i]);
    }
    
    if(equi(side)==1)
    printf("Triangle is equilateral");
    else if(isosceles(side)==1)
    printf("Triangle is isosceles");
    else if(right(side)==1)
    printf("Triangle is right angle triangle");
    else
    printf("Triangle is scalene");
    return 0;
}

