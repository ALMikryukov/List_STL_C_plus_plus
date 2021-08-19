#include<iostream>
#include<list>
#include<vector>
using namespace std; 

/*  STL библиотека стандртных  шаблонов лист  */

//лист  не  поддерживает  индексирование через [] 

template <typename T>
void PrintList(const list <T>& lst) {

	for (auto i = lst.cbegin(); i != lst.end(); ++i)///cbegin  метод begin  для константы
	{
		cout << *i << endl;
	}
}

int  main() {
	setlocale(LC_ALL, "RU_ru");

	list <int> myList = {15,64,979,8989,56,4,5,2,6}; // возможна инициализация при  создании 
/*	myList.push_back(5); ///  добавление  элментов в конец списка 
	myList.push_front(151);//    добавить  элемент  в  начало списка 
	myList.sort();//  сортирует от  наименьшего к наибольшего  
	PrintList(myList);
	myList.pop_back(); 
	myList.pop_front(); /// удаление первого и последнего   элемента листа  
	cout << myList.size(); //  возвращает  количество  (размер )  метода в   списке  

	//list <int> ::iterator it = myList.begin(); //  == аналогичная  запись  строки  auto it = myList.begin();
	
	/*for (auto i = myList.begin(); i !=  myList.end();  i++)
	{
		cout << *i << endl;
	}
	*/
	//myList.unique(myList); //  удаляет  дубликаты   которые  идут  послевадовательно  , не последовательные не удаляет

	myList.reverse(); ///  разворачивает   лист   задом не  перёд  
	//myList.clear(); //  очищает лист 
	auto it = myList.begin();
	myList.insert(it, 111);  ///  дабавляет  "11 " // +=3 // не поддерживается 
	advance(it, 3);//   метод сдигаеь по произвольному индксу  ///  первый парам  итератор,  второй  индекс
	PrintList(myList); 
	myList.erase(it); //  удаляет  элемент на которы указвает  итератор 
	myList.remove(99); ////  удаляеет  конкректоное   значение  из коллекции
	myList.assign(3,1);// кол-во  элементов    , значение которыми  заполняется лист / остальные удаляться
	list<int> myList2 = { 45,545,45,454,54,45 };
	PrintList(myList);
	cout << endl << endl;
	PrintList(myList2);
	myList.assign(myList2.begin(), myList2.end());// скопирует myList2 в myList /// последний  будет  удален !!
    PrintList(myList);
 }