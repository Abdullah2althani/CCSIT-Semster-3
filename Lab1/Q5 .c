 #include<stdio.h>
int main(){
   int m1[10][10],su=0;
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
    
	//sum liner
    for(rctr=0;rctr<r;rctr++)
   {
     for(cctr=0;cctr<c;cctr++){
     if(rctr==cctr)
      su+=m1[rctr][cctr];
      }
    }

    printf("\n sum is:%d",su);
  
    
	return 0;
}
