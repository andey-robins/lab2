#include "LinkedList.h"
#include <iostream>

using namespace std;

int main()
{
	List cows;
	cout << "cows list  :  " << cows << endl << endl;

	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cout << "cows list      :  " << cows << endl;
  cout << "cows list size :  " << cows.getSize() << endl;
  cout << "cows list sum  :  " << cows.sum() << endl << endl;

	cows.removeFirst();
	cout << "cows list  :  " << cows << "size: " << cows.getSize() << endl << endl;

	List horses(cows);
	cout << "cows list      :  " << cows << endl;
	cout << "horses list    :  " << horses << endl;
  cout << "horse list size:  " << horses.getSize() << endl;
  cout << "horse list sum :  " << horses.sum() << endl << endl;

	horses.removeFirst();
	horses.insertAsFirst(5.67);
  horses.insertAsLast(6.75);
	cows.insertAsFirst(6.78);
	cout << "cows list  :  " << cows << " size: " << cows.getSize() << endl;
	cout << "horses list:  " << horses << " size: " << horses.getSize() << endl << endl;

	List pigs;
	cout << "cows list  :  " << cows << "size: " << cows.getSize() << endl;
	cout << "horses list:  " << horses << "size: " << horses.getSize() << endl;
	cout << "pigs list  :  " << pigs << "size: " << pigs.getSize() << endl << endl;

	pigs = cows;
	cout << "cows list  :  " << cows << "size: " << cows.getSize() << endl;
	cout << "horses list:  " << horses << "size: " << horses.getSize() << endl;
	cout << "pigs list  :  " << pigs << "size: " << pigs.getSize() << endl << endl;

	pigs = horses;
	cout << "cows list  :  " << cows << "size: " << cows.getSize() << endl;
	cout << "horses list:  " << horses << "size: " << horses.getSize() << endl;
	cout << "pigs list  :  " << pigs << "size: " << pigs.getSize() << endl << endl;

	cout << "End of code" << endl;

	return 0;
}
