#include<stdio.h>
int main(){
int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int sum;
for(int i =0;i<3;i++){
	printf("%d \n",arr[i][3-i-1]);
	sum+=arr[i][i];
}
printf("%d",sum);



return 0;

}

