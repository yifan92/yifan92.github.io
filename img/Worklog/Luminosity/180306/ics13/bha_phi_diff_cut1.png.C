{
//=========Macro generated from canvas: canvas1/Canvas
//=========  (Tue Mar  6 14:24:13 2018) by ROOT version5.34/09
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
   pad1->Range(-50,3.274239,50,5.905925);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(2);
   pad1->SetLogy();
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameBorderMode(0);
   
   TH1D *hdata_phidiff_cut1_bhabha = new TH1D("hdata_phidiff_cut1_bhabha","180-|#Delta(#phi)|",100,-40,40);
   hdata_phidiff_cut1_bhabha->SetBinContent(39,92545);
   hdata_phidiff_cut1_bhabha->SetBinContent(40,231369);
   hdata_phidiff_cut1_bhabha->SetBinContent(41,28415);
   hdata_phidiff_cut1_bhabha->SetBinContent(42,10342);
   hdata_phidiff_cut1_bhabha->SetBinContent(43,9962);
   hdata_phidiff_cut1_bhabha->SetBinContent(44,6977);
   hdata_phidiff_cut1_bhabha->SetBinContent(57,7175);
   hdata_phidiff_cut1_bhabha->SetBinContent(58,10830);
   hdata_phidiff_cut1_bhabha->SetBinContent(59,11106);
   hdata_phidiff_cut1_bhabha->SetBinContent(60,22672);
   hdata_phidiff_cut1_bhabha->SetBinContent(61,211220);
   hdata_phidiff_cut1_bhabha->SetBinContent(62,97458);
   hdata_phidiff_cut1_bhabha->SetEntries(740071);

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
   hmc_phidiff_cut1_bhabha->SetBinContent(39,93280.03);
   hmc_phidiff_cut1_bhabha->SetBinContent(40,241915.4);
   hmc_phidiff_cut1_bhabha->SetBinContent(41,29573.18);
   hmc_phidiff_cut1_bhabha->SetBinContent(42,8729.265);
   hmc_phidiff_cut1_bhabha->SetBinContent(43,6407.057);
   hmc_phidiff_cut1_bhabha->SetBinContent(44,3217.518);
   hmc_phidiff_cut1_bhabha->SetBinContent(57,3161.561);
   hmc_phidiff_cut1_bhabha->SetBinContent(58,6015.359);
   hmc_phidiff_cut1_bhabha->SetBinContent(59,9037.028);
   hmc_phidiff_cut1_bhabha->SetBinContent(60,22088.96);
   hmc_phidiff_cut1_bhabha->SetBinContent(61,216315.1);
   hmc_phidiff_cut1_bhabha->SetBinContent(62,100330.6);
   hmc_phidiff_cut1_bhabha->SetEntries(52903);

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
   hdata_phidiff_cut1_bhabha->SetBinContent(39,92545);
   hdata_phidiff_cut1_bhabha->SetBinContent(40,231369);
   hdata_phidiff_cut1_bhabha->SetBinContent(41,28415);
   hdata_phidiff_cut1_bhabha->SetBinContent(42,10342);
   hdata_phidiff_cut1_bhabha->SetBinContent(43,9962);
   hdata_phidiff_cut1_bhabha->SetBinContent(44,6977);
   hdata_phidiff_cut1_bhabha->SetBinContent(57,7175);
   hdata_phidiff_cut1_bhabha->SetBinContent(58,10830);
   hdata_phidiff_cut1_bhabha->SetBinContent(59,11106);
   hdata_phidiff_cut1_bhabha->SetBinContent(60,22672);
   hdata_phidiff_cut1_bhabha->SetBinContent(61,211220);
   hdata_phidiff_cut1_bhabha->SetBinContent(62,97458);
   hdata_phidiff_cut1_bhabha->SetEntries(740071);

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
   hist_ratio15->SetBinContent(39,-0.7879821);
   hist_ratio15->SetBinContent(40,-4.359521);
   hist_ratio15->SetBinContent(41,-3.916327);
   hist_ratio15->SetBinContent(42,18.47502);
   hist_ratio15->SetBinContent(43,55.48473);
   hist_ratio15->SetBinContent(44,116.8438);
   hist_ratio15->SetBinContent(57,126.9445);
   hist_ratio15->SetBinContent(58,80.039);
   hist_ratio15->SetBinContent(59,22.89437);
   hist_ratio15->SetBinContent(60,2.63952);
   hist_ratio15->SetBinContent(61,-2.355408);
   hist_ratio15->SetBinContent(62,-2.863125);
   hist_ratio15->SetBinError(39,0.650968);
   hist_ratio15->SetBinError(40,0.3932842);
   hist_ratio15->SetBinError(41,1.128729);
   hist_ratio15->SetBinError(42,2.433048);
   hist_ratio15->SetBinError(43,3.500294);
   hist_ratio15->SetBinError(44,6.418877);
   hist_ratio15->SetBinError(57,6.71537);
   hist_ratio15->SetBinError(58,4.051344);
   hist_ratio15->SetBinError(59,2.458908);
   hist_ratio15->SetBinError(60,1.372263);
   hist_ratio15->SetBinError(61,0.4224063);
   hist_ratio15->SetBinError(62,0.6178212);
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
