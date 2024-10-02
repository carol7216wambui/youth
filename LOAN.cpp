#include <stdio.h>
int main ()
{
int age, income;
 // input age and income of user    
       printf("enter the age:");
       scanf("%d", &age);
       printf("enter the income in (Ksh):");
       scanf("%d", & income);
        
// condition for qualifications for a loan
       if (age >= 21 && income >=21000) {
       printf ("congratulations, you qualify for the loan");
      } else{
     printf ("Unfortunately,we are unable to offer you the loan");
     }
       return 0;
}