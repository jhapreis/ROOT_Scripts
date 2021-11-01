#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
#include <fstream>

#include <TStopwatch.h>
#include <TFile.h>
#include <TTree.h>
#include <TGraph.h>
#include <TF1.h>
#include <TRandom.h>

using namespace std;



void curve_fit(){

    TStopwatch time_elapsed;


    TGraph* g = new TGraph();

    double x, y;

    // Generate Data points
    for(int i=0; i<10; i++){
        x = 0.5*i;
        y = 4*x*x + exp(-x/3) + gRandom->Gaus(0,1);
        g->SetPoint(i, x, y);
    }

    // Define Fit Function
    TF1* f = new TF1("f", "[0]*x^2 + exp(-x*[1])", 0, 5); // y = ax + b
    f->SetParameters(1,1); // initial guess
    g->Fit(f);

    // Plot
    g->SetMarkerStyle(22);
    g->Draw("AP");


    time_elapsed.Print();
}
