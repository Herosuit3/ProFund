#include<stdio.h>
int main(){
	int x,e,count,i,y;
	e=1;
	while(e!=0){
		scanf("%d",&x);
		i=2;
		count=0;
		if(x==-99){
			printf("END!");
			e=0;
		}
		else {
			while(i<=x){
				if(x%i==0){
					y=i;
					i=x+1;
				}
				i++;
			}
			if(y==x){
				printf("Prime Number!");
			}
			else{
				printf("Not Prime Number!");
			}
		}
	}
	return 0;
}