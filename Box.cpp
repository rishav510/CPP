#include <iostream>
using namespace std;
class Box
{
	int length;
	int breadth;
	int height;
	float weight;
	public: float getDensity()
	{
		return weight/float(length* breadth * height);
	}
	public:  Box(int l, int b, int h, float w)
	{
		this->length = l;
		this->breadth = b;
		this->height = h;
		this->weight = w;
	}

};


int main()
{
	float b1_density;
	
    Box b1 (1,2,4,5.7);
	b1_density = b1.getDensity();
	cout << b1_density;
	return 0;


}