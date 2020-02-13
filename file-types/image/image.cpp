#include <iostream>
#include "image.h"

using namespace std;
using namespace noble;

Image::Image(Camera camera, int size = 0) {
  // If there is no size then use native resolution
  if (size ==  0)
  {
    size = camera.resolution();
  }

  // Create Image Buffer 
  this->buffer[size];
  for (size_t i = 0; i < size; i++)
  {
    this->buffer[i] = generateHex();
  }

  this->name = camera.getLatestImageName();
  this->name.back() = stoi( this->name.back() ) + 1;

}

