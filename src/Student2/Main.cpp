#include "Student2.h"
#include "View2.h"
#include "StudentCtr.h"
#include "DAO.h"
#include <iostream>
#include <list>
#include <Windows.h>
#include <ctime>
#include <thread>

using namespace std;

int main() {
	string path = "C:/Users/hongc/Documents/Visual Studio 2015/Projects/Student/Student2/output.txt";
	View2 v;
	StudentCtr sc;

	int choice;	
	while (1) {
		choice = v.showMenu();
		switch (choice)
		{
		case 1: {//show all
			system("cls");
			sc.showAll();
			break;
		}
		case 2: {//add
			system("cls"); 		
			sc.add(path);
			break;
		}
		case 3: {//edit
			system("cls");
			sc.edit();
			break;
		}
		case 4: {//delete
			system("cls");
			sc.del();
			break;
		}
		case 5: {//search
			system("cls");		
			switch (v.showSearch())
			{
			case 1: {//search id
				system("cls");
				sc.searchID();
				break;
			}
			case 2: {//search name
				system("cls");
				sc.searchName();
				break;
			}
			case 3: {//search sum
				system("cls");
				sc.searchSum();
				break;
			}
			case 4: {//search math
				system("cls");
				sc.searchMath();
				break;
			}
			case 5: {//search phys
				system("cls");
				sc.searchPhys();
				break;
			}
			case 6: {//search chem
				system("cls");
				sc.searchChem();
				break;
			}
			default:
				break;
			}
			break;
		}
		case 6: {//thong ke
			system("cls");
			sc.thongke();
			break;
		}
		default:
			break;
		}
		system("pause");
	}
}