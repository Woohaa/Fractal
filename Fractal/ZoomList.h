#pragma once
#ifndef ZOOMLIST_H_
#define ZOOMLIST_H_

#include <vector>
#include <utility>
#include "Zoom.h"

using namespace std;

class ZoomList
{
public:
 	ZoomList(int width, int height);
	void add(const Zoom& zoom);
	pair<double, double> doZoom(int x, int y);

private:
	double mXCenter{ 0 };
	double mYCenter{ 0 };
	double mScale{ 1.0 };

	int mWidth{ 0 };
	int mHeight{ 0 };

	vector<Zoom> zooms;
};


#endif // !ZOOMLIST_H_

