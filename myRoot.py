import ROOT

canvas = ROOT.TCanvas("canvas")
hist1 = ROOT.TH1D('gauss1', 'Random Gaussian 1', 100, -5, 5)
hist2 = ROOT.TH1D('gauss2', 'Random Gaussian 2', 100, -5, 5)

randGen = ROOT.TRandom3()
for i in range (100,000):
    hist1.Fill ( randGen.Gauss(0,1) )
    hist2.Fill ( randGen.Gauss(0,1) )


canvas = ROOT.TCanvas('mycanvas')
canvas.cd()
hist1.Draw()
hist2.Draw('same')
canvas.Print('myRoot.pdf')


