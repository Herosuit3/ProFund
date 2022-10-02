#include<stdio.h>
int main(){
	int x,r,air,s,a;
	scanf("%d",&x);
	air=x-1;
	for(r=1;r<=x;r++){
		for(a=1;a<=air;a++){
			printf(" ");
		}
		air--;
		for(s=1;s<=r*2-1;s++){
			printf("*");
			}
		printf("\n");
	}
	return 0;
}