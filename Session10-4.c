#include<stdio.h>

int main(){
	int a[4] = {2,1,5,4};
	
	printf("Mang chua sao xep: ");
	for(int i = 0;i < 4;i++){
		printf("%d\t",a[i]);
	}
	for(int i = 0;i < 4;i++){
		int min = a[i];
		for(int j = i + 1;j < 4;j++){
			if(a[j] < min){
				min = a[j];
				a[j] = a[i];
				a[i] = min;
			}
    	}
	}
	printf("\nMang da sap xep: ");
	for(int i = 0;i < 4;i++){
		printf("%d\t",a[i]);
	}
	return 0;
}
