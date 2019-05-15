#ifndef VIRCLE_HPP
#define CIRCLE_HPP
#include "vec2.hpp"
#include "color.hpp"
#include "window.hpp"
#include "mat2.hpp"

class Circle{
	private:
	Vec2 center_;
	float radius_;
	float dicke_;
	RGB color_;
	public:
	Circle();
	Circle(Vec2 v, float r,RGB c, float d);
	float circumference() const;
	void draw(Window const& w)const;
	bool is_inside(Vec2 v);
	void uhr(Window const& w);

};

#endif
