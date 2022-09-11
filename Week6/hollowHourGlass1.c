#include<stdio.h>
#include<math.h>
int main(){
	int x,r,air,s;
	scanf("%d",&x);
	r=(-1)*(x-1);
	while(r<=x-1){
		air=1;
		while(air<(x-abs(r))){
			printf(" ");
			air++;
		}
		s=1;
		if(r==(-1)*(x-1) || r==x-1){
			while(s<=abs(r)*2+1){
				printf("*");
				s++;
			}
		}
		else if(r==0){
			printf("*");
		}
		else{
			printf("*");
				while(s<=abs(r)*2-1){
					printf(" ");
					s++;
				}
				printf("*");	
		}
		printf("\n");
		r++;
	}
	return 0;
}