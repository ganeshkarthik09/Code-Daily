//add,sub two numbers using functions
#include <stdio.h>
int add(int a,int b);
int sub(int a,int b);
int main()
{
int a=20;
int b=10;
 add(a,b);
 sub(a,b);
    return 0;
}
int add(int a,int b){
    printf("%d + %d = %d \n",a,b,a+b);
}
int sub(int a,int b){
    printf("%d -%d = %d",a,b,a-b );
}