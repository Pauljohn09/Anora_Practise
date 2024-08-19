#include<stdio.h>
#include<math.h>
int main()
{
    int a[]={1,2,4,6,8,9,13,20,32,54,78,91};
    int mx=a[0],mn=a[0],n=sizeof(a)/4;
    int num,f,m,l,s,flag=0,add,loc,L;
    printf("Enter element to be searched\n");
    scanf("%d",&num);
    f=0;
    m=(n-1)/2;
    l=n-1;
    while(a[m] !=num)
    {
 
        if(a[m] >num)
        {
            l=m-1;
        }
        else if(a[m] <num)
        {
            f=m+1;
        }
        if(f>l)
        {
            flag=1;
            break;
        }
        m=(f+l)/2;
    }
    if(flag==0)
    {
        printf("Found at index : %d",m);
    } 
    else if(flag==1)
    {
        if(num<a[0])
        printf("%d",-1);
        else if(num>a[n-1])
        printf("%d",a[n-1]);
        else
        {
            L=abs(a[0]-num);
            for(int i=0;i<n;i++)
            {
                if(L>abs(a[i]-num))
                {
                    L=abs(a[i]-num);
                    loc=i;
                }    
            }
        printf("Nearest member index : %d",loc);
        }
    }

    return 0;
}