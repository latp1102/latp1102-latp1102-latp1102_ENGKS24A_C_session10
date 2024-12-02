#include<stdio.h>

int main(){
	
	int a[4] = {4,2,3,1};
	
	printf("Mang chua sap xep: ");
	
	for(int i = 0;i < 4;i++){
		printf("%d\t",a[i]);
	}
	for(int i = 0;i < 4;i++){
		for(int j = 0;j < (4 - 1 - i);j++){
			if(a[j + 1] < a[j]){
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	printf("\nMang da sap xep: ");
	for(int i = 0;i < 4;i++){
		printf("%d\t",a[i]);
	}
	return 0;
}
