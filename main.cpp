#include<iostream>
#include<string>
#include"main.h"

using namespace std;

int main( )
{
	//Menu();
	Contacts Person[MAX];
	int in = 7, length = 0;
	string name;
	//length = sizeof(Person) / sizeof(Person[0]);
	while (1)
	{
		int find = 0;
		cout << endl;
		Menu();
		cin >> in;
		switch (in)
		{
		case 1:
			Write_Contact(Person, &length);
			break;
		case 2:
			Show_Contact(Person, length);
			break;
		case 3:
			find = Find_Contact(Person, length);
			if (find != -1)
			{
				Delete_Contact(Person, length, find);
				length--;
				cout << "��ϵ��ɾ���ɹ�" << endl;					
			}
			break;
		case 4:
			find = Find_Contact(Person, length);
			if (find != -1)
			{
				cout << find + 1 << "��   " << Person[find].name << "  " << Person[find].sex
					 << "  " << Person[find].age << "  " << Person[find].phone_number
					 << "  " << Person[find].home_address << endl << endl;
			}		
			break;
		case 5:
			find = Find_Contact(Person, length);
			if (find != -1)
			{
				cout << "��Ҫ�޸ĵ���ϵ����:" << endl;
				cout << find + 1 << "��   " << Person[find].name << "  " << Person[find].sex
					<< "  " << Person[find].age << "  " << Person[find].phone_number
					<< "  " << Person[find].home_address << endl << endl;
				Rewrite_Contact(Person, find);
				cout << "��ϵ���޸������" << endl;
				cout << find + 1 << "��   " << Person[find].name << "  " << Person[find].sex
					<< "  " << Person[find].age << "  " << Person[find].phone_number
					<< "  " << Person[find].home_address << endl << endl;
			}
			break;
		case 6:
			length = 0;
			cout << "��ϵ�������!" << endl;
			break;
		case 0:
			cout << "��лʹ��!��Ե�ٻ�!" << endl;
			return 0;
		default:
			cout << "����������������������0-6��лл!" << endl;
			break;
		}
	}
	
	system("pause");
	return 0;
}