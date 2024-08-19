#include<stdio.h>
void reverse(int* x,int size);
int main()
{
    int arr[]={1,2,3,4,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    reverse(arr,size);
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
void reverse(int* x,int size)
{
    
    int j=size-1;
    for(int i=0;i<size/2;i++)
    {
       int temp=*(x+i);
       *(x+i)=*(x+j);
       *(x+j)=temp;
       j--;
    }
    
}