#pragma once

#include "../vc10/Node.h"


class List
{
public:
	List(void);
	void add(Node*toAdd);
	void remove(Node*toRemov);
	void insertAfter(Node*where);//include the  data of the next node
	void insertBefore(Node*where);//include the data to put in the next node here

private:
	Node*sentinal_;
	int num_items;
	int index;
	
};

