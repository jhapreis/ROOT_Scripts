#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// #include <fstream>
// #include <iostream>
// #include <string>
// #include <sstream>
// #include "Riostream.h"
// #include <time.h> // time_t, struct tm, difftime, time, mktime
// #include <cmath>
// #include <stdlib.h>
// #include <stdio.h>
// #include <algorithm>

// #include "TROOT.h"
// #include "TLatex.h"
// #include <TMinuit.h>
// #include <TStyle.h>
// #include <TFile.h>
// #include <TGraph.h>
// #include <TGraphErrors.h>
// #include <TMultiGraph.h>
// #include <TCanvas.h>
// #include <TPaveText.h>
// #include <TFile.h>
// #include <TH1F.h>
// #include <TH2F.h>
// #include <TMath.h>
// #include <TTree.h>



void tuto2(){

    double x[5] = {1, 2, 3, 4, 5};
    double y[5] = {1, 4, 9, 16, 25};

    TGraph* gr = new TGraph(5, x, y);

    gr->SetMarkerStyle(5);
    gr->SetMarkerSize(5);

    // label on the axis
    gr->GetXaxis()->SetTitle("X Axis");
    gr->GetYaxis()->SetTitle("Y Axis");

    TCanvas* c1 = new TCanvas();

    gr->Draw("ACP"); // plot all, connect with a straight line
}
