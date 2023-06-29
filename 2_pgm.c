//mathematical operations

#include<stdio.h>
int main()
{
  int a,b,sum,sub,product,remainder,exponent,exp=1;
  ;
  float quotient;
  printf("ENTER a");
  scanf("%d",&a);
  printf("ENTER b");
  scanf("%d",&b);
  sum=a+b;
  printf("\nsum is %d+%d=%d",a,b,sum);
  sub=a-b;
  printf(" \nsub is %d-%d=%d",a,b,sub);
  product=a*b;
  printf(" \nproduct is %d*%d=%d",a,b,product);
  quotient= (float) a/b;
  printf(" \nquotient is %d/%d=%f",a,b,quotient);
  remainder=  a%b;
  printf(" \nremainder is %d %% %d=%d\n",a,b,remainder);
    for(int i=0;i<b;i++)
    {
        exp*=a;
    }
    
    printf("exponent=%d\n",exp);
   return 0;
}