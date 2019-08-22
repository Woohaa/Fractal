#include <iostream>
#include "FractalCreator.h"
#include "RGB.h"
#include "Zoom.h"

using namespace std;

int main()
{


	FractalCreator fractalCreator(800, 600);

	fractalCreator.addRange(0.0, RGB(0, 0, 255));
	fractalCreator.addRange(0.05, RGB(71, 99, 255));
	fractalCreator.addRange(0.08, RGB(0, 125, 255));
	fractalCreator.addRange(1.0, RGB(255, 255, 255));

	fractalCreator.addZoom(Zoom(295, 202, 0.1));
	fractalCreator.run("test.bmp");


	cout << "Finished." << endl;





#pragma region Validation the histogram 

	//cout << endl;

	//int count = 0;
	//for (int i = 0; i < Mandelbrot::MAX_ITERATIONS; i++)
	//{
	//	cout << histogram[i] << " " << flush;
	//	count += histogram[i];
	//}

	//cout << count << "; " << WIDTH * HEIGHT << endl;

#pragma endregion


	return 0;
}