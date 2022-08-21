#include<stdio.h>
int main(){
	int x,i,j;
	i=1;
	scanf("%d",&x);
	while(i<=x){
		j=1;
		while(j<=i){
			if(j<=i){
			printf("*");
			}
			if(j==i){
			printf("\n");
			}
			j++;
		}
		i++;
	}
	return 0;
}