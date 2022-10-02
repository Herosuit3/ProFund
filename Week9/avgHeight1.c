#include<stdio.h>
int main(){
	float x,sum,avg;
	for(int i=1;i<=10;i++){
		scanf("%f",&x);
		sum+=x;
	}
	avg=sum/10;
	printf("%.2f",avg);
	return 0;
}