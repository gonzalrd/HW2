#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"
#include "cinder/gl/Texture.h"
#include "cinder/ImageIo.h"
#include "cinder/Surface.h"
#include "cinder\rect.h"
#include "rectangle.h"

class Node
{
public:
	Node(void);

	Node*next_;

	Node*prev_;

	rectangle*data_;

	~Node(void);
};
