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
  class Video {
    public:
      Video(Camera, int);
      int duration();
      int name();
      int size();
      int resolution();
      time_t createdAt();
  };
}


