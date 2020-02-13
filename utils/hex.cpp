#include<iostream>
#include<stdlib.h>
using namespace std;

namespace noble {
  /**
   * Generate a random hexadecimal
   */ 
  char* generateHex()
  {
    char hex[7];

    //hexadecimal characters
    char hex_characters[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    
    int i;
    for(i=0;i < 8;i++)
    {
      hex[i]=hex_characters[rand()%16];
    }
    hex[7]=0;

    return hex;
  }
}