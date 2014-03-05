#include "L1Trigger/UCT2015/interface/jetcorrections.h"


double jetcorr(double ptraw, int ieta, unsigned int pu) {
	double calib[]={
		1.27997, 0, 10.0382,
		1.45051, 0, 6.49017,
		1.52978, 0, 7.53412,
		1.61689, 0, 10.1012,
		1.29395, 0, 18.7129,
		1.22278, 0, 23.6606,
		1.25293, 0, 24.4677,
		1.22861, 0, 25.2746,
		1.21071, 0, 23.4553,
		1.16955, 0, 22.6286,
		1.1838, 0, 20.9017,
		1.18977, 0, 21.1769,
		1.21333, 0, 22.1565,
		1.23575, 0, 23.0727,
		1.27147, 0, 24.363,
		1.22103, 0, 24.9567,
		1.22637, 0, 24.2517,
		1.30175, 0, 18.7771,
		1.61674, 0, 10.2858,
		1.53865, 0, 7.30213,
		1.42139, 0, 6.72587,
		1.26112, 0, 10.0601,
	};

	//==============================================

	double alpha = calib[3*ieta + 0];
	double gamma = calib[3*ieta + 2];

	double pt =  alpha * ptraw + gamma;

	return pt;
}

double jetcorrUIC(double ptraw, int ieta, unsigned int pu) {
	double calib[]={
		1.27997, 0, 10.0382,
		1.45051, 0, 6.49017,
		1.52978, 0, 7.53412,
		1.61689, 0, 10.1012,
		1.29395, 0, 18.7129,
		1.22278, 0, 23.6606,
		1.25293, 0, 24.4677,
		1.22861, 0, 25.2746,
		1.21071, 0, 23.4553,
		1.16955, 0, 22.6286,
		1.1838, 0, 20.9017,
		1.18977, 0, 21.1769,
		1.21333, 0, 22.1565,
		1.23575, 0, 23.0727,
		1.27147, 0, 24.363,
		1.22103, 0, 24.9567,
		1.22637, 0, 24.2517,
		1.30175, 0, 18.7771,
		1.61674, 0, 10.2858,
		1.53865, 0, 7.30213,
		1.42139, 0, 6.72587,
		1.26112, 0, 10.0601,
	};
	//==============================================


	double alpha = calib[3*ieta + 0];
	double gamma = calib[3*ieta + 2];

	double pt =  alpha * ptraw + gamma;

	return pt;

}

