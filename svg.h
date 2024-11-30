#include<stdlib.h>
#include<stdbool.h>
#include<stdio.h>
#include<math.h>


typedef struct svg
{
    char* svg;
    int height;
    int width;
    bool finalized;
} svg;



svg* svg_create(int width,int height);
void svg_finalize(svg* psvg);
void svg_print(svg* psvg);
void svg_save(svg* psvg,char* filepath);
void svg_free(svg* psvg);
void svg_circle(svg* psvg,char* stroke,int strokeWidth,char* fill,int r,int cx,int cy);
void svg_line(svg* psvg,char* stroke,int strokeWidth,int x1,int y1,int x2,int y2);
void svg_rectangle(svg* psvg,int width,int height,int x,int y,char* fill,char* stroke,int strokeWidth,int radiusx,int radiusy);
void svg_fill(svg* psvg,char* fill);
void svg_text(svg* psvg,int x,int y,char* fontFamily,int fontSize,char* fill,char* stroke,char* text);
void svg_eclipse(svg* psvg,int cx,int cy,int rx,int ry,char* fill,char* stroke,int strokeWidth);


