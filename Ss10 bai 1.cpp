#include<stdio.h>
int main(){
	int arr[5]={3,5,7,1,9};
	int number,temp1,temp2;
	printf("Nhap phan tu ma ban muon kiem tra: ");
	scanf("%d",&number);
	for(int i=0;i<5;i++){
		if(arr[i]==number){
			temp1=arr[i];
			temp2=i;
		}	
	}
	if(temp1==number){
		printf("Vi tri cua phan tu trong mang la: %d",temp2+1);
	} else{
		printf("Phan tu khong nam trong mang.");
	}
	return 0 ;
}
