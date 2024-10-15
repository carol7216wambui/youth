/*
program for 3 Dimension
Name: Carol Wambui Ngacha
Reg: CT102/G/23184/24
Date:15/Oct/2024
*/

#include <stdio.h>
int main (){
	int k;
	int i; 
	int j;
	
	int shoe_size [2][2][3]={{{40,39,38},{45,37,42}},
	                        {{43,46,41},{34,36,44}}};
	          for(k=0;k<2;k++){
	            for(i=0;i<2;i++){
                   for(j=0;j<3;j++){ 
				   		
		printf("shoe_size [%d][%d][%d]:%d\n",k,i,j, shoe_size[k][i][j]);
	}
	}
	}
	return 0;
	}	
		