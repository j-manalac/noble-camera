/******************************
 * 
 * Namespace for all Non-specific class definitions 
 */

#include <iostream> 
#include <ctime>
#include "../../namespace.h"
#include "../../camera/camera.h"

using namespace std;
namespace noble {
  class Image {
    char* buffer[];
    int pixels;
    string name;

    public:
      Image(Camera, int);
      int pixelCount();
      string getName();
      int getBuffer();
      time_t createdAt();
  };
}


