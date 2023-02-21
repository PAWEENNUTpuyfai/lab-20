#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1,Rect R2){
    double x1=R1.x+R1.w, x2=R2.x+R2.w;
    double y1=R1.y-R1.h, y2=R2.y-R2.h;
    double max1,max2,min1,min2;
    if(x1<R2.x||y1>R2.y||x2<R1.x||y2>R1.y){
        return 0;
    }
    if(R1.x>R2.x){
        max1=R1.x;
    }else max1=R2.x;
    if(x1>x2){
        min1=x2;
    }else min1=x1;
    if(R1.y<R2.y){
        min2=R1.y;
    }else min2=R2.y;
    if(y1<y2){
        max2=y2;
    }else max2=y1;
    double wide = min1-max1,high = min2-max2;
    return abs(wide*high);
    

}