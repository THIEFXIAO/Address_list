#include<string>
#include<iostream>
#define MAX 3
using namespace std;

struct Contacts
{
	string name;
	string sex;
	int age;
	string phone_number;
	string home_address;
};

void Menu( );
void Write_Contact(Contacts* arr, int* length);
void Show_Contact(Contacts* arr, int length);
int Find_Contact(Contacts* arr, int length);
void Delete_Contact(Contacts* arr, int length,int position);
void Rewrite_Contact(Contacts* arr, int position);