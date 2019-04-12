#include<stdio.h>
#include<stdlib.h>

int main()
{
	int second,h,m,s;
	printf("請輸入秒:");
	scanf("%d",&second);
	h = second/3600;
	m = (second%3600)/60;
	s = second%60;
	printf("等於:%dh%dm%ds\n",h,m,s);
	system("pause");
	return 0;
}
