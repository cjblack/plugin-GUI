#ifndef GENERIC_AXES_H_
#define GENERIC_AXES_H_


#if defined(__linux__)
	#include <GL/glut.h>
#else
	#include <GLUT/glut.h>
#endif
#include <stdlib.h>

#include "../SpikeObject.h"

#include "BaseUIElement.h"
#include "PlotUtils.h"

 	
class GenericAxes: public BaseUIElement{

protected:
	double xlims[2];
	double ylims[2];
	SpikeObject s;

	bool gotFirstSpike;
	
	int type;
	virtual void plot(){}

	
public:
	GenericAxes();
	GenericAxes(int x, int y, double w, double h, int t);

	void updateSpikeData(SpikeObject s);

	virtual void redraw(){}
	
	void setXLims(double xmin, double xmax);
	void getXLims(double *xmin, double *xmax);
	void setYLims(double ymin, double ymax);
	void getYLims(double *ymin, double *ymax);

	void setType(int type);
	int getType();
    
	
	void setPosition(int,int,double,double);
   	
};



#endif
