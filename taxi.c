#include<stdio.h>
int main(){
	int d;
	int oc, of, od;
	int cs, cb, cm, cd;
	scanf("%d",&d);
	scanf("%d %d %d",&oc, &of, &od);
	scanf("%d %d %d %d",&cs, &cb, &cm, &cd);
	//printf("%d\n",d);
	//printf("%d %d %d",oc,of,od);
	//printf("%d %d %d %d",cs,cb,cm,cd);
	int costClassic, costOnline;
	if(d<=of)
	costOnline = oc;
	else
	costOnline = oc+(d-of)*od;
	costClassic = cb + (d/cs)*cm + d*cd;
	printf("%d %d",costClassic,costOnline);
	if(costClassic<costOnline)
	printf("Classic Taxi");
	else
	printf("Online Taxi");
}
