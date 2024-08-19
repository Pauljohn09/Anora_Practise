#include<stdio.h>
void main(){
    int num;
    int arr[50];
    int binary[50];
    int i=0;
    printf("Enter the number to find the corresponding binary: ");
    scanf("%d",&num);
    while (num >0)
    {
      
        arr[i]=num%2;
        num=num/2;
        if(num==0){break;}
        i++;
    }
    //to print the binary
    for (int j=0;j<i+1;j++){
        binary[j]=arr[i-j];
        
    }
    printf("%d",binary[0]);
    printf("The binary of the corresponding number is : ");
    for (int k = 0; k < i+1; k++)
    {
       printf("%d", binary[k]);
    }
    
    

}