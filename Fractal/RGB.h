#pragma once
#ifndef RGB_H_
#define RGB_H_


struct RGB
{

	RGB(double r, double b, double g);


	double r;
	double g;
	double b;
};

RGB operator-(const RGB& first, const RGB& second);


#endif // !RGB_H_

