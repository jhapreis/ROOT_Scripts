#include <TStopwatch.h>
#include <TFile.h>
#include <TTree.h>

#include <iostream>
#include <fstream>

using namespace std;



void tuto15(){

    TStopwatch time_elapsed;

    fstream file;

    file.open("data_file.txt", ios::in);

    double x, y;

    TFile* output = new TFile("tuto15/tuto15.root", "recreate");


    //TTree
    TTree* tree = new TTree("tree", "tree");

    tree->Branch("x", &x, "x/D");
    tree->Branch("y", &y, "y/D");


    while(1){ // read data-file

        file >> x >> y;

        if(file.eof()) break;

        cout << x << " " << y << endl;

        tree->Fill();

    }


    output->Write();

    output->Close();

    file.close();

    time_elapsed.Print();
}
