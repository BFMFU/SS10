#include<stdio.h>
int main(){
	int n,m;
	do {
		printf("Nhap vao so hang ma ba muon: ");
		scanf("%d",&n);
	} while(n<0);
	do {
		printf("Nhap vao so cot ma ba muon: ");
		scanf("%d",&m);
	} while(m<0);
	int arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("Nhap gia tri cho mang: ");
			scanf("%d",&arr[i][j]);
		}
	}
	for(int a=0;a<n; a++){
		for(int i=1;i<m;i++){
			int key =arr[i][a];
			for(int j=i-1;j>=0&&arr[j][a]>key;j--){
				arr[j+1][a]=arr[j][a];
				arr[j][a]=key;
			}
		}
	}
	printf("Mang sau khi xap xep lai la: \n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	return 0 ;
}
