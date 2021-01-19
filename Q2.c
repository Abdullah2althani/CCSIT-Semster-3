#include<stdio.h>
typedef struct {
    char emp_name[30] , Job[15] ;
    int empId ;
	float Apay, H_Works;	
  } Employee ;
int main(){
    Employee N ;
    float result ;
     printf ( " Please enter Employee name: " ) ;
      gets ( N.emp_name ) ;
    
	printf ( " Please enter Employee job title: " ) ;
     gets ( N.Job ) ;
 
    printf ( " Please enter Employee ID: " ) ;
    scanf ( "%d",&N.empId) ;  

    printf ( " Please enter the number of hours that emloyee work in mounth: " ) ;
    scanf ( "%f",&N.H_Works) ;

    printf ( " Please enter the amount pay for one hour: " ) ;
    scanf ( "%f",&N.Apay) ;

    result=N.H_Works*N.Apay;

printf ( " \n ************************************** \n " ) ;
printf ( "Employee name: %s\n Employee ID: %d\n Employee job title: %s" ,N.emp_name ,N.empId ,N.Job ) ;
printf ( "\n Hours worked: %.2f \n Amount of pay: %.2f \n Salary : %.2f " ,N.H_Works ,N.Apay , result ) ;
printf (" \n ************************************** \n " ) ;
}
