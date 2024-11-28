#include<stdio.h>
int main(){
	int ans,q;
int arr[2][3]={{2,3,4},{5,6,7}};
printf("nhap kiem tra xem so day co trong mang hay khong\n");
scanf("%d",&ans);
for(int i =0;i<2;i++){
	for(int j =0;j<3;j++){
		if(ans==arr[i][j]){
			q=1;
			printf("co trong mang\n");
			break;
		}	
	}
}
	if(q !=1){
	printf("khong co trong mang");
}




return 0;

}

