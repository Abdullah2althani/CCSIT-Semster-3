//Q3

#include <stdio.h>
int main( )
{
int m[6], k, j,*p_arr,no=0;
p_arr=m;

printf("Enter 6 values : ");
for ( k = 0 ; k < 6 ; k++ )
scanf("%d", &m[k]);

printf("\n"); 
for ( k = 5, j=0 ; k >= 3 ; k--, j++ ){

if(*(p_arr+k)==*(p_arr+j))
no++;
}
if(no==3)
printf("the array is symmetric");
else 
printf("the array is not symmetric");

}

