#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"
#include "cinder/gl/Texture.h"
#include "cinder/ImageIo.h"
#include "cinder/Surface.h"
#include "cinder\rect.h"
#include "rectangle.h"

using namespace std;
using namespace ci;
using namespace ci::app;


rectangle::rectangle(){
	red = 0;
    green = 0;
	blue = 0;
};





void rectangle::draw(){

	//red then blue then green
	gl::color(Color8u(0,60,195));
	gl::drawSolidRect(Rectf(300,500, 300 , 400 ), false);
	}
