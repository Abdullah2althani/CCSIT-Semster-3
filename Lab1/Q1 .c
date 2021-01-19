#include<stdio.h>
int main(){
   int a[10];
   int ser,n,ch=0;
   
   printf("Enter the Elements of array[10]:\n");
   for(n=0;n<10;n++)
    scanf("%d",&a[n]);
   
   printf("\nEnter the value you looking for:  ");
   scanf("%d",&ser);
   
   for(n=0;n<10;n++){
   if(ser==a[n])
   {
     printf("\nYour value in array No: %d is %d \n\a",n+1,a[n]);
     ch=ch+1;
    }
}
	if(ch==0)
	printf("\n\a Your value not here! "); 

	return 0;
}
