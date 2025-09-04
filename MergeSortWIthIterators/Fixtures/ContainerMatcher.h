#pragma once
#include "CustomAsserts.h"
#include <algorithm>

/*       This file includes only a single function to test your code      */
/* Do not change anything in it (I will test your code separately anyway) */
namespace test
{
  
template <typename ItType1, typename ItType2>
void matchContainers(ItType1 first1, ItType1 last1, ItType2 first2, ItType2 last2)
{
  assertEqual(std::distance(first1, last1), std::distance(first2, last2), __LINE__, __FILE__);

  for(; first1 != last1; ++first1, ++first2)
    assertEqual(*first1, *first2, __LINE__, __FILE__);
}
  
} // namespace test