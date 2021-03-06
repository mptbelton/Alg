#include <iostream>
#include <vector>
#include <random>
#include <ctime>
#include <iterator>
#include <algorithm>

#include "InitNums.h"

#include "configure.h"

#ifdef INSERT_SORT
# include "InsertionSort.h"
#endif

#ifdef FIND_MAX_SUBARRAY
# include "FindMaxSubArray.h"
#endif 

#ifdef MATRIX_MULTIPLY
# include "test_matrix.h"
#endif

#ifdef RANDOMIZE_ARRAY
# include "randomize_array.h"
#endif

#ifdef TEST_HEAP
# include "testheap.h"
#endif

#ifdef TEST_QUICK_SORT
# include "quick_sort.h"
#endif

#ifdef LINEAR_TIME_SORT
# include "linearTimeSort.h"
#endif

#ifdef TEST_SELECT_ALG
# include "testSelectAlg.h" 
#endif

#ifdef TEST_BASIC_DS
# include "basicDataSt.h"
#endif

#ifdef TEST_BST
# include "binarySearchTree.h"
#endif

#ifdef TEST_UNION
# include "TestUnion.h"
#endif
using namespace std;

int main(int argc, char *argv[]) {
	std::cout << "HELLO TEST " << std::endl;	
	
#ifdef INSERT_SORT
	test();
	Test_InsertSort();
	Test_InsertSort_r();
#endif

#ifdef FIND_MAX_SUBARRAY
	Test_FindMaxSubArray();
#endif

#ifdef MATRIX_MULTIPLY	
	Test_Matrix();
#endif

#ifdef RANDOMIZE_ARRAY
	Test_Randomize_Array();
#endif

#ifdef TEST_HEAP
	TestHeapSort();
	std::cout << endl;
	TestPriorityQueue();
#endif

#ifdef TEST_QUICK_SORT
	testQuickSort();
	testRandomizedQuickSort();
#endif

#ifdef LINEAR_TIME_SORT
	TestCountSort();
	TestRadixSort();
	TestBucketSort();
#endif

#ifdef TEST_SELECT_ALG
	testMinMax();
	RandomizedSelect_KthElement();
	Select_KthElement();
#endif

#ifdef TEST_BASIC_DS
	testMyStack();
	testMyQueue();
	testMyList();
#endif

#ifdef TEST_BST
	TestBST();
#endif

#ifdef TEST_UNION
	TestUnion();
#endif

	return 0;
}