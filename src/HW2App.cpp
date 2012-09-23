#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"
#include "cinder/gl/Texture.h"
#include "cinder/ImageIo.h"
#include "cinder/Surface.h"
#include "cinder/rect.h"
#include "../vc10/rectangle.h"
#include "../vc10/List.h"
#include "../vc10/Node.h"


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

//list and rectangles
	List* lst;
	rectangle* oneRect_;


};

void HW2App::prepareSettings(Settings* settings){
	(*settings).setWindowSize(kAppWidth,kAppHeight);
	(*settings).setResizable(false);
}

void HW2App::setup()
{
	//creates a rectangle
	Color8u c = Color8u(0, 60, 120);
 	oneRect_ = new rectangle(c,200,300,400,500);

	rectangle* twoRect_ = new rectangle(c,100,350,350,450);

	//create a nodes
	Node* one = new Node();
	Node* two = new Node();

	//adds rectangles two nodes
	one->data_= oneRect_;
	two->data_= twoRect_;

	//creates a list
	lst =  new List();

	//adds node

	lst->add(one);
	lst->add(two);
}

void HW2App::mouseDown( MouseEvent event )
{

	
	
}

void HW2App::update()
{
	
	
}

void HW2App::draw()
{

	//goes through list and draws rectangle.

	Node*nd = lst->sentinal_->next_;
	
	while(nd!=lst->sentinal_){
		nd->data_->draw();

		nd= nd->next_;
	}



}

CINDER_APP_BASIC( HW2App, RendererGl )
