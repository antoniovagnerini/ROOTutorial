#include <vector>
#include <iostream>

void basic_program(){ //If run from ROOT with .x match main function
                      //name to the file name

 //Declare some variables and fill them
  float x = 5;
  float y = x+6;
  std::vector <float> myvector;
  myvector.push_back(x);
  myvector.push_back(y);

  //Run basic loop and print
  for (uint i =0; i < myvector.size(); i++){
    std::cout<<myvector[i]<<std::endl;
  }

  return;
}
