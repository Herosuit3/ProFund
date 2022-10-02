#include<stdio.h>
void avgten(float x[10]){
	float sum=0;
	for(int i=0;i<10;i++){
		sum=sum+x[i];
	}
	printf("%.2f",sum/10);
	
}
int main(){
	float x[10],sum,avg;
	for(int i=1;i<=10;i++){
		scanf("%f",&x[i-1]);
	}
	avgten(x);
	return 0;
}