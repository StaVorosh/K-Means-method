#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <omp.h>

struct Points{
	double x;
	double y;
	int cluster;
};

struct Indexes
{
	int Index;
	struct Indexes *Next_Point;
};

struct Cluster
{
	double x;
	double y;
	struct Indexes* root;
};


struct Points* Init(int *, int *, int *);
double Dist(double, double, double, double);
struct Cluster* Calculate(struct Points*, int, int, int*, int);
struct Cluster AddIndex(struct Cluster, int);
struct Indexes* CreatePoint(int);
struct Indexes* GoNext(struct Indexes*);
double GetX(struct Points *, struct Cluster, int);
double GetY(struct Points *, struct Cluster, int);
void Output_Data(struct Cluster*, struct Points*, int);
void Clear_Points(struct Cluster*, int);
void Init_Clusters(struct Cluster*, int);
int GetClusterNumOfPoints(struct Cluster);