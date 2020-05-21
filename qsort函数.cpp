#include<stdio.h>
#include<stdlib.h>

int cmp_int(const void* _a, const void* _b)  //参数格式固定
{
	int* a = (int*)_a;    //强制类型转换
	int* b = (int*)_b;
	return *b-*a;
}
int main()
{

	int ch[10];
	for (int i = 0; i < 10; i++)
		scanf("%d", &ch[i]);





	qsort(ch, 10, 4, cmp_int);



	for (int h = 0; h < 10; h++)
		printf("%d\t", ch[h]);










	return 0;
}
