#include <iostream>
#include <deque>
#include <vector>
#include <list>
#include <forward_list>
#include <algorithm>
#include "Fixtures/ContainerMatcher.h"

/* Write a function template named mergeSort that receives 2 iterators as arguments */

/*******************************************************************************************
*                                                                                          *
*   Remove this comment and write your function here (you can write multiple functions)    *
*                                                                                          *
*******************************************************************************************/


/* This function exists only to test your code, do not chane anything in it (I will test it separately anyway) */
template <typename ContainerType>
void testMergeSort()
{
  static constexpr auto&& c_dataset       = {9, 10, 5, 3, 20, -7, 2, 19, 64, 21, 0, 8, 7};
  static constexpr auto&& c_sortedDataset = {-7, 0, 2, 3, 5, 7, 8, 9, 10, 19, 20, 21, 64};
  static constexpr auto&& c_emptyDataset  = std::initializer_list<int>{};
  
  ContainerType container{c_dataset};
  mergeSort(container.begin(), container.end());
  test::matchContainers(container.begin(), container.end(), c_sortedDataset.begin(), c_sortedDataset.end());

  ContainerType emptyContainer;
  mergeSort(emptyContainer.begin(), emptyContainer.end());
  test::matchContainers(emptyContainer.begin(), emptyContainer.end(), c_emptyDataset.begin(), c_emptyDataset.end());
}

int main() 
{
  // testMergeSort<std::deque<int>>();
  // testMergeSort<std::vector<int>>();
  // testMergeSort<std::list<int>>();
  // testMergeSort<std::forward_list<int>>();

  std::cout << "ALL TESTS PASSED!\n"; 
}