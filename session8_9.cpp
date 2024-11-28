#include<stdio.h>
int main(){
	int arr[]={1,2,1,2,4,5,6,3,2,3};
	int maxC;
	int maxI;
int length = sizeof(arr)/sizeof(arr[0]);



for(int i =0;i<length;i++){
	int count = 0;
	for(int j =0;j<length;j++){
		if(arr[i]==arr[j]){
			count++;
		}
	}
	if(count > maxC){
		maxC = count;
	maxI = arr[i];
	}
}
printf("phan tu %d xuat hien so lan nhieu nhat %d",maxI,maxC);

}




