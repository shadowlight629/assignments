// 2 D array
/*
Purity Thuo
15/10/24
*/
#include<stdio.h>
int main(){
	int i,j,k;
	int marks[2][2][3]={{{50,60,70},{50,60,70}},{{50,60,70},{50,60,70}}};
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(k=0;k<3;k++);{
		printf("marks[%d][%d][%d]=%d\n",i,j,k,marks[i][j][k]);
	}
	}
	}
	return 0;
}