#include<stdio.h>
int main(){
	int a,n,i;
	int sum = 0;
	for(i=0;i<n;i++){
		scanf("%d",&a);
		if(a>=0)
		sum += a;
	}
	printf("%d",sum);
}
