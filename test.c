#include <stdio.h>
#include <Windows.h>

// ָ���������������һ��Ԫ�ص���һ��Ԫ�صĵ�ַ���бȽ�
// ��������͵�һ��Ԫ�ص�ǰһ��Ԫ�صĵ�ַ���бȽ�
// ��������������Ԫ�صĵ�ַ��һ����
int main1(){
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	printf("%d\n", arr);// �൱���������Ԫ�صĵ�ַ 
	printf("%d\n", &arr[0]);//�൱�ڵ�һ��Ԫ�صĵ�ַ ����ֵ�ϵ�����Ԫ�صĵ�һ���ֽڵĵ�ַ

	system("pause");
	return 0;
}
// ����ָ�����,����Ԫ�ؿ��������ַ�ʽ
int main2(){
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int* p = arr; // p ��ŵ���������Ԫ�صĵ�ַ
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++){
		printf("&arr[%d] = %p <===> p + %d = %p\n", i, &arr[i], i, p + i);//ֵ���
	}
	system("pause");
	return 0;
}

int main(){
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int* p = arr;
	printf("%d\n", *(p + 1));
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (; i < sz; i++){
		printf("%d\n", *(p + i));
		printf("%d\n", p[i]);
		printf("%d\n", *(arr + i));
		printf("%d\n", arr[i]);
	}
	system("pause");
	return 0;
}


