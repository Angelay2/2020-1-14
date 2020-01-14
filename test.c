#include <stdio.h>
#include <Windows.h>

// 指针允许和数组的最后一个元素的下一个元素的地址进行比较
// 但不允许和第一个元素的前一个元素的地址进行比较
// 数组名和数组首元素的地址是一样的
int main1(){
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	printf("%d\n", arr);// 相当于数组的首元素的地址 
	printf("%d\n", &arr[0]);//相当于第一个元素的地址 在数值上等于首元素的第一个字节的地址

	system("pause");
	return 0;
}
// 对于指针而言,访问元素可以有两种方式
int main2(){
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int* p = arr; // p 里放的是数组首元素的地址
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++){
		printf("&arr[%d] = %p <===> p + %d = %p\n", i, &arr[i], i, p + i);//值相等
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


