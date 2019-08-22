#include "ZoomList.h"


ZoomList::ZoomList(int width, int height): mWidth(width), mHeight(height)
{
}

void ZoomList::add(const Zoom& zoom) {
	zooms.push_back(zoom);

	mXCenter += (zoom.x - mWidth / 2) * mScale;
	mYCenter += -(zoom.y - mHeight / 2) * mScale;

	mScale *= zoom.scale;
}

pair<double, double> ZoomList::doZoom(int x, int y) {

	double xFractal = (x - mWidth / 2) * mScale + mXCenter;
	double yFractal = (y -  mHeight/2) * mScale + mYCenter;

	return pair<double, double>(xFractal,yFractal);

}