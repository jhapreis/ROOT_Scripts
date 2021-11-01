
void tuto1(){

    // Crate histogram
    TH1F* hist = new TH1F("hist", "Histogram", 100, 0, 100); // histogram, 1D, float

    // Plot values on histogram
    hist->Fill(10);

    // label on the axis
    hist->GetXaxis()->SetTitle("X Axis");
    hist->GetYaxis()->SetTitle("Y Axis");

    // Window to draw and Draw
    TCanvas *c1 = new TCanvas();
    hist->Draw();

}
