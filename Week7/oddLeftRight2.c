#include<stdio.h>
#include<string.h>
int main(){
	int i,x[10];
	for(i=0;i<10;i++){
		scanf("%d",&x[i]);
	}
	for(i=1;i<=8;i++){
		if(x[i-1]==1 || x[i-1]==3 || x[i-1]==5 || x[i-1]==7 || x[i-1]==9){
			if (x[i+1]==1 || x[i+1]==3 || x[i+1]==5 || x[i+1]==7 || x[i+1]==9){
				printf("%d ",x[i]);
			}
		}
	}
	return 0;
}