#include "pch.h"
#include <iostream>
#include "BinarySearchTree.h"
using namespace std;

template <class T>
struct A
{
	T e;
	T e1;

};



int main()
{
	setlocale(LC_ALL, "Russian");

	/////////////////////[Для бинарного дерева]/////////////////////////////////
	BinarySearchTree<int> a;int inta, int1a;
	BinarySearchTree<double> b; double doubleb, double1b;
	BinarySearchTree<float> c; float floatc, float1c;
	BinarySearchTree<char> d; char chard, char1d;
	/////////////////////////////////////////////////////////////////////////////

	////////////////////////[Это для структуры]//////////////////////////////////////////////
	A<int> aa;
	A<double> bb;
	A<float> cc;
	A<char> dd;
	/////////////////////////////////////////////////////////////////////////////////////////

	int ch, vibor;
	cout << "Введите тип данных:" << endl;
	cout << "[1]-> Инт." << endl;
	cout << "[2]-> Флоат." << endl;
	cout << "[3]-> Дабл." << endl;
	cout << "[4]-> Чар." << endl;
	cin >> vibor;

	system("cls");
	while (1)
	{

		cout << " Выберите действие. " << endl;
		cout << " [1]-> Заполнение элементов дерева[По одному]. " << endl;
		cout << " [2]-> Вывод элементов заполненного дерева[Сортировка по возр-ю]. " << endl;
		cout << " [3]-> Удаление элементов дерева. " << endl;
		cout << " [4]-> Найти элемент в дереве." << endl;
		cout << " [5]-> Заполнить структуру." << endl;
		cout << " [6]-> Вывести данные заполненной структуры." << endl;
		cout << " [7]-> Выход из программы. " << endl;
		cout << " Введите цифру: ";
		cin >> ch;
		system("cls");
		switch (ch)
		{
		case 1:

			cout << " Заполните один элемент: ";
			if (vibor == 1) {				
				cin >> inta;
				a.insert(inta); system("cls");
			}if (vibor == 2) {				
				cin >> doubleb;
				b.insert(doubleb); system("cls");
			}if (vibor == 3) {				
				cin >> floatc;
				c.insert(floatc); system("cls");
			}if (vibor == 4) {			
				cin >> chard;
				d.insert(chard); system("cls");
			}break;

		case 2: cout << endl;
			if (vibor == 1) {
				cout << " Выведенное дерево: " << endl;
				a.print_inorder(); system("pause"); system("cls");
			}if (vibor == 2) {
				cout << " Выведенное дерево: " << endl;
				b.print_inorder(); system("pause"); system("cls");
			}if (vibor == 3) {
				cout << " Выведенное дерево: " << endl;
				c.print_inorder(); system("pause"); system("cls");
			}if (vibor == 4) {
				cout << " Выведенное дерево: " << endl;
				d.print_inorder(); system("pause"); system("cls");
			}break;
		case 3:
			if (vibor == 1) {
				cout << " Введите данные для удаления: ";				
				cin >> int1a;
				a.remove(int1a); system("cls");
			}if (vibor == 2) {
				cout << " Введите данные для удаления: ";	
				cin >> double1b;
				b.remove(double1b); system("cls");
			}if (vibor == 3) {
				cout << " Введите данные для удаления: ";
				cin >> float1c;
				c.remove(float1c);
			}if (vibor == 4) {
				cin >> chard;
				d.insert(chard); system("cls"); system("cls");
			}break;
		case 4:
		{
			if (vibor == 1) {
				cout << "Введите цифру для проверки её наличия : ";
				cin >> int1a;
				a.search(int1a);system("pause");system("cls");
			}if (vibor == 2) {
				cout << "Введите цифру для проверки её наличия : ";		
				cin >> doubleb;
				b.search(doubleb);system("pause");system("cls");
			}if (vibor == 3) {
				cout << "Введите цифру для проверки её наличия : ";				
				cin >> float1c;
				c.search(float1c);system("pause");system("cls");
			}if (vibor == 4) {
				cout << "Введите цифру для проверки её наличия : ";
		
				cin >> chard;
				d.search(chard);
			}break;
		}break;
		case 5:
		{
			if (vibor == 1) {
				cout << "Введите данные для заполнения структуры[Тип int]: ";
				cout << "Первый элемент" << endl;
				cin >> aa.e;
				cout << "Второй элемент" << endl;
				cin >> aa.e1;
				system("cls");
			}if (vibor == 2) {
				cout << "Введите данные для заполнения структуры[Тип double]: ";
				cout << "Первый элемент" << endl;
				cin >> bb.e;
				cout << "Второй элемент" << endl;
				cin >> bb.e1;
				system("cls");
			}if (vibor == 3) {
				cout << "Введите данные для заполнения структуры[Тип float]: ";
				cout << "Первый элемент" << endl;
				cin >> cc.e;
				cout << "Второй элемент" << endl;
				cin >> cc.e1;
				system("cls");
			}if (vibor == 4) {
				cout << "Введите данные для заполнения структуры[Тип char]: ";
				cout << "Первый элемент" << endl;
				cin >> dd.e;
				cout << "Второй элемент" << endl;
				cin >> dd.e1;
				system("cls");
			}break;
		}break;
		case 6:
		{
			if (vibor == 1) {
				cout << "Выведенные данные структуры[Тип int]: " << endl;
				a.print_inorder(); 
				cout <<  " " << aa.e << "  " << aa.e1 << endl;
			}if (vibor == 2) {
				cout << "Выведенные данные структуры[Тип double]: " << endl;
				b.print_inorder();
				cout << " " << bb.e << "  " << bb.e1 << endl;
			}if (vibor == 3) {
				cout << "Выведенные данные структуры[Тип float]: " << endl;
				c.print_inorder();
				cout << " " << cc.e << "  " << cc.e1 << endl;
			}if (vibor == 4) {
				cout << "Выведенные данные структуры[Тип char]: " << endl;
				d.print_inorder();
				cout << " " << dd.e << "  " << dd.e1 << endl;
			}break;
		}break;
		case 7:
			return 0;
			break;
		}
	//	system("cls");
	}
}