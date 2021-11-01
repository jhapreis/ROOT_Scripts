import ROOT

h = ROOT.TH1F("myHist", "Histogram", 64, -4, 4)

h.FillRandom("gaus")

h.Draw()
