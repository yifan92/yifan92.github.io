{
//=========Macro generated from canvas: canvas1/Canvas
//=========  (Tue Mar 13 11:44:37 2018) by ROOT version5.34/09
   TCanvas *canvas1 = new TCanvas("canvas1", "Canvas",30,32,800,800);
   gStyle->SetOptStat(0);
   canvas1->Range(0,0,1,1);
   canvas1->SetFillColor(0);
   canvas1->SetBorderMode(0);
   canvas1->SetBorderSize(2);
   canvas1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "the pad with distributions",0.02,0.3,0.98,0.95);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-50,3.387876,50,4.883198);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(2);
   pad1->SetLogy();
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameBorderMode(0);
   
   TH1D *hdata_phidiff_cut1_bhabha = new TH1D("hdata_phidiff_cut1_bhabha","180-|#Delta(#phi)|",100,-40,40);
   hdata_phidiff_cut1_bhabha->SetBinContent(41,28415);
   hdata_phidiff_cut1_bhabha->SetBinContent(42,10342);
   hdata_phidiff_cut1_bhabha->SetBinContent(43,9962);
   hdata_phidiff_cut1_bhabha->SetBinContent(44,6977);
   hdata_phidiff_cut1_bhabha->SetBinContent(57,7175);
   hdata_phidiff_cut1_bhabha->SetBinContent(58,10830);
   hdata_phidiff_cut1_bhabha->SetBinContent(59,11106);
   hdata_phidiff_cut1_bhabha->SetBinContent(60,22672);
   hdata_phidiff_cut1_bhabha->SetEntries(107479);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0000");
   hdata_phidiff_cut1_bhabha->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   hdata_phidiff_cut1_bhabha->SetMarkerColor(ci);
   hdata_phidiff_cut1_bhabha->SetMarkerStyle(4);
   hdata_phidiff_cut1_bhabha->SetMarkerSize(0.5);
   hdata_phidiff_cut1_bhabha->GetXaxis()->SetTitle("180^(#circ) - |#Delta(#phi)|");
   hdata_phidiff_cut1_bhabha->GetXaxis()->SetLabelFont(42);
   hdata_phidiff_cut1_bhabha->GetXaxis()->SetLabelSize(0.035);
   hdata_phidiff_cut1_bhabha->GetXaxis()->SetTitleSize(0.035);
   hdata_phidiff_cut1_bhabha->GetXaxis()->SetTitleFont(42);
   hdata_phidiff_cut1_bhabha->GetYaxis()->SetTitle("NEvents");
   hdata_phidiff_cut1_bhabha->GetYaxis()->SetLabelFont(42);
   hdata_phidiff_cut1_bhabha->GetYaxis()->SetLabelSize(0.035);
   hdata_phidiff_cut1_bhabha->GetYaxis()->SetTitleSize(0.035);
   hdata_phidiff_cut1_bhabha->GetYaxis()->SetTitleFont(42);
   hdata_phidiff_cut1_bhabha->GetZaxis()->SetLabelFont(42);
   hdata_phidiff_cut1_bhabha->GetZaxis()->SetLabelSize(0.035);
   hdata_phidiff_cut1_bhabha->GetZaxis()->SetTitleSize(0.035);
   hdata_phidiff_cut1_bhabha->GetZaxis()->SetTitleFont(42);
   hdata_phidiff_cut1_bhabha->Draw("EP");
   
   TH1D *hmc_phidiff_cut1_bhabha = new TH1D("hmc_phidiff_cut1_bhabha","180-|#Delta(#phi)|",100,-40,40);
   hmc_phidiff_cut1_bhabha->SetBinContent(41,36025.15);
   hmc_phidiff_cut1_bhabha->SetBinContent(42,10633.72);
   hmc_phidiff_cut1_bhabha->SetBinContent(43,7804.881);
   hmc_phidiff_cut1_bhabha->SetBinContent(44,3919.482);
   hmc_phidiff_cut1_bhabha->SetBinContent(57,3851.317);
   hmc_phidiff_cut1_bhabha->SetBinContent(58,7327.726);
   hmc_phidiff_cut1_bhabha->SetBinContent(59,11008.63);
   hmc_phidiff_cut1_bhabha->SetBinContent(60,26908.09);
   hmc_phidiff_cut1_bhabha->SetEntries(6307);

   ci = TColor::GetColor("#0000ff");
   hmc_phidiff_cut1_bhabha->SetLineColor(ci);
   hmc_phidiff_cut1_bhabha->GetXaxis()->SetLabelFont(42);
   hmc_phidiff_cut1_bhabha->GetXaxis()->SetLabelSize(0.035);
   hmc_phidiff_cut1_bhabha->GetXaxis()->SetTitleSize(0.035);
   hmc_phidiff_cut1_bhabha->GetXaxis()->SetTitleFont(42);
   hmc_phidiff_cut1_bhabha->GetYaxis()->SetLabelFont(42);
   hmc_phidiff_cut1_bhabha->GetYaxis()->SetLabelSize(0.035);
   hmc_phidiff_cut1_bhabha->GetYaxis()->SetTitleSize(0.035);
   hmc_phidiff_cut1_bhabha->GetYaxis()->SetTitleFont(42);
   hmc_phidiff_cut1_bhabha->GetZaxis()->SetLabelFont(42);
   hmc_phidiff_cut1_bhabha->GetZaxis()->SetLabelSize(0.035);
   hmc_phidiff_cut1_bhabha->GetZaxis()->SetTitleSize(0.035);
   hmc_phidiff_cut1_bhabha->GetZaxis()->SetTitleFont(42);
   hmc_phidiff_cut1_bhabha->Draw("EPsame");
   
   TH1D *hdata_phidiff_cut1_bhabha = new TH1D("hdata_phidiff_cut1_bhabha","180-|#Delta(#phi)|",100,-40,40);
   hdata_phidiff_cut1_bhabha->SetBinContent(41,28415);
   hdata_phidiff_cut1_bhabha->SetBinContent(42,10342);
   hdata_phidiff_cut1_bhabha->SetBinContent(43,9962);
   hdata_phidiff_cut1_bhabha->SetBinContent(44,6977);
   hdata_phidiff_cut1_bhabha->SetBinContent(57,7175);
   hdata_phidiff_cut1_bhabha->SetBinContent(58,10830);
   hdata_phidiff_cut1_bhabha->SetBinContent(59,11106);
   hdata_phidiff_cut1_bhabha->SetBinContent(60,22672);
   hdata_phidiff_cut1_bhabha->SetEntries(107479);

   ci = TColor::GetColor("#ff0000");
   hdata_phidiff_cut1_bhabha->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   hdata_phidiff_cut1_bhabha->SetMarkerColor(ci);
   hdata_phidiff_cut1_bhabha->SetMarkerStyle(4);
   hdata_phidiff_cut1_bhabha->SetMarkerSize(0.5);
   hdata_phidiff_cut1_bhabha->GetXaxis()->SetTitle("180^(#circ) - |#Delta(#phi)|");
   hdata_phidiff_cut1_bhabha->GetXaxis()->SetLabelFont(42);
   hdata_phidiff_cut1_bhabha->GetXaxis()->SetLabelSize(0.035);
   hdata_phidiff_cut1_bhabha->GetXaxis()->SetTitleSize(0.035);
   hdata_phidiff_cut1_bhabha->GetXaxis()->SetTitleFont(42);
   hdata_phidiff_cut1_bhabha->GetYaxis()->SetTitle("NEvents");
   hdata_phidiff_cut1_bhabha->GetYaxis()->SetLabelFont(42);
   hdata_phidiff_cut1_bhabha->GetYaxis()->SetLabelSize(0.035);
   hdata_phidiff_cut1_bhabha->GetYaxis()->SetTitleSize(0.035);
   hdata_phidiff_cut1_bhabha->GetYaxis()->SetTitleFont(42);
   hdata_phidiff_cut1_bhabha->GetZaxis()->SetLabelFont(42);
   hdata_phidiff_cut1_bhabha->GetZaxis()->SetLabelSize(0.035);
   hdata_phidiff_cut1_bhabha->GetZaxis()->SetTitleSize(0.035);
   hdata_phidiff_cut1_bhabha->GetZaxis()->SetTitleFont(42);
   hdata_phidiff_cut1_bhabha->Draw("EPsame");
   
   TLegend *leg = new TLegend(0.1,0.75,0.25,0.875,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(19);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("hdata_phidiff_cut1_bhabha","Data","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("hmc_phidiff_cut1_bhabha","Babayaga NLO","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.4193342,0.9352152,0.5806658,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("180-|#Delta(#phi)|");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   pad2 = new TPad("pad2", "the pad with ratios",0.02,0.02,0.98,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-50,-25,50,25);
   pad2->SetFillColor(0);
   pad2->SetBorderMode(0);
   pad2->SetBorderSize(2);
   pad2->SetGridy();
   pad2->SetFrameBorderMode(0);
   pad2->SetFrameBorderMode(0);
   
   TH1D *hist_ratio15 = new TH1D("hist_ratio15","",100,-40,40);
   hist_ratio15->SetBinContent(41,-21.12454);
   hist_ratio15->SetBinContent(42,-2.743381);
   hist_ratio15->SetBinContent(43,27.63805);
   hist_ratio15->SetBinContent(44,78.00804);
   hist_ratio15->SetBinContent(57,86.2997);
   hist_ratio15->SetBinContent(58,47.79476);
   hist_ratio15->SetBinContent(59,0.8844804);
   hist_ratio15->SetBinContent(60,-15.74281);
   hist_ratio15->SetBinError(41,0.883481);
   hist_ratio15->SetBinError(42,1.899489);
   hist_ratio15->SetBinError(43,2.723574);
   hist_ratio15->SetBinError(44,4.974414);
   hist_ratio15->SetBinError(57,5.201352);
   hist_ratio15->SetBinError(58,3.146712);
   hist_ratio15->SetBinError(59,1.918811);
   hist_ratio15->SetBinError(60,1.073227);
   hist_ratio15->SetMinimum(-20);
   hist_ratio15->SetMaximum(20);
   hist_ratio15->SetEntries(100);
   hist_ratio15->SetStats(0);

   ci = TColor::GetColor("#000099");
   hist_ratio15->SetLineColor(ci);
   hist_ratio15->SetMarkerStyle(8);
   hist_ratio15->SetMarkerSize(0.5);
   hist_ratio15->GetXaxis()->SetLabelFont(42);
   hist_ratio15->GetXaxis()->SetLabelSize(0.035);
   hist_ratio15->GetXaxis()->SetTitleSize(0.035);
   hist_ratio15->GetXaxis()->SetTitleFont(42);
   hist_ratio15->GetYaxis()->SetTitle("N_{data}/N_{MC} (%)");
   hist_ratio15->GetYaxis()->SetLabelFont(42);
   hist_ratio15->GetYaxis()->SetLabelSize(0.035);
   hist_ratio15->GetYaxis()->SetTitleSize(0.07);
   hist_ratio15->GetYaxis()->SetTitleOffset(0.5);
   hist_ratio15->GetYaxis()->SetTitleFont(42);
   hist_ratio15->GetZaxis()->SetLabelFont(42);
   hist_ratio15->GetZaxis()->SetLabelSize(0.035);
   hist_ratio15->GetZaxis()->SetTitleSize(0.035);
   hist_ratio15->GetZaxis()->SetTitleFont(42);
   hist_ratio15->Draw("");
   pad2->Modified();
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
