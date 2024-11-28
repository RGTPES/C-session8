#include<stdio.h>
int main(){
	int max;
	int arr[2][3]={{3,4,5},{6,7,8}};
	for(int i =0;i<2;i++){
	for(int j =0;j<3;j++){
	if(arr[i][j]>max ){
		max = arr[i][j];
	}
		}	
	}
	printf("%d",max);



return 0;

}

