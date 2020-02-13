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
    public:
      Image(Camera, int);
      int pixelCount();
      int name();
      time_t createdAt();
  };
}


