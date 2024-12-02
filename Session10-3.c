#include<stdio.h>

int main(){
	int a[4] = {6,1,5,4};

	printf("Mang truoc khi sap xep: ");
	for(int i = 0;i < 4;i++){
		printf("%d\t",a[i]);
	}
	for(int i = 1;i < 4;i++){
		int b = a[i];
		int j = i - 1;
		while(j>= 0 && b<a[j]){
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1]= b;
	}
	printf("\nMang sau khi dc sap xep: ");
	for(int i = 0;i < 4;i++){
		printf("%d\t",a[i]);
	}
	return 0;
}

