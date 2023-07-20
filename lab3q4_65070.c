#include <stdio.h>
int main(){
	int a = 1;
	int sum = 0;
	int n =0;
	int average =0;

	while (1) {
	scanf("%d",&a);
	if (a<=0) break;
	sum += a;
	n++;
	}
	printf("sum = %d\n",sum);
	if (n == 0) average = 0;
	else average = sum/(n);
	printf("average = %d\n",average);
	return 0;
}
