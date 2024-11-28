#include<stdio.h>
int main(){
int arr[2][3]={{2,3,4},{5,6,7}};
for(int i =1;i>=0;i--){
	for(int j =2;j>=0;j--){
		printf("arr[%d][%d] = %d\n",i,j,arr[i][j]);
	}
}



return 0;

}

