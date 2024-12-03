#include<stdio.h>
int main(){
	int arr[5]={9,2,14,5,30};
	int temp;
	printf("Mang truoc khi sua la: ");
	for(int i=0;i<5;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	for(int i=0;i<4;i++){
		int min=i;
		for(int j=i+1;j<5;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
		}
		temp=arr[min];
		arr[min]=arr[i];
		arr[i]=temp;
	}
	printf("Mang sau khi sua la: ");
	for(int i=0;i<5;i++){
		printf("%d ",arr[i]);
	}
	return 0; 
}
