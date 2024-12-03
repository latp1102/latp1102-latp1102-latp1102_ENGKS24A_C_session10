#include<stdio.h>


int main (){
	
	int a[3][3] = {{3,4,1},{7,6,9},{5,8,2}};
	int b[9];
	int c = 0;
	for (int j = 0;j < 3;j++){
		for (int i=0;i < 3;i++){
			b[c] = a[i][j];
			c++;
		}
	}
	for(int i = 0;i < 9;i++){
		for(int j = 0;j < (9 - 1 - i);j++){
			if(b[j + 1] < b[j]){
				int temp = b[j];
				b[j] = b[j + 1];
				b[j + 1] = temp;
			}
		}
	}
	c = 0;
	for (int j = 0;j <3;j++){
		for (int i = 0;i < 3;i++){
			a[i][j] =b [c];
			c++;
		}
	}
	for (int i = 0;i < 3;i++){
		for(int j = 0;j < 3;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	} 
	return 0;
}
