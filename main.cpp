#include <stdio.h>
#include<stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n;
float part=1;

float total;
int i;


int main(void) {
	
	printf("¿é¤J¤@¼Æ¦r:");
	scanf("%d",&n);

	for(i=2;i<=n;i++)
	{
	
	part *=i;
	
	total +=1/part;
		

	}
printf("(1/2!)+(1/3!)+(1/4!)+...(1/n!)=%f\n",total);
	return 0;
}

