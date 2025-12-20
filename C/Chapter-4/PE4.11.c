#include <stdio.h>
int main()
{
    int m,n;
    printf("Enter two mumbers : \n");
    scanf("%d%d",&n,&m);
    if(m%n==0){
        printf("%d is multiple of %d",m,n);
    }else{
        printf("%d is not a multiple of %d",m,n);
    }
    return 0;
}