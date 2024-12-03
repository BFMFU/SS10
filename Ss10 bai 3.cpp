#include<stdio.h>
int main(){
	int arr[6]={91,13,40,23,20,15};
	int key;
	for(int i=1;i<6;i++){
		key=arr[i];
		for(int j=i-1;j>=0&&arr[j]>key;j--){
			arr[j+1]=arr[j];
			arr[j]=key;
		}
	}
	printf("Mang da hoan doi la: ");
	for(int i=0;i<6;i++){
		printf("%d ",arr[i]);
	}
	return 0 ;
}
