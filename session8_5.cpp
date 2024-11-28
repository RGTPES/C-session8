#include<stdio.h>

int main(){
	int a,b,sum;

	printf("nhap mang a\n ");
		scanf("%d",&a);
		printf("nhap mang b\n");
		scanf("%d",&b);
		int arr[a][b];
	
	for(int i =0;i< sizeof(arr)/sizeof(arr[0]);i++){
		
		for(int j =0;j < sizeof(arr[i])/sizeof(int);j++){
			printf(" nhap phan hang %d  cot %d\n",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i =0;i< sizeof(arr)/sizeof(arr[0]);i++){
		
		for(int j =0;j < sizeof(arr[i])/sizeof(int);j++){
			if(i==0 || i== a-1 || j==0 || j==b-1){
				
			sum+= arr[i][j];
		}
		
		
	}
}
printf("%d",sum);
}
