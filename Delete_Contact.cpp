#include"main.h"

void Delete_Contact(Contacts* arr, int length,int position)
{
	if (position + 1 == length)
	{
		return;
	}
	else
	{
		for (int i = position; i < length - 1; i++)
		{
			arr[i] = arr[i + 1];
		}
	}
}