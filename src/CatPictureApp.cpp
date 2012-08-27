#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class CatPictureApp : public AppBasic {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();

  private:
	float color1;
	float color2;
	float color3;
};

void CatPictureApp::setup()
{
	color1 = 0.0f;
	color2 = 0.5f;
	color3 = 1.0f;
}

void CatPictureApp::mouseDown( MouseEvent event )
{
}

void CatPictureApp::update()
{
	color1 = rand() / double(RAND_MAX);
	if (color1 > 1.0) {
		color1 = 0.0;
	}
	color2 = rand() / double(RAND_MAX);
	if (color2 > 1.0) {
		color2 = 0.0;
	}
	color3 = rand() / double(RAND_MAX);
	if (color3 > 1.0) {
		color3 = 0.0;
	}
}

void CatPictureApp::draw()
{
	// clear out the window with black
	gl::clear( Color( color1, color2, color3 ) ); 
}

CINDER_APP_BASIC( CatPictureApp, RendererGl )
