 #include<stdio.h>
int main(){
   int m1[10][10],m2[10][10],su[10][10];
   int r=0,c=0,rctr=0,cctr=0;
  
  // size
  printf("Enter the size of Matrex:\n "); 
  scanf("%d %d",&r,&c);
  
  // 1st matrix
  printf("\nEnter first Matrex %dX%d:\n",r,c); 
   for(rctr=0;rctr<r;rctr++)
   {
     for(cctr=0;cctr<c;cctr++)
       scanf("%d",&m1[rctr][cctr]);
    }
    
   // 2st matrix
   printf("\nEnter secand Matrex %dX%d:\n",r,c);
   for(rctr=0;rctr<r;rctr++)
   {
     for(cctr=0;cctr<c;cctr++)
       scanf("%d",&m2[rctr][cctr]);
    }
    
    //subtract
    for(rctr=0;rctr<r;rctr++)
   {
     for(cctr=0;cctr<c;cctr++)
      su[rctr][cctr]=m1[rctr][cctr]-m2[rctr][cctr];
    }
    
    printf("\n subtract array:\n");
   for(rctr=0;rctr<r;rctr++)
   {
     for(cctr=0;cctr<c;cctr++)
      printf("%d ",su[rctr][cctr]);
      printf("\n");
    }
    
	return 0;
}
