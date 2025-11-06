#include<stdio.h>
int main() {
    int a,b,temp;
    printf("entre two number:");
    scanf("%d %d" , &a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("After swaping :a=%d,b=%d,a,b");
    return 0;
}