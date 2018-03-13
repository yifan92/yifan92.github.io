{
//=========Macro generated from canvas: canvas1/Canvas
//=========  (Tue Mar 13 11:05:37 2018) by ROOT version5.34/09
   TCanvas *canvas1 = new TCanvas("canvas1", "Canvas",30,16,800,800);
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
   pad1->Range(1.375,2.446073,2.625,5.409649);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(2);
   pad1->SetLogy();
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameBorderMode(0);
   
   TH1D *hdata_e2_cut1 = new TH1D("hdata_e2_cut1","E_{m}",100,1.5,2.5);
   hdata_e2_cut1->SetBinContent(30,1139);
   hdata_e2_cut1->SetBinContent(31,38909);
   hdata_e2_cut1->SetBinContent(32,40704);
   hdata_e2_cut1->SetBinContent(33,42712);
   hdata_e2_cut1->SetBinContent(34,45403);
   hdata_e2_cut1->SetBinContent(35,48298);
   hdata_e2_cut1->SetBinContent(36,51709);
   hdata_e2_cut1->SetBinContent(37,54864);
   hdata_e2_cut1->SetBinContent(38,58960);
   hdata_e2_cut1->SetBinContent(39,64711);
   hdata_e2_cut1->SetBinContent(40,68247);
   hdata_e2_cut1->SetEntries(515656);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0000");
   hdata_e2_cut1->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   hdata_e2_cut1->SetMarkerColor(ci);
   hdata_e2_cut1->SetMarkerStyle(4);
   hdata_e2_cut1->SetMarkerSize(0.5);
   hdata_e2_cut1->GetXaxis()->SetTitle("E_{-} (GeV)");
   hdata_e2_cut1->GetXaxis()->SetLabelFont(42);
   hdata_e2_cut1->GetXaxis()->SetLabelSize(0.035);
   hdata_e2_cut1->GetXaxis()->SetTitleSize(0.035);
   hdata_e2_cut1->GetXaxis()->SetTitleFont(42);
   hdata_e2_cut1->GetYaxis()->SetTitle("NEvents");
   hdata_e2_cut1->GetYaxis()->SetLabelFont(42);
   hdata_e2_cut1->GetYaxis()->SetLabelSize(0.035);
   hdata_e2_cut1->GetYaxis()->SetTitleSize(0.035);
   hdata_e2_cut1->GetYaxis()->SetTitleFont(42);
   hdata_e2_cut1->GetZaxis()->SetLabelFont(42);
   hdata_e2_cut1->GetZaxis()->SetLabelSize(0.035);
   hdata_e2_cut1->GetZaxis()->SetTitleSize(0.035);
   hdata_e2_cut1->GetZaxis()->SetTitleFont(42);
   hdata_e2_cut1->Draw("EP");
   
   TH1D *hmc_e2_cut1 = new TH1D("hmc_e2_cut1","E_{m}",100,1.5,2.5);
   hmc_e2_cut1->SetBinContent(30,1064.754);
   hmc_e2_cut1->SetBinContent(31,33892.18);
   hmc_e2_cut1->SetBinContent(32,37341.38);
   hmc_e2_cut1->SetBinContent(33,40145.74);
   hmc_e2_cut1->SetBinContent(34,45229.56);
   hmc_e2_cut1->SetBinContent(35,47853.96);
   hmc_e2_cut1->SetBinContent(36,53132.74);
   hmc_e2_cut1->SetBinContent(37,55907.1);
   hmc_e2_cut1->SetBinContent(38,62595.55);
   hmc_e2_cut1->SetBinContent(39,67784.36);
   hmc_e2_cut1->SetBinContent(40,70708.68);
   hmc_e2_cut1->SetEntries(34385);

   ci = TColor::GetColor("#0000ff");
   hmc_e2_cut1->SetLineColor(ci);
   hmc_e2_cut1->GetXaxis()->SetLabelFont(42);
   hmc_e2_cut1->GetXaxis()->SetLabelSize(0.035);
   hmc_e2_cut1->GetXaxis()->SetTitleSize(0.035);
   hmc_e2_cut1->GetXaxis()->SetTitleFont(42);
   hmc_e2_cut1->GetYaxis()->SetLabelFont(42);
   hmc_e2_cut1->GetYaxis()->SetLabelSize(0.035);
   hmc_e2_cut1->GetYaxis()->SetTitleSize(0.035);
   hmc_e2_cut1->GetYaxis()->SetTitleFont(42);
   hmc_e2_cut1->GetZaxis()->SetLabelFont(42);
   hmc_e2_cut1->GetZaxis()->SetLabelSize(0.035);
   hmc_e2_cut1->GetZaxis()->SetTitleSize(0.035);
   hmc_e2_cut1->GetZaxis()->SetTitleFont(42);
   hmc_e2_cut1->Draw("EPsame");
   
   TH1D *hdata_e2_cut1 = new TH1D("hdata_e2_cut1","E_{m}",100,1.5,2.5);
   hdata_e2_cut1->SetBinContent(30,1139);
   hdata_e2_cut1->SetBinContent(31,38909);
   hdata_e2_cut1->SetBinContent(32,40704);
   hdata_e2_cut1->SetBinContent(33,42712);
   hdata_e2_cut1->SetBinContent(34,45403);
   hdata_e2_cut1->SetBinContent(35,48298);
   hdata_e2_cut1->SetBinContent(36,51709);
   hdata_e2_cut1->SetBinContent(37,54864);
   hdata_e2_cut1->SetBinContent(38,58960);
   hdata_e2_cut1->SetBinContent(39,64711);
   hdata_e2_cut1->SetBinContent(40,68247);
   hdata_e2_cut1->SetEntries(515656);

   ci = TColor::GetColor("#ff0000");
   hdata_e2_cut1->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   hdata_e2_cut1->SetMarkerColor(ci);
   hdata_e2_cut1->SetMarkerStyle(4);
   hdata_e2_cut1->SetMarkerSize(0.5);
   hdata_e2_cut1->GetXaxis()->SetTitle("E_{-} (GeV)");
   hdata_e2_cut1->GetXaxis()->SetLabelFont(42);
   hdata_e2_cut1->GetXaxis()->SetLabelSize(0.035);
   hdata_e2_cut1->GetXaxis()->SetTitleSize(0.035);
   hdata_e2_cut1->GetXaxis()->SetTitleFont(42);
   hdata_e2_cut1->GetYaxis()->SetTitle("NEvents");
   hdata_e2_cut1->GetYaxis()->SetLabelFont(42);
   hdata_e2_cut1->GetYaxis()->SetLabelSize(0.035);
   hdata_e2_cut1->GetYaxis()->SetTitleSize(0.035);
   hdata_e2_cut1->GetYaxis()->SetTitleFont(42);
   hdata_e2_cut1->GetZaxis()->SetLabelFont(42);
   hdata_e2_cut1->GetZaxis()->SetLabelSize(0.035);
   hdata_e2_cut1->GetZaxis()->SetTitleSize(0.035);
   hdata_e2_cut1->GetZaxis()->SetTitleFont(42);
   hdata_e2_cut1->Draw("EPsame");
   
   TLegend *leg = new TLegend(0.1,0.75,0.25,0.875,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(19);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("hdata_e2_cut1","Data","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("hmc_e2_cut1","Babayaga NLO","l");

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
   TText *text = pt->AddText("E_{m}");
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
   
   TH1D *hist_ratio12 = new TH1D("hist_ratio12","",100,1.5,2.5);
   hist_ratio12->SetBinContent(30,6.972972);
   hist_ratio12->SetBinContent(31,14.80229);
   hist_ratio12->SetBinContent(32,9.005067);
   hist_ratio12->SetBinContent(33,6.39237);
   hist_ratio12->SetBinContent(34,0.3834611);
   hist_ratio12->SetBinContent(35,0.9279136);
   hist_ratio12->SetBinContent(36,-2.679587);
   hist_ratio12->SetBinContent(37,-1.86577);
   hist_ratio12->SetBinContent(38,-5.808007);
   hist_ratio12->SetBinContent(39,-4.534021);
   hist_ratio12->SetBinContent(40,-3.481442);
   hist_ratio12->SetBinError(30,6.447903);
   hist_ratio12->SetBinError(31,1.205595);
   hist_ratio12->SetBinError(32,1.104385);
   hist_ratio12->SetBinError(33,1.045792);
   hist_ratio12->SetBinError(34,0.9431169);
   hist_ratio12->SetBinError(35,0.9206204);
   hist_ratio12->SetBinError(36,0.8501818);
   hist_ratio12->SetBinError(37,0.8340011);
   hist_ratio12->SetBinError(38,0.764394);
   hist_ratio12->SetBinError(39,0.7419607);
   hist_ratio12->SetBinError(40,0.7324344);
   hist_ratio12->SetMinimum(-20);
   hist_ratio12->SetMaximum(20);
   hist_ratio12->SetEntries(100);
   hist_ratio12->SetStats(0);

   ci = TColor::GetColor("#000099");
   hist_ratio12->SetLineColor(ci);
   hist_ratio12->SetMarkerStyle(8);
   hist_ratio12->SetMarkerSize(0.5);
   hist_ratio12->GetXaxis()->SetLabelFont(42);
   hist_ratio12->GetXaxis()->SetLabelSize(0.035);
   hist_ratio12->GetXaxis()->SetTitleSize(0.035);
   hist_ratio12->GetXaxis()->SetTitleFont(42);
   hist_ratio12->GetYaxis()->SetTitle("N_{data}/N_{MC} (%)");
   hist_ratio12->GetYaxis()->SetLabelFont(42);
   hist_ratio12->GetYaxis()->SetLabelSize(0.035);
   hist_ratio12->GetYaxis()->SetTitleSize(0.07);
   hist_ratio12->GetYaxis()->SetTitleOffset(0.5);
   hist_ratio12->GetYaxis()->SetTitleFont(42);
   hist_ratio12->GetZaxis()->SetLabelFont(42);
   hist_ratio12->GetZaxis()->SetLabelSize(0.035);
   hist_ratio12->GetZaxis()->SetTitleSize(0.035);
   hist_ratio12->GetZaxis()->SetTitleFont(42);
   hist_ratio12->Draw("");
   pad2->Modified();
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
