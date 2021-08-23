
#include <iostream>
#include <fstream>
#include <ctime>
#include <random>

#include "avl.h"

using namespace myAVLTree;
using namespace std;

int main(int argc, char** argv)
{
	AVLTree<int, std::less<int>> intLessAVLTree;
	//srand(time(0));
	srand(555);
	vector<int> numVec;
	intLessAVLTree.clear();
	for (int i = 0; i < 11; ++i)
	{
		numVec.push_back(rand() % 100 - 50);
		//intLessAVLTree.print();
		//cout << "insert "<< numVec.at(i)<<endl << endl;
		intLessAVLTree.insert(numVec.at(i));
		cout << "i " << i  <<": " << numVec[i] << "\n";
	}
	
	intLessAVLTree.printLevels();
	cout << endl << endl;


	cout << "Search:\n";
	cout << numVec[10]<<" found? " << intLessAVLTree.search_it(numVec[10]) << endl;
	cout << "102 found? " << intLessAVLTree.search_it(102) << endl;
	cout << "7 found? " << intLessAVLTree.search_it(1) << endl;
	//------------------Getting full height of AVL (since root)---------------
	std::cout << "Iteractive height: " << intLessAVLTree.getHeightIterative() << "\n";
	std::cout << "Recursive height: " << intLessAVLTree.getHeightRecursive() << "\n";

	intLessAVLTree.remove(numVec.at(5));
	intLessAVLTree.printLevels();



	//cout << "test deleting "<<numVec[10]<<"  and print:\n";
	//intLessAVLTree.remove(numVec[10]);
	//intLessAVLTree.printLevels();
	//cout << "test deleting " << numVec[0] << "  and print:\n";
	//intLessAVLTree.remove(numVec[0]);
	//intLessAVLTree.printLevels();
	//cout << "test deleting 101(not in tree)  and print:\n";
	//intLessAVLTree.remove(101);


	/*
	* Part 2:
For testing you are going to use testData.txt and examineData.txt, both attached to this assignment.
testData.txt provides a very large number of numbers to be used to build an AVL tree. 
1- Once it is built, you should print the height of the avl tree
2- Use  printLevels to print the first 4 levels of the tree nodes.
3- For next step, you are going to remove nodes from the tree in batches of 50 from the list in examineData.txt. After removing
each batch, save the height and the number of nodes in the tree in a height map as declared like 
this:  std::map<int, int> heightMap;
This is going to map from tree size(meaning number of items in the tree) to its height, for example heightMap[300] is the height of the tree with 300 nodes.
4-Once the process is finished, you must print the data in the map in nice column style: Count column, and Height Column.
Bellow is the starting code for loading testData and build the tree.​
	*/

	//cout << "Part2: building a large data count AVL tree and test its log performance.\n";
	//AVLTree<int, std::less<int>> testAVLTree;

	//ifstream input{ "testData.txt" };
	//int num{};
	//while (input >> num)
	//{
	//	testAVLTree.insert(num);
	//}
	//testAVLTree.printLevels();
	//// here goes your steps 2 to 4 above
	//testAVLTree.printLevels(4);
	//testAVLTree.clear();

	return 0;

}