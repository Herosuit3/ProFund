#include<stdio.h>
int main(){
	int x,r,air,s,a;
	scanf("%d", &x);
	air=x-1;
	r=1;
	while(r<=x){
		a=1;
		s=1;
		while(a<=air){
			printf(" ");
			a++;
		}
		air--;
		while(s<=r*2-1){
			printf("*");
			if(s==r*2-1){
				printf("\n");
			}
			s++;
		}
		r++;
	}
	return 0;
}