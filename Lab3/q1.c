//Q1
#include <stdio.h>
int main (){
int m[10],k,*p_arr,x,n;
p_arr=&m;

printf("Enter 10 values : ");
for ( k = 0 ; k < 10 ; k++ )
{
  scanf("%d", &m[k]);
}
n=*p_arr;
x=*p_arr;

for ( k = 0 ; k < 10 ; k++ )
{
  if (x<=*(p_arr+k))
      x=*(p_arr+k);

  if (n>=*(p_arr+k))
      n=*(p_arr+k);
}

printf(" the largest number is %d , and smallest number is %d",x,n);
return 0;
}
