#include<stdio.h>
#include<stdlib.h>
int main(){
	char ISBN[11];
	int sum;
	scanf("%s",ISBN);
	printf("%s",ISBN);
	sum = atoi(ISBN[0]) + 2*atoi(ISBN[1]) + 3*atoi(ISBN[2]) + 4*atoi(ISBN[3]) + 5*atoi(ISBN[4]) + 6*atoi(ISBN[5]) + 7*atoi(ISBN[6]) + 8*atoi(ISBN[7]) + 9*atoi(ISBN[8]) + 10*atoi(ISBN[9]);
	if(sum%11==0)
	printf("Legal ISBN");
	else
	printf("Illegal ISBN");
}
