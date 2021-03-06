/******************************
 * 
 * Namespace for all Non-specific class definitions 
 */

#include <iostream> 
#include "../namespace.h"

using namespace std;

namespace noble {
  enum CameraBrand { Canon, Nikon, Sony, Sigma };
  enum CameraType { FullFrame, CropSensor };

  class Camera {
    public:
      Camera(CameraBrand, CameraType, int);
      void displaySpecs() const;
      int resolution() const;
      int picturesTaken();
      int pictureCapacity();
      int storageUsed();
      int storageCapacity();
      string getLatestImageName();
  };
}


