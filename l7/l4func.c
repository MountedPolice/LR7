#include <stdio.h>

//task2
void writeArray(int *arr, int n)
{

	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//task3 
void readArray(int *arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
}

//Быстрая сортировка
void quickSort(int *arr, int left, int right)
{
	int pivot; // разрешающий элемент
	int l_hold = left; //левая граница
	int r_hold = right; // правая граница
	pivot = arr[left];
	while (left < right) // пока границы не сомкнутся
	{
		while ((arr[right] >= pivot) && (left < right))
			right--; // сдвигаем правую границу пока элемент [right] больше [pivot]
		if (left != right) // если границы не сомкнулись
		{
			arr[left] = arr[right]; // перемещаем элемент [right] на место разрешающего
			left++; // сдвигаем левую границу вправо
		}
		while ((arr[left] <= pivot) && (left < right))
			left++; // сдвигаем левую границу пока элемент [left] меньше [pivot]
		if (left != right) // если границы не сомкнулись
		{
			arr[right] = arr[left]; // перемещаем элемент [left] на место [right]
			right--; // сдвигаем правую границу вправо
		}
	}
	arr[left] = pivot; // ставим разрешающий элемент на место
	pivot = left;
	left = l_hold;
	right = r_hold;
	if (left < pivot) // Рекурсивно вызываем сортировку для левой и правой части массива
		quickSort(arr, left, pivot - 1);
	if (right > pivot)
		quickSort(arr, pivot + 1, right);
}

//task4
void sort(int *arr, int n) {
	quickSort(arr, 0, n - 1);
}


