#include<iostream>
#include<conio.h>
#include<stdio.h>
#include <stdlib.h>
using namespace std;
int slength(char[]);
void s_copy(char[], char[]);
void s_compare(char[], char[]);
char* s_concat(char*, char*);

void main()
{
/*	//clrscr();
	//for length
	char arr1[20];
	int length;
	cout << "\nenter the string \n";
	gets_s(arr1);

	length = slength(arr1);
	cout << "\n so the length of the string is:\n" << length;

	//for copy
	char s1[20], s2[20];
	cout << "\n enter 1st string\n ";
	gets_s(s1);

	s_copy(s1, s2);

	cout << "\nso the copied string is\n";
	puts(s2);

	//for comparison

	char st1[20], st2[20];
	cout << "\n enter 1st string:\n";
	gets_s(st1);
	cout << "\n enter 2nd string:\n";
	gets_s(st2);

	s_compare(st1, st2);
	*/
	//for concatenation
	char *s1, *s2;
	char str1[20];
	char str2[20];
	char *str3;
	char s[20];

	cout << "\nenter 1st string\n";
	gets_s(str1);
	s1 = str1;

	cout << "\nenter 2nd string\n";
	gets_s(str2);
	s2 = str2;

	str3=s_concat(s1, s2);
	//s[20] = str3;
	cout << "\n concatenated string is:\n";
	for (int i = 0; i < 5; i++)
	{
		cout << *(str3 + i);
	}
	//puts(s);


	//getch();
	system("pause");
}


// calculating length

int slength(char arr1[20])
{

	int i = 0;
	while (arr1[i] != '\0')
	{
		i++;
	}
	return i;


}

//string copy
void s_copy(char s1[20], char s2[20])
{
	int c=0;
	while (s1[c] != '\0')
	{
		s2[c] = s1[c];
		c++;
	}
	s2[c] = '\0';

}

//string comparison
void s_compare(char st1[20], char st2[20])
{
	int j=0;
	while (st1[j] == st2[j] && st1[j] != '\0')
	{
		j++;
	}
	if (st1 > st2)
		cout << "\nstring 1 is greater\n";
	else if (st1 < st2)
		cout << "\nstring 2 is greater\n";
	else
		cout << "\nstrings are equal\n";
}

//string concatenation

char* s_concat(char* str1, char* str2)
{
	int z, k;
	char str3[20];
	char *str3_p;
	
	
	for (z = 0; z<5; z++)
	{
		str3[z] = *(str1 + z);
	}
	//str3[z] = '\0';
	for (k = 0; k <= z; k++)
	{
		str3[z + k] = *(str2 + k);
	}
	/*for (int i = 0; i < 5; i++)
	{
		cout << *(str1 + i);
	}*/
	puts(str3);
	str3_p = str3;
	return str3_p;
}
