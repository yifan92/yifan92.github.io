{
//=========Macro generated from canvas: c1/Canvas
//=========  (Tue Jan 16 10:35:17 2018) by ROOT version5.34/09
   TCanvas *c1 = new TCanvas("c1", "Canvas",30,32,800,800);
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
   pad1->Range(-250,5.21852,250,5.944354);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(2);
   pad1->SetLogy();
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameBorderMode(0);
   
   TH1D *hdata_phip = new TH1D("hdata_phip","#phi_{p}",100,-200,200);
   hdata_phip->SetBinContent(50,391587);
   hdata_phip->SetBinContent(51,392219);
   hdata_phip->SetEntries(783806);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0000");
   hdata_phip->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   hdata_phip->SetMarkerColor(ci);
   hdata_phip->SetMarkerStyle(4);
   hdata_phip->SetMarkerSize(0.5);
   hdata_phip->GetXaxis()->SetTitle("#phi_{+} ");
   hdata_phip->GetXaxis()->SetLabelFont(42);
   hdata_phip->GetXaxis()->SetLabelSize(0.035);
   hdata_phip->GetXaxis()->SetTitleSize(0.035);
   hdata_phip->GetXaxis()->SetTitleFont(42);
   hdata_phip->GetYaxis()->SetTitle("NEvents");
   hdata_phip->GetYaxis()->SetLabelFont(42);
   hdata_phip->GetYaxis()->SetLabelSize(0.035);
   hdata_phip->GetYaxis()->SetTitleSize(0.035);
   hdata_phip->GetYaxis()->SetTitleFont(42);
   hdata_phip->GetZaxis()->SetLabelFont(42);
   hdata_phip->GetZaxis()->SetLabelSize(0.035);
   hdata_phip->GetZaxis()->SetTitleSize(0.035);
   hdata_phip->GetZaxis()->SetTitleFont(42);
   hdata_phip->Draw("EP");
   
   TH1D *hmc_phip = new TH1D("hmc_phip","#phi_{p}",100,-200,200);
   hmc_phip->SetBinContent(50,395146);
   hmc_phip->SetBinContent(51,388660);
   hmc_phip->SetEntries(992154);

   ci = TColor::GetColor("#0000ff");
   hmc_phip->SetLineColor(ci);
   hmc_phip->GetXaxis()->SetLabelFont(42);
   hmc_phip->GetXaxis()->SetLabelSize(0.035);
   hmc_phip->GetXaxis()->SetTitleSize(0.035);
   hmc_phip->GetXaxis()->SetTitleFont(42);
   hmc_phip->GetYaxis()->SetLabelFont(42);
   hmc_phip->GetYaxis()->SetLabelSize(0.035);
   hmc_phip->GetYaxis()->SetTitleSize(0.035);
   hmc_phip->GetYaxis()->SetTitleFont(42);
   hmc_phip->GetZaxis()->SetLabelFont(42);
   hmc_phip->GetZaxis()->SetLabelSize(0.035);
   hmc_phip->GetZaxis()->SetTitleSize(0.035);
   hmc_phip->GetZaxis()->SetTitleFont(42);
   hmc_phip->Draw("EPsame");
   
   TH1D *hdata_phip = new TH1D("hdata_phip","#phi_{p}",100,-200,200);
   hdata_phip->SetBinContent(50,391587);
   hdata_phip->SetBinContent(51,392219);
   hdata_phip->SetEntries(783806);

   ci = TColor::GetColor("#ff0000");
   hdata_phip->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   hdata_phip->SetMarkerColor(ci);
   hdata_phip->SetMarkerStyle(4);
   hdata_phip->SetMarkerSize(0.5);
   hdata_phip->GetXaxis()->SetTitle("#phi_{+} ");
   hdata_phip->GetXaxis()->SetLabelFont(42);
   hdata_phip->GetXaxis()->SetLabelSize(0.035);
   hdata_phip->GetXaxis()->SetTitleSize(0.035);
   hdata_phip->GetXaxis()->SetTitleFont(42);
   hdata_phip->GetYaxis()->SetTitle("NEvents");
   hdata_phip->GetYaxis()->SetLabelFont(42);
   hdata_phip->GetYaxis()->SetLabelSize(0.035);
   hdata_phip->GetYaxis()->SetTitleSize(0.035);
   hdata_phip->GetYaxis()->SetTitleFont(42);
   hdata_phip->GetZaxis()->SetLabelFont(42);
   hdata_phip->GetZaxis()->SetLabelSize(0.035);
   hdata_phip->GetZaxis()->SetTitleSize(0.035);
   hdata_phip->GetZaxis()->SetTitleFont(42);
   hdata_phip->Draw("EPsame");
   
   TLegend *leg = new TLegend(0.1,0.75,0.25,0.875,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(19);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("hdata_phip","Data","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("hmc_phip","Babayaga NLO","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.4749508,0.9136927,0.5250492,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("#phi_{p}");
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
   
   TH1D *hist_ratio4 = new TH1D("hist_ratio4","",100,-200,200);
   hist_ratio4->SetBinContent(50,-0.9006717);
   hist_ratio4->SetBinContent(51,0.915702);
   hist_ratio4->SetBinError(50,0.03167435);
   hist_ratio4->SetBinError(51,0.613175);
   hist_ratio4->SetMinimum(-20);
   hist_ratio4->SetMaximum(20);
   hist_ratio4->SetEntries(100);
   hist_ratio4->SetStats(0);

   ci = TColor::GetColor("#000099");
   hist_ratio4->SetLineColor(ci);
   hist_ratio4->SetMarkerStyle(8);
   hist_ratio4->SetMarkerSize(0.5);
   hist_ratio4->GetXaxis()->SetLabelFont(42);
   hist_ratio4->GetXaxis()->SetLabelSize(0.035);
   hist_ratio4->GetXaxis()->SetTitleSize(0.035);
   hist_ratio4->GetXaxis()->SetTitleFont(42);
   hist_ratio4->GetYaxis()->SetTitle("N_{data}/N_{MC} (%)");
   hist_ratio4->GetYaxis()->SetLabelFont(42);
   hist_ratio4->GetYaxis()->SetLabelSize(0.035);
   hist_ratio4->GetYaxis()->SetTitleSize(0.07);
   hist_ratio4->GetYaxis()->SetTitleOffset(0.5);
   hist_ratio4->GetYaxis()->SetTitleFont(42);
   hist_ratio4->GetZaxis()->SetLabelFont(42);
   hist_ratio4->GetZaxis()->SetLabelSize(0.035);
   hist_ratio4->GetZaxis()->SetTitleSize(0.035);
   hist_ratio4->GetZaxis()->SetTitleFont(42);
   hist_ratio4->Draw("");
   pad2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
