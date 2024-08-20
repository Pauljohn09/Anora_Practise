#include<stdio.h>
void main()
{

    
    int arr[10];
    int num;
    int flag= -1;
    int position;

    printf("Enter the elements of the array:\n");
    for(int i=0;i<10;i++){
        printf("arr[%d] : ",i);
        scanf("%d",&arr[i]);

    }
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int j=0;j<10;j++){
       if(arr[j]==num){
        
        flag=1;
        position=j;
       }
   
    } 
    if(flag==1){
        printf("The number is present in the array in the %d th position",position); 
    }
    else{
        printf("%d",flag);
    }
 
}