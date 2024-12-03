#include<stdio.h>
int main(){
	int arr[5]={52,1,50,10,6};
	int temp;
	for(int i=0;i<sizeof(arr)/sizeof(int);i++){
		for(int j=0;j<sizeof(arr)/sizeof(int)-i-1;j++){
			temp=arr[j];
			if(arr[j]>arr[j+1]){
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("Mang sau khi sua la: ");
	for(int i=0;i<sizeof(arr)/sizeof(int);i++){
		printf("%d ",arr[i]);
	}
	return 0 ;
}
