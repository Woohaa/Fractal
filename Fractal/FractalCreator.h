#pragma once
#ifndef FRACTALCREATOR_H_
#define FRACTALCREATOR_H_

#include <string>
#include <cstdint>
#include <memory>
#include <math.h>
#include <vector>
#include <cassert>
#include "Zoom.h"
#include "Mandelbrot.h"
#include "Bitmap.h"
#include "ZoomList.h"
#include "RGB.h"
#

using namespace std;

class FractalCreator
{
public:

	FractalCreator(int width, int height);
	virtual ~FractalCreator();
	void run(string name);
	void addZoom(const Zoom& zoom);
	void addRange(double rangeEnd, const RGB& rgb);


private:
	void calculateIteration();
	void drawFractal();
	void writeBitmap(string name);
	void calculateTotalIterations();
	void calculateRangeTotals();
	int getRange(int iterations) const;

	vector<double> mRanges;
	vector<RGB> mColors;
	vector<int> mRangeTotals;

	bool mBGotFirstRange{ false };
	int mWidth;
	int mHeight;
	int mTotal{ 0 };
	unique_ptr<int[]> mHistogram;
	unique_ptr<int[]> mFractal;
	Bitmap mBitmap;
	ZoomList mZoomList;



};

#endif // !define FRACTALCREATOR_H_
