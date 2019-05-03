
#include <iostream>

using std::cout;
using std::endl;



// 0 1 2
// 8 5 3

// a = 0, b = 1

// a' = 0, b' =1
// int* tmp = a, tmp = 0
// a' = b', a' = 1
// b' = tmp, b' = 0


void swap(int* a, int* b)
{
	/*int temp = *a;
	*a = *b;
	*b = temp;*/

	int* temp = a;
	a = b;
	b = temp;
}


void swapTwo(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;

}

int main(int argc, char** argv)
{
	//   std::cout << "Hello World!\n"; 
	   //std::cout << argc << std::endl;
	   //std::cout << argv[0] << std::endl;
	   //std::cout << *argv << std::endl;


	//if (argc > 1)
	//{
	//	for (int i = 0; i < argc; i++)
	//	{
	//		//std::cout << *argv[i] << std::endl;

	//		int start = 0;

	//		while (argv[i][start] != '\0')
	//		{
	//			cout << argv[i][start];

	//			start++;

	//		}
	//		cout << endl;

	//	}
	//}



	// array name is a pointer pointing to the first item


	//int x = 5;

	//cout << x << endl;

	//cout << &x << endl;	// print out the address of x

	//int* addressOfX = &x;	// int pointer stores the address of int x

	//cout << addressOfX << endl;
	//cout << *addressOfX << endl;	// value of pointer
	// pointers only store memory address


	// create an array of 10 numbers
	// set some value to the numbers, print out the value and its memory address

 //const int size = 10;
 //int numbers[size];
 //for (int i = 0; i < size; i++)
 //{
 //	numbers[i] = i * i;
 //	cout << numbers[i] << ":" << &numbers[i] << ":" <<  *(numbers + i) << endl;
 //}


 //struct Shape
 //{
 //	int x;
 //	int y;
 //	int width;
 //	int height;
 //};


 //Shape t;
 //t.x = 5;
 //t.y = 6;
 //t.width = 10;
 //t.height = 20;
 //

 //Shape* j = &t;

 //j->height;

 //const char* name = "Karan";


 //cout << name << endl;

 //int start = 0;

 //while (name[start] != '\0')
 //{
 //	cout << name[start] << endl;

 //	start++;

 //}


	//int x = 5;
	//int y = 6;

	//cout << x << endl;
	//cout << y << endl;

	//swap(&x, &y);
	////swapTwo(x, y);

	//cout << x << endl;
	//cout << y << endl;


	int* x = new int(5);

	cout << *x << endl;


	delete x;

	x = nullptr;

	if (x == nullptr)
	{
		// do stuff
	}


	int* y = new int[50000000];

	delete[] y;


	return 0;
}
