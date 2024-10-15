/*
Name:Carol Wambui Ngacha
Reg: CT102/G/23184/24
	*/

#include <stdio.h>
int main () {
	int bookID;
	int dueDate;
	int returnDate;
	int daysOverdue;
	int fineRate;
	int fineAmount;
	
// input from the user
    printf("enter the bookID:");		
	scanf("%d", &bookID);
	printf("enter the dueDate:");
	scanf("%d", &dueDate);
	printf("entr the returnDate;");
	scanf("%d", &returnDate);
	
// calculate the daysOverdue
    daysOverdue = (returnDate-dueDate);
    printf("the daysOverdue = %d\n",daysOverdue);
    
    if (daysOverdue <= 7){
	 fineRate = 20;
	} else if (daysOverdue >=8 && daysOverdue <=14){  
	fineRate  = 50;
    }else if (daysOverdue >=15){ 
     fineRate = 100;
    }
// calculate the fineAmount
     fineAmount = daysOverdue * fineRate;
	 printf("the fineAmount =%d\n",fineAmount);
	     
    printf("the bookID = %d\n",bookID);
    printf("the dueDate = %d\n",dueDate);
    printf("enter the returnDate =%d\n",returnDate);
    printf("enter the daysOverdue =%d\n",daysOverdue);
    printf("the fineRate =%d\n",fineRate);
    printf("the fineAmount =%d\n",fineAmount);
	 return 0;
} 		
