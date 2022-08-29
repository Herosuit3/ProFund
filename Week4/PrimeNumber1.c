#include<stdio.h>
int main(){
	int x,e,count,i;
	e=1;
	while(e!=0){
		scanf("%d",&x);
		count=0;
		if(x==-99){
			printf("END!");
			e=0;
		}
		else {
			for(i=1;i<=x;i++){
				if(x%i==0){
					count++;
				}
			}
			if(count==2){
				printf("Prime Number!");
			}
			else{
				printf("Not Prime Number!");
			}
		}
	}
	return 0;
}