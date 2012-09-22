#pragma once

#include "../vc10/Node.h"


class List
{
public:
	List(void);

	//needs to include add, remove , reverse, sentinal, and yeah
	//needs to have the number of items and index for where we are at

	void insertAfter(Node*where);//include the  data of the next node
	void insertBefore(Node*where);//include the data to put in the next node here

	~List(void);
};

