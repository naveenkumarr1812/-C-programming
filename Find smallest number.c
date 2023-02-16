#include<stdio.h>

void main()
{
    int a,b;
    printf("Enter the value of A\n");
    scanf("%d",&a);
    
    printf("Enter the value of B\n");
    scanf("%d",&b);
    
    if(a<b){
        printf("A(%d) is smaller than B(%d)\n",a,b);
    }
    else{
        printf("B(%d) is smaller than A(%d)\n",b,a);
    }
}
