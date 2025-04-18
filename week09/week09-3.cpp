//week09-3.cpp
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	vector<int> a(100);
	for (int i=0;i<=99;i++){
		scanf("%d ",&a[i]);
	}
	std:sort(a.begin(),a.end());

	for (int i=0;i<=99;i++){
		printf("%d ",a[i]);
	}
}

