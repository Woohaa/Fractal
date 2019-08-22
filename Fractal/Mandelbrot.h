#pragma once
#ifndef MANDELBROT_H_
#define MANDELBROT_H_

class Mandelbrot
{
public:
	Mandelbrot();
	virtual~Mandelbrot();

	static int getIterations(double x, double y);

	static const int MAX_ITERATIONS = 1000;

private:

	
};



#endif // !MANDELBROT_H_


