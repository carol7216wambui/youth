/*
program for two Dimenssion
Name:Carol Wambui Ngacha
Reg:CT102/G/23184/24
Date:15/Oct/2024
*/

#include <stdio.h>
int main (){
    int i;
    int j;
    int salaries[2][2]={{50000,60000},{55000,40000}};
    for (i=0;i<2;i++){
 	for (j=0;j<2;j++){
    printf("salaries [%d][%d]:%d\n", i,j,salaries[i][j]);
	 }
	}
	return 0;
}