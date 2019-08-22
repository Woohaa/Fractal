#pragma once
#ifndef BITMAP_H_
#define BITMAP_H_

#include <string>
#include <cstdint>
#include <memory>

using namespace std;

class Bitmap {
public:

	Bitmap(int width, int height);
	virtual ~Bitmap();

	bool write(string filename);
	void setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue);

private:
	int mWidth{0};
	int mHeight{ 0 };
	unique_ptr<uint8_t[]> mPtrPixels{nullptr};
};




#endif // !BITMAP_H_
