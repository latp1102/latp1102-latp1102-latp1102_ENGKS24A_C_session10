#include<stdio.h>

int main(){
	
	int a[4] = {7,1,5,4};
	int n,b = 0;

	printf("Mang ban dau: ");
	
	for(int i = 0;i < 4;i++){
    	printf(" %d ",a[i]);
	}

	printf("\nMoi ban nhap vao 1 phan tu bat ki: ");
	scanf("%d",&n);
	
	for(int i = 0;i < 4;i++){
		if (n==a[i]){
			printf("\nphan tu %d co vi tri %d trong mang\n",i,a[i]);
			b++;
		}	
	}
	if(b == 0){
		printf("phan tu khong ton tai");
	}

	return 0;
}
