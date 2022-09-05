#include<stdio.h>
int main(){
	int x,r,air,s;
	scanf("%d",&x);
	r=(-1)*(x-1);
	while(r<=0){
		air=1;
		while(air<(x-abs(r))){
			printf(" ");
			air++;
		}
		s=1;
		while(s<=abs(r)*2+1){
			printf("*");
			s++;
		}
		printf("\n");
		r++;
	}
	r++;
	while(r<=x){
		for(air=1;air<=(x-r);air++){
			printf(" ");
		}
		for(s=1;s<=r*2-1;s++){
			printf("*");
		}
		printf("\n");
		r++;
	}
	return 0;
}