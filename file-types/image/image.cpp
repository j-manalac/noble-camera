#include <iostream>
#include "image.h"

using namespace std;
using namespace noble;

/**
 * Create a new Image
 * 
 * Note: Images can only be created by a camera.
 */ 
Image::Image(Camera camera, int size = 0) {
  // If there is no size then use native resolution
  if (size ==  0)
  {
    size = camera.resolution();
  }

  // Set number of pixels to size
  this->pixels = size;

  // Create Image Buffer 
  this->buffer[size];
  for (size_t i = 0; i < size; i++)
  {
    this->buffer[i] = generateHex();
  }

  // Create new file using the last avaliable file name from the camera
  this->name = camera.getLatestImageName();
  this->name.back() = (int)this->name.back() + 1;
}

int Image::pixelCount() {
  return this->pixels;
}

string Image::getName() {
  return this->name;
}
