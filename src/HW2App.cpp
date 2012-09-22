#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"
#include "cinder/gl/Texture.h"
#include "cinder/ImageIo.h"
#include "cinder/Surface.h"
#include "cinder\rect.h"
#include "../vc10/rectangle.h"


using namespace ci;
using namespace ci::app;
using namespace std;
//using namespace 

class HW2App : public AppBasic {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void prepareSettings(Settings* settings);
	void draw();


private:

//Width and height of the screen
	static const int kAppWidth=800;
	static const int kAppHeight=600;
	static const int kTextureSize=1024;

	//int frame_number_;
	Surface* mySurface_;
	rectangle myRect_;

	int color_changer_;
	 int param_;


	Color8u c;


};

void HW2App::prepareSettings(Settings* settings){
	(*settings).setWindowSize(kAppWidth,kAppHeight);
	(*settings).setResizable(false);
}

void HW2App::setup()
{


   // frame_number_=0;
	mySurface_ = new Surface(kTextureSize,kTextureSize,false);
	
	param_ = 0;
 	myRect_ =  rectangle();

	
}

void HW2App::mouseDown( MouseEvent event )
{

	
	
}

void HW2App::update()
{

	 c = Color8u(122,100,10);

	 //gets the pixels for the surface

    uint8_t* pixels = (*mySurface_).getData();
	int x1 = 200;
	int y1= 400;

	int rect_width = 300;
	int rect_height = 400;

	
	 //Only save the first frame of drawing as output
	//if(frame_number_ == 0){
		//writeImage("raquelImg.png",*mySurface_);
		//We do this here, instead of setup, because we don't want to count the writeImage time in our estimate
		//app_start_time_ = boost::posix_time::microsec_clock::local_time();
	//}

	//keeps track of how many frames we have shown.
	//frame_number_++;


	
	
}

void HW2App::draw()
{
	

	gl::color(Color8u(50,20,10));
	gl::drawSolidRect(Rectf(300,300, 200 , 200 ), false);

}

CINDER_APP_BASIC( HW2App, RendererGl )
