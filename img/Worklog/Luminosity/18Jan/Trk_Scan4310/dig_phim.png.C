{
//=========Macro generated from canvas: c1/Canvas
//=========  (Mon Jan 15 15:37:30 2018) by ROOT version5.34/09
   TCanvas *c1 = new TCanvas("c1", "Canvas",1,1,800,776);
   gStyle->SetOptStat(0);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "the pad with distributions",0.02,0.3,0.98,0.95);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-250,5.856951,250,6.590643);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(2);
   pad1->SetLogy();
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameBorderMode(0);
   
   TH1D *hdata_phim = new TH1D("hdata_phim","#phi_{m}",100,-200,200);
   hdata_phim->SetBinContent(50,1735383);
   hdata_phim->SetBinContent(51,1704839);
   hdata_phim->SetEntries(3440222);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0000");
   hdata_phim->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   hdata_phim->SetMarkerColor(ci);
   hdata_phim->SetMarkerStyle(4);
   hdata_phim->SetMarkerSize(0.5);
   hdata_phim->GetXaxis()->SetTitle("#phi_{-} (^{#circ})");
   hdata_phim->GetXaxis()->SetLabelFont(42);
   hdata_phim->GetXaxis()->SetLabelSize(0.035);
   hdata_phim->GetXaxis()->SetTitleSize(0.035);
   hdata_phim->GetXaxis()->SetTitleFont(42);
   hdata_phim->GetYaxis()->SetTitle("NEvents");
   hdata_phim->GetYaxis()->SetLabelFont(42);
   hdata_phim->GetYaxis()->SetLabelSize(0.035);
   hdata_phim->GetYaxis()->SetTitleSize(0.035);
   hdata_phim->GetYaxis()->SetTitleFont(42);
   hdata_phim->GetZaxis()->SetLabelFont(42);
   hdata_phim->GetZaxis()->SetLabelSize(0.035);
   hdata_phim->GetZaxis()->SetTitleSize(0.035);
   hdata_phim->GetZaxis()->SetTitleFont(42);
   hdata_phim->Draw("EP");
   
   TH1D *hmc_phim = new TH1D("hmc_phim","#phi_{m}",100,-200,200);
   hmc_phim->SetBinContent(50,1701809);
   hmc_phim->SetBinContent(51,1738413);
   hmc_phim->SetEntries(961357);

   ci = TColor::GetColor("#0000ff");
   hmc_phim->SetLineColor(ci);
   hmc_phim->GetXaxis()->SetLabelFont(42);
   hmc_phim->GetXaxis()->SetLabelSize(0.035);
   hmc_phim->GetXaxis()->SetTitleSize(0.035);
   hmc_phim->GetXaxis()->SetTitleFont(42);
   hmc_phim->GetYaxis()->SetLabelFont(42);
   hmc_phim->GetYaxis()->SetLabelSize(0.035);
   hmc_phim->GetYaxis()->SetTitleSize(0.035);
   hmc_phim->GetYaxis()->SetTitleFont(42);
   hmc_phim->GetZaxis()->SetLabelFont(42);
   hmc_phim->GetZaxis()->SetLabelSize(0.035);
   hmc_phim->GetZaxis()->SetTitleSize(0.035);
   hmc_phim->GetZaxis()->SetTitleFont(42);
   hmc_phim->Draw("EPsame");
   
   TH1D *hdata_phim = new TH1D("hdata_phim","#phi_{m}",100,-200,200);
   hdata_phim->SetBinContent(50,1735383);
   hdata_phim->SetBinContent(51,1704839);
   hdata_phim->SetEntries(3440222);

   ci = TColor::GetColor("#ff0000");
   hdata_phim->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   hdata_phim->SetMarkerColor(ci);
   hdata_phim->SetMarkerStyle(4);
   hdata_phim->SetMarkerSize(0.5);
   hdata_phim->GetXaxis()->SetTitle("#phi_{-} (^{#circ})");
   hdata_phim->GetXaxis()->SetLabelFont(42);
   hdata_phim->GetXaxis()->SetLabelSize(0.035);
   hdata_phim->GetXaxis()->SetTitleSize(0.035);
   hdata_phim->GetXaxis()->SetTitleFont(42);
   hdata_phim->GetYaxis()->SetTitle("NEvents");
   hdata_phim->GetYaxis()->SetLabelFont(42);
   hdata_phim->GetYaxis()->SetLabelSize(0.035);
   hdata_phim->GetYaxis()->SetTitleSize(0.035);
   hdata_phim->GetYaxis()->SetTitleFont(42);
   hdata_phim->GetZaxis()->SetLabelFont(42);
   hdata_phim->GetZaxis()->SetLabelSize(0.035);
   hdata_phim->GetZaxis()->SetTitleSize(0.035);
   hdata_phim->GetZaxis()->SetTitleFont(42);
   hdata_phim->Draw("EPsame");
   
   TLegend *leg = new TLegend(0.1,0.75,0.25,0.875,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(19);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("hdata_phim","Data","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("hmc_phim","Babayaga NLO","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.4716792,0.9232583,0.5283208,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("#phi_{m}");
   pt->Draw();
   pad1->Modified();
   c1->cd();
  
// ------------>Primitives in pad: pad2
   pad2 = new TPad("pad2", "the pad with ratios",0.02,0.02,0.98,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-250,-25,250,25);
   pad2->SetFillColor(0);
   pad2->SetBorderMode(0);
   pad2->SetBorderSize(2);
   pad2->SetGridy();
   pad2->SetFrameBorderMode(0);
   pad2->SetFrameBorderMode(0);
   
   TH1D *hist_ratio5 = new TH1D("hist_ratio5","",100,-200,200);
   hist_ratio5->SetBinContent(50,1.972858);
   hist_ratio5->SetBinContent(51,-1.931317);
   hist_ratio5->SetBinError(50,0.453558);
   hist_ratio5->SetBinError(51,0.1419625);
   hist_ratio5->SetMinimum(-20);
   hist_ratio5->SetMaximum(20);
   hist_ratio5->SetEntries(100);
   hist_ratio5->SetStats(0);

   ci = TColor::GetColor("#000099");
   hist_ratio5->SetLineColor(ci);
   hist_ratio5->SetMarkerStyle(8);
   hist_ratio5->SetMarkerSize(0.5);
   hist_ratio5->GetXaxis()->SetLabelFont(42);
   hist_ratio5->GetXaxis()->SetLabelSize(0.035);
   hist_ratio5->GetXaxis()->SetTitleSize(0.035);
   hist_ratio5->GetXaxis()->SetTitleFont(42);
   hist_ratio5->GetYaxis()->SetTitle("N_{data}/N_{MC} (%)");
   hist_ratio5->GetYaxis()->SetLabelFont(42);
   hist_ratio5->GetYaxis()->SetLabelSize(0.035);
   hist_ratio5->GetYaxis()->SetTitleSize(0.07);
   hist_ratio5->GetYaxis()->SetTitleOffset(0.5);
   hist_ratio5->GetYaxis()->SetTitleFont(42);
   hist_ratio5->GetZaxis()->SetLabelFont(42);
   hist_ratio5->GetZaxis()->SetLabelSize(0.035);
   hist_ratio5->GetZaxis()->SetTitleSize(0.035);
   hist_ratio5->GetZaxis()->SetTitleFont(42);
   hist_ratio5->Draw("");
   pad2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
