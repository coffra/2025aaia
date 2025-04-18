//week09-2.cpp
#include <stdio.h>
int main()
{
	int temp,i,k;
	int a[100];
	for (i=0;i<=99;i++){
		scanf("%d ",&a[i]);
	}
	for (i=0;i<100;i++){
		for (int j=i+1;j<100;j++){
			if(a[i]>a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for (i=0;i<=99;i++){
		printf("%d ",a[i]);
	}
}
