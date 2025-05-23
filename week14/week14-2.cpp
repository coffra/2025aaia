//week14-2.cpp
#include <stdio.h>

int gcb(int a,int b)
{
	if(a==0) return b;
	if(b==0) return a;
	return gcb(b,a%b);
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);

	int ans=gcb(a,b);
	printf("%d",ans);
}
