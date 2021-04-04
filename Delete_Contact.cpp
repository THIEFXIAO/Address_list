#include"main.h"

void Delete_Contact(Contacts* arr, int length,int position)
{
	for (int i = position; i < length + 1; i++)
	{
		arr[i] = arr[i + 1];
	}
}