#include "circle.hpp"


const float PI = 3.14159265358979323846;

Circle::Circle():
	center_ {400.0f, 400.0f},
	radius_ {1.0f},
	color_ {0.128f, 0.128f, 0.128f},
	dicke_ {1.0f} {}



Circle::Circle(Vec2 v, float r, RGB c,float d):
	center_ {v},
	radius_ {r},
	color_ {c},
	dicke_ {d} {}

float Circle::circumference() const{
	float e;
	e = 2 * PI * radius_;
	return e;
	}

bool Circle::is_inside(Vec2 v)const{
	Vec2 v1 = {radius_,0.0f};
	Vec2 v2 = {center_.x, center_.y};
	Vec2 b2;
	bool k = false;

	for(float i = 0;i <= 2;i += 0.001)
	{
		b2 = (make_rotation_mat2(PI * i) * v1) + v2;
		if(v.x > b2.x){
			if(v.y > b2.y){
				k = true;
			}
		}
		if(k){
			if(v.x > center_.x){
				if(v.x > b2.x){
					k = false;
				}
			}
		}
		if(k){
			if(v.y > center_.y){
				if(v.y > b2.y){
					k = false;
				}
			}
		}	
	}
	if(! k){
		for( float i = 0;i <= 2;i += 0.001)
		{
		    b2 = (make_rotation_mat2(PI * i) * v1) + v2;
			if(v.x < b2.x){
				if(v.y > b2.y){
					k = true;
				}
			}
			if(k){
				if(v.x < center_.x){
					k = false;
				}
			}
			if(k){
				if(v.y > center_.y){
					k = false;
				}
			}	
		}
	}
	if(! k){
		for( float i = 0;i <= 2;i += 0.001)
		{
		    b2 = (make_rotation_mat2(PI * i) * v1) + v2;
			if(v.x < b2.x){
				if(v.y < b2.y){
					k = true;
				}
			}
			if(k){
				if(v.x < center_.x){
					k = false;
				}
			}
			if(k){
				if(v.y < center_.y){
						k = false;
				}
			}	
		}
	}
	if(! k){
		for(float i = 0;i <= 2;i += 0.001)
		{
		    b2 = (make_rotation_mat2(PI * i) * v1) + v2;
			if(v.x > b2.x){
				if(v.y < b2.y){
					k = true;
				}
			}
			if(k){
				if(v.x > center_.x){
					k = false;
				}
			}
			if(k){
				if(v.y < center_.y){
					k = false;
				}
			}	
		}
	}
	return k;
}

