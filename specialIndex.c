#include<stdio.h>
int main(){
	int n;
	n = scanf("%d\n",&n);
	printf("n: %d\n",n);
	int a[100000],i,j,temp_sum,k,index;
	int max_special_sum = 0;
	a[0] = 0;
	for (i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++){
	temp_sum = a[i];
	k = 2;
	index = i;
	printf("index: %d\n",i);
	printf("index+k: %d\n",(k+index));
	printf("n: %d\n",n);
	while((k+index)<=n){
		printf("Enter loop");
		for(j=(index+1);j<=(k+index);j++)
		temp_sum += a[j];
		index += k;
		k++;
	}
	printf("temp_sum: %d\n",temp_sum);
	if(temp_sum>max_special_sum)
	max_special_sum = temp_sum;
	}
	printf("%d",max_special_sum);
}
