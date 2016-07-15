
#include "blob.h"

Blob::Blob(int x, int y, int id)
{
	this->_sum_x = x;
	this->_sum_y = y;
	this->_id = id;
	this->similar_to =-1;
	this->n_pix = 1;
}

Blob::Blob(Blob* blob)
{
	this->_sum_x = blob->sum_x();
	this->_sum_y = blob->sum_x();
	this->_id = blob->id();
	this->similar_to =-1;
	this->n_pix = blob->size();
}

void Blob::connect_to(int id_other)
{
/*	if(similar_to == -1 || id_other == similar_to)
	{
		similar_to = id_other;
		return true;
	}
	else
		return false;*/
	similar_to = id_other;

		
}

int Blob::is_connected_to(void){return similar_to;}


void Blob::add_pixel(int x, int y)
{
	_sum_x += x;
	_sum_y += y;
	n_pix++;
}

void Blob::assemble_Blob(Blob* blob)
{
	_sum_x += blob->sum_x();
	_sum_y += blob->sum_y();
	n_pix += blob->size();
}

float Blob::x(void){ return _sum_x/n_pix; }

float Blob::y(void){ return _sum_y/n_pix; }

float Blob::sum_x(void){ return _sum_x; }

float Blob::sum_y(void){ return _sum_y; }

int Blob::size(void){ return n_pix; }

int Blob::id(void){ return _id; }



