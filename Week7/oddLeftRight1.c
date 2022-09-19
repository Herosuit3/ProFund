#include<stdio.h>
#include<string.h>
int main(){
	int i,x[10];
	for(i=0;i<10;i++){
		scanf("%d",&x[i]);
	}
	for(i=1;i<=8;i++){
		if(x[i-1]%2 != 0 && x[i+1]%2 !=0){
			printf("%d ",x[i]);
		}
	}
	return 0;
}