#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"
#include "cinder/gl/Texture.h"
#include "cinder/Surface.h"
#include "cinder\rect.h"
#include "cinder/ImageIo.h"

using namespace std;
using namespace ci;
using namespace ci::app;

class rectangle
{
public:
		rectangle();
		rectangle(int red, int green, int blue);
		void draw();
private:
	//Defines the colors to put in the rectangle.
	int red;
	int blue;
	int green;
	
};