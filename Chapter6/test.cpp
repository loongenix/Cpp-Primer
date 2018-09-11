#include "chapter6.h"
#include <vector>
int main(int argc, char const *argv[]) {

  // for(size_t i = 0; i < 20; i++)
  // {
  //     std::cout<<getInt()<<std::endl;
  // }

  int arr[]={1,3,5,7,9};

  int *a=arr;
  for(size_t i = 0; i < 5; i++)
  {
      std::cout<<*(a++)<<std::endl;
  }


  return 0;
}
