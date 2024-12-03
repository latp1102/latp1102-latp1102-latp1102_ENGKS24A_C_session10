#include <stdio.h>

int main(){
	int num[5]={1,3,2,2,4};
	int a;
	int n = sizeof(num)/sizeof(int);
	int flag = -1;
	printf("moi ban nhap gia tri can tim: ");
	scanf("%d",&a);
	for(int i = 0;i< n;i++){
		if(num[i] == a){
			printf("\nphan tu %d co vi tri la %d\t",a,i);
			flag=i;
		}
	}
	if(flag == -1){
		printf("khong tim thay phan tu  trong mang",a);
	}
	return 0;
}
