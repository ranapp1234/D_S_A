#include<stdio.h>
int main () {
    int a=5,b=4;
    int*p=&a;
    printf("enter the value of a %d",*p);
    int*ptr=&b;
    printf("\nenter the value of b %d",*ptr);

    int c;
    int temp;
    if(*p > *ptr) 
    {
        temp = *p;  
        *ptr==0 ? *p : *ptr;     
        *ptr=temp;
    }
    else{
        temp = *ptr;    
        *ptr = *p;          
        *p = temp;
    }
    printf("\nThe values after swapping are : \n");
    printf("Value of a is: %d\n", a);
    printf("Value of b is: %d\n", b);
    printf("the sum of a and b is %d ",c=(a+b));
    return 0;
}

    