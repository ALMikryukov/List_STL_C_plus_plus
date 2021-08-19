#include<iostream>
#include<list>
#include<vector>
using namespace std; 

/*  STL ���������� ����������  �������� ����  */

//����  ��  ������������  �������������� ����� [] 

template <typename T>
void PrintList(const list <T>& lst) {

	for (auto i = lst.cbegin(); i != lst.end(); ++i)///cbegin  ����� begin  ��� ���������
	{
		cout << *i << endl;
	}
}

int  main() {
	setlocale(LC_ALL, "RU_ru");

	list <int> myList = {15,64,979,8989,56,4,5,2,6}; // �������� ������������� ���  �������� 
/*	myList.push_back(5); ///  ����������  �������� � ����� ������ 
	myList.push_front(151);//    ��������  �������  �  ������ ������ 
	myList.sort();//  ��������� ��  ����������� � �����������  
	PrintList(myList);
	myList.pop_back(); 
	myList.pop_front(); /// �������� ������� � ����������   �������� �����  
	cout << myList.size(); //  ����������  ����������  (������ )  ������ �   ������  

	//list <int> ::iterator it = myList.begin(); //  == �����������  ������  ������  auto it = myList.begin();
	
	/*for (auto i = myList.begin(); i !=  myList.end();  i++)
	{
		cout << *i << endl;
	}
	*/
	//myList.unique(myList); //  �������  ���������   �������  ����  �����������������  , �� ���������������� �� �������

	myList.reverse(); ///  �������������   ����   ����� ��  ����  
	//myList.clear(); //  ������� ���� 
	auto it = myList.begin();
	myList.insert(it, 111);  ///  ���������  "11 " // +=3 // �� �������������� 
	advance(it, 3);//   ����� ������� �� ������������� ������  ///  ������ �����  ��������,  ������  ������
	PrintList(myList); 
	myList.erase(it); //  �������  ������� �� ������ ��������  �������� 
	myList.remove(99); ////  ��������  ������������   ��������  �� ���������
	myList.assign(3,1);// ���-��  ���������    , �������� ��������  ����������� ���� / ��������� ���������
	list<int> myList2 = { 45,545,45,454,54,45 };
	PrintList(myList);
	cout << endl << endl;
	PrintList(myList2);
	myList.assign(myList2.begin(), myList2.end());// ��������� myList2 � myList /// ���������  �����  ������ !!
    PrintList(myList);
 }