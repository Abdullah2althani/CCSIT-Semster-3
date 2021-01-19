//Q2

#include <stdio.h>
int main( )
{
int m[6], k, j,*p_arr,no;
p_arr=m;

printf("Enter 6 values : ");
for ( k = 0 ; k < 6 ; k++ )
scanf("%d", &m[k]);

printf("\n"); 
for ( k = 5, j=0 ; k >= 3 ; k--, j++ ){
no = *(p_arr+k);
*(p_arr+k)=*(p_arr+j)*(-1);
*(p_arr+j)=no*(-1);

}
for ( k = 0 ; k < 6 ; k++ )
printf("%d ", m[k]);
}
