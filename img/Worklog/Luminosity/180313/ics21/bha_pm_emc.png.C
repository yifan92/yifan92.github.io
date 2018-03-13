{
//=========Macro generated from canvas: canvas1/Canvas
//=========  (Tue Mar 13 06:43:04 2018) by ROOT version5.34/09
   TCanvas *canvas1 = new TCanvas("canvas1", "Canvas",1,1,800,776);
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
   pad1->Range(1.375,3.295602,2.625,6.254754);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(2);
   pad1->SetLogy();
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameBorderMode(0);
   
   TH1D *hdata_pm_emc = new TH1D("hdata_pm_emc","P_{m}",100,1.5,2.5);
   hdata_pm_emc->SetBinContent(30,7897);
   hdata_pm_emc->SetBinContent(31,273309);
   hdata_pm_emc->SetBinContent(32,284749);
   hdata_pm_emc->SetBinContent(33,300392);
   hdata_pm_emc->SetBinContent(34,317302);
   hdata_pm_emc->SetBinContent(35,336920);
   hdata_pm_emc->SetBinContent(36,359612);
   hdata_pm_emc->SetBinContent(37,384432);
   hdata_pm_emc->SetBinContent(38,414403);
   hdata_pm_emc->SetBinContent(39,451185);
   hdata_pm_emc->SetBinContent(40,479361);
   hdata_pm_emc->SetEntries(3609562);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0000");
   hdata_pm_emc->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   hdata_pm_emc->SetMarkerColor(ci);
   hdata_pm_emc->SetMarkerStyle(4);
   hdata_pm_emc->SetMarkerSize(0.5);
   hdata_pm_emc->GetXaxis()->SetTitle("p_{-} (GeV) EMC");
   hdata_pm_emc->GetXaxis()->SetLabelFont(42);
   hdata_pm_emc->GetXaxis()->SetLabelSize(0.035);
   hdata_pm_emc->GetXaxis()->SetTitleSize(0.035);
   hdata_pm_emc->GetXaxis()->SetTitleFont(42);
   hdata_pm_emc->GetYaxis()->SetTitle("NEvents");
   hdata_pm_emc->GetYaxis()->SetLabelFont(42);
   hdata_pm_emc->GetYaxis()->SetLabelSize(0.035);
   hdata_pm_emc->GetYaxis()->SetTitleSize(0.035);
   hdata_pm_emc->GetYaxis()->SetTitleFont(42);
   hdata_pm_emc->GetZaxis()->SetLabelFont(42);
   hdata_pm_emc->GetZaxis()->SetLabelSize(0.035);
   hdata_pm_emc->GetZaxis()->SetTitleSize(0.035);
   hdata_pm_emc->GetZaxis()->SetTitleFont(42);
   hdata_pm_emc->Draw("EP");
   
   TH1D *hmc_pm_emc = new TH1D("hmc_pm_emc","P_{m}",100,1.5,2.5);
   hmc_pm_emc->SetBinContent(30,9731.872);
   hmc_pm_emc->SetBinContent(31,268535.5);
   hmc_pm_emc->SetBinContent(32,288427);
   hmc_pm_emc->SetBinContent(33,305324.1);
   hmc_pm_emc->SetBinContent(34,312917.1);
   hmc_pm_emc->SetBinContent(35,339225.3);
   hmc_pm_emc->SetBinContent(36,356764);
   hmc_pm_emc->SetBinContent(37,366495.9);
   hmc_pm_emc->SetBinContent(38,419219.1);
   hmc_pm_emc->SetBinContent(39,460392.4);
   hmc_pm_emc->SetBinContent(40,482529.7);
   hmc_pm_emc->SetEntries(33752);

   ci = TColor::GetColor("#0000ff");
   hmc_pm_emc->SetLineColor(ci);
   hmc_pm_emc->GetXaxis()->SetLabelFont(42);
   hmc_pm_emc->GetXaxis()->SetLabelSize(0.035);
   hmc_pm_emc->GetXaxis()->SetTitleSize(0.035);
   hmc_pm_emc->GetXaxis()->SetTitleFont(42);
   hmc_pm_emc->GetYaxis()->SetLabelFont(42);
   hmc_pm_emc->GetYaxis()->SetLabelSize(0.035);
   hmc_pm_emc->GetYaxis()->SetTitleSize(0.035);
   hmc_pm_emc->GetYaxis()->SetTitleFont(42);
   hmc_pm_emc->GetZaxis()->SetLabelFont(42);
   hmc_pm_emc->GetZaxis()->SetLabelSize(0.035);
   hmc_pm_emc->GetZaxis()->SetTitleSize(0.035);
   hmc_pm_emc->GetZaxis()->SetTitleFont(42);
   hmc_pm_emc->Draw("EPsame");
   
   TH1D *hdata_pm_emc = new TH1D("hdata_pm_emc","P_{m}",100,1.5,2.5);
   hdata_pm_emc->SetBinContent(30,7897);
   hdata_pm_emc->SetBinContent(31,273309);
   hdata_pm_emc->SetBinContent(32,284749);
   hdata_pm_emc->SetBinContent(33,300392);
   hdata_pm_emc->SetBinContent(34,317302);
   hdata_pm_emc->SetBinContent(35,336920);
   hdata_pm_emc->SetBinContent(36,359612);
   hdata_pm_emc->SetBinContent(37,384432);
   hdata_pm_emc->SetBinContent(38,414403);
   hdata_pm_emc->SetBinContent(39,451185);
   hdata_pm_emc->SetBinContent(40,479361);
   hdata_pm_emc->SetEntries(3609562);

   ci = TColor::GetColor("#ff0000");
   hdata_pm_emc->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   hdata_pm_emc->SetMarkerColor(ci);
   hdata_pm_emc->SetMarkerStyle(4);
   hdata_pm_emc->SetMarkerSize(0.5);
   hdata_pm_emc->GetXaxis()->SetTitle("p_{-} (GeV) EMC");
   hdata_pm_emc->GetXaxis()->SetLabelFont(42);
   hdata_pm_emc->GetXaxis()->SetLabelSize(0.035);
   hdata_pm_emc->GetXaxis()->SetTitleSize(0.035);
   hdata_pm_emc->GetXaxis()->SetTitleFont(42);
   hdata_pm_emc->GetYaxis()->SetTitle("NEvents");
   hdata_pm_emc->GetYaxis()->SetLabelFont(42);
   hdata_pm_emc->GetYaxis()->SetLabelSize(0.035);
   hdata_pm_emc->GetYaxis()->SetTitleSize(0.035);
   hdata_pm_emc->GetYaxis()->SetTitleFont(42);
   hdata_pm_emc->GetZaxis()->SetLabelFont(42);
   hdata_pm_emc->GetZaxis()->SetLabelSize(0.035);
   hdata_pm_emc->GetZaxis()->SetTitleSize(0.035);
   hdata_pm_emc->GetZaxis()->SetTitleFont(42);
   hdata_pm_emc->Draw("EPsame");
   
   TLegend *leg = new TLegend(0.1,0.75,0.25,0.875,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(19);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("hdata_pm_emc","Data","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("hmc_pm_emc","Babayaga NLO","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.469062,0.9352152,0.530938,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("P_{m}");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   pad2 = new TPad("pad2", "the pad with ratios",0.02,0.02,0.98,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(1.375,-25,2.625,25);
   pad2->SetFillColor(0);
   pad2->SetBorderMode(0);
   pad2->SetBorderSize(2);
   pad2->SetGridy();
   pad2->SetFrameBorderMode(0);
   pad2->SetFrameBorderMode(0);
   
   TH1D *hist_ratio20 = new TH1D("hist_ratio20","",100,1.5,2.5);
   hist_ratio20->SetBinContent(30,-18.85424);
   hist_ratio20->SetBinContent(31,1.777605);
   hist_ratio20->SetBinContent(32,-1.275199);
   hist_ratio20->SetBinContent(33,-1.61537);
   hist_ratio20->SetBinContent(34,1.401293);
   hist_ratio20->SetBinContent(35,-0.6795634);
   hist_ratio20->SetBinContent(36,0.7982843);
   hist_ratio20->SetBinContent(37,4.893948);
   hist_ratio20->SetBinContent(38,-1.148826);
   hist_ratio20->SetBinContent(39,-1.999903);
   hist_ratio20->SetBinContent(40,-0.6566929);
   hist_ratio20->SetBinError(30,1.735693);
   hist_ratio20->SetBinError(31,0.3910862);
   hist_ratio20->SetBinError(32,0.3688365);
   hist_ratio20->SetBinError(33,0.3575596);
   hist_ratio20->SetBinError(34,0.3612855);
   hist_ratio20->SetBinError(35,0.3416375);
   hist_ratio20->SetBinError(36,0.3368451);
   hist_ratio20->SetBinError(37,0.3424437);
   hist_ratio20->SetBinError(38,0.3062299);
   hist_ratio20->SetBinError(39,0.2903296);
   hist_ratio20->SetBinError(40,0.2864986);
   hist_ratio20->SetMinimum(-20);
   hist_ratio20->SetMaximum(20);
   hist_ratio20->SetEntries(100);
   hist_ratio20->SetStats(0);

   ci = TColor::GetColor("#000099");
   hist_ratio20->SetLineColor(ci);
   hist_ratio20->SetMarkerStyle(8);
   hist_ratio20->SetMarkerSize(0.5);
   hist_ratio20->GetXaxis()->SetLabelFont(42);
   hist_ratio20->GetXaxis()->SetLabelSize(0.035);
   hist_ratio20->GetXaxis()->SetTitleSize(0.035);
   hist_ratio20->GetXaxis()->SetTitleFont(42);
   hist_ratio20->GetYaxis()->SetTitle("N_{data}/N_{MC} (%)");
   hist_ratio20->GetYaxis()->SetLabelFont(42);
   hist_ratio20->GetYaxis()->SetLabelSize(0.035);
   hist_ratio20->GetYaxis()->SetTitleSize(0.07);
   hist_ratio20->GetYaxis()->SetTitleOffset(0.5);
   hist_ratio20->GetYaxis()->SetTitleFont(42);
   hist_ratio20->GetZaxis()->SetLabelFont(42);
   hist_ratio20->GetZaxis()->SetLabelSize(0.035);
   hist_ratio20->GetZaxis()->SetTitleSize(0.035);
   hist_ratio20->GetZaxis()->SetTitleFont(42);
   hist_ratio20->Draw("");
   pad2->Modified();
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
