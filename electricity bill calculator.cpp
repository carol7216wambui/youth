/*
A program to calculate electricity bill
Authot:Carol Wambui Ngacha
Reg:CT102/G/23184/24
Date:10/oct/2024
*/

#include <stdio.h>
int main (){

      float UnitConsumed;
      int CustomerID;
      char CustomerName [20];
      float Bill;
      float Charges;
      int Surcharge;
      float Total_Amount_to_Pay;
   
      printf("enter CustomerID:");
      scanf("%d", &CustomerID);
      printf("enter CustomerName:");
      scanf("%s", CustomerName);
      printf("enter UnitConsumed:");
      scanf("%f", &UnitConsumed);
      
      if (UnitConsumed <=199){ 
      Charges =1.20;
      } else if (UnitConsumed >=200 &&  UnitConsumed<400){
      Charges = 1.50;
      } else if (UnitConsumed >=400 && UnitConsumed<600){
      Charges =1.80;
      } else if (UnitConsumed >=600){
      Charges =2.0;
      }
      
      Bill=UnitConsumed*Charges;
      printf("Total Bill:%.2f\n", Bill);
      if (Bill > 400 && Bill > 100){
      	Surcharge = Bill * 0.15;
	  printf("Surcharge:%d\n", Surcharge);
	  }
	  
	  Total_Amount_to_Pay = Bill + Surcharge;
	  printf("Total_Amount_to_Pay:%.2f\n", Total_Amount_to_Pay);
      
      printf("CustomerID: %d\n", CustomerID);
      printf("CustomerName: %s\n", CustomerName);
      printf("UnitConsumed: %.2f\n", UnitConsumed);
      return 0;
}