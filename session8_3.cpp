#include<stdio.h>
int main(){
int a;
printf("nhap so hang so cot :");
scanf("%d",&a);
int arr[a][a];
for(int i =0;i<a;i++){
	for(int j =0;j<a;j++){
		printf("phan tu hang %d cot %d la\n ",i,j);
		scanf("%d",&arr[i][j]);
	}
}
for(int i =0;i<a;i++){
	for(int j =0;j<a;j++){
		printf("%d ",arr[i][j]);
	}	
	printf("\n");
}
return 0;


}
