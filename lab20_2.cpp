#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *r1,Rect *r2){
    double x1=r1->x+r1->w, x2=r2->x+r2->w;
    double y1=r1->y-r1->h, y2=r2->y-r2->h;
    double max1,max2,min1,min2;
    if(x1<r2->x||y1>r2->y||x2<r1->x||y2>r1->y){
        return 0;
    }
    if(r1->x>r2->x){
        max1=r1->x;
    }else max1=r2->x;
    if(x1>x2){
        min1=x2;
    }else min1=x1;
    if(r1->y<r2->y){
        min2=r1->y;
    }else min2=r2->y;
    if(y1<y2){
        max2=y2;
    }else max2=y1;
    double wide = min1-max1,high = min2-max2;
    return abs(wide*high);
    

}