#include <stdio.h>

int main(){
	int a;
	int num[5]={1,3,2,4,6};
	int flag=-1;
	int mid;
	int start=0;
	int n = sizeof(num)/sizeof(int);
	int end = n - 1;
	
	for (int i = 0;i<5;i++){
		for (int j = 0;j < 5-i-1;j++){
			if (num[j] > num[j+1]){
				int temp = num[j];
				num[j] = num[j+1];
				num[j+1] = temp;
			}
		}
	}
	printf("moi ban nhap so can tim: ");
	scanf("%d",&a);
	while(start <= end){
		mid = (start + end)/2;
		if(num[mid] > a){
			end = mid-1;
		}else if(num[mid] < a){
			start = mid+1;
		}else{
		printf("phan tu %d co vi tri la %d: ",a,mid);
		flag++;
	   	break;
		}
	}
	if(flag != 0){
		printf("khong co trong mang");
	}
	return 0;
}
