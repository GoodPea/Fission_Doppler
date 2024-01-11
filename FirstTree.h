//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Nov  7 14:16:32 2023 by ROOT version 6.28/06
// from TTree comboTree/comboTree
// found on file: /Users/ethanschneider/Dropbox (University of Michigan)/FISSION_GROUP/gsExp/combo100.root
//////////////////////////////////////////////////////////

#ifndef FirstTree_h
#define FirstTree_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class FirstTree {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Double_t        fT;
   Double_t        fAL;
   Double_t        fAH;
   Double_t        fKEL;
   Double_t        fKEH;
   Double_t        fThetaL;
   Double_t        fThetaH;
   Double_t        fEX;
   Double_t        fAn1;
   Double_t        fAn2;
   Double_t        fGr1;
   Double_t        fGr2;
   Double_t        fCat;
   Double_t        fA1;
   Double_t        fA2;
   Double_t        fKE1;
   Double_t        fKE2;
   Double_t        fTheta1;
   Double_t        fTheta2;
   Double_t        fPres;
   Int_t           gMult;
   Int_t           gTrigMult;
   Int_t           gTrig[2];
   ULong64_t       gTrigTime[2];
   Int_t           gID[14];   //[gMult]
   Float_t         gErg[14];   //[gMult]
   ULong64_t       gTime[14];   //[gMult]
   Int_t           gFlag[14];   //[gMult]
   UShort_t        gType[14];   //[gMult]

   // List of branches
   TBranch        *b_fT;   //!
   TBranch        *b_fAL;   //!
   TBranch        *b_fAH;   //!
   TBranch        *b_fKEL;   //!
   TBranch        *b_fKEH;   //!
   TBranch        *b_fThetaL;   //!
   TBranch        *b_fThetaH;   //!
   TBranch        *b_fEX;   //!
   TBranch        *b_fAn1;   //!
   TBranch        *b_fAn2;   //!
   TBranch        *b_fGr1;   //!
   TBranch        *b_fGr2;   //!
   TBranch        *b_fCat;   //!
   TBranch        *b_fA1;   //!
   TBranch        *b_fA2;   //!
   TBranch        *b_fKE1;   //!
   TBranch        *b_fKE2;   //!
   TBranch        *b_fTheta1;   //!
   TBranch        *b_fTheta2;   //!
   TBranch        *b_fPres;   //!
   TBranch        *b_gMult;   //!
   TBranch        *b_gTrigMult;   //!
   TBranch        *b_gTrig;   //!
   TBranch        *b_gTrigTime;   //!
   TBranch        *b_gID;   //!
   TBranch        *b_gErg;   //!
   TBranch        *b_gTime;   //!
   TBranch        *b_gFlag;   //!
   TBranch        *b_gType;   //!

   FirstTree(TTree *tree=0);
   virtual ~FirstTree();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef FirstTree_cxx
FirstTree::FirstTree(TTree *tree) : fChain(0)
{
// When one makes a "FirstTree", this code is run 
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/Users/ethanschneider/Dropbox (University of Michigan)/FISSION_GROUP/gsExp/combo100.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/Users/ethanschneider/Dropbox (University of Michigan)/FISSION_GROUP/gsExp/combo100.root");
      }
      f->GetObject("comboTree",tree);

   }
   Init(tree);
}

FirstTree::~FirstTree()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t FirstTree::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t FirstTree::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void FirstTree::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

// What is this doing???
  // This is linking our variables to different branches and leaves
   fChain->SetBranchAddress("fT", &fT, &b_fT);
   fChain->SetBranchAddress("fAL", &fAL, &b_fAL);
   fChain->SetBranchAddress("fAH", &fAH, &b_fAH);
   fChain->SetBranchAddress("fKEL", &fKEL, &b_fKEL);
   fChain->SetBranchAddress("fKEH", &fKEH, &b_fKEH);
   fChain->SetBranchAddress("fThetaL", &fThetaL, &b_fThetaL);
   fChain->SetBranchAddress("fThetaH", &fThetaH, &b_fThetaH);
   fChain->SetBranchAddress("fEX", &fEX, &b_fEX);
   fChain->SetBranchAddress("fAn1", &fAn1, &b_fAn1);
   fChain->SetBranchAddress("fAn2", &fAn2, &b_fAn2);
   fChain->SetBranchAddress("fGr1", &fGr1, &b_fGr1);
   fChain->SetBranchAddress("fGr2", &fGr2, &b_fGr2);
   fChain->SetBranchAddress("fCat", &fCat, &b_fCat);
   fChain->SetBranchAddress("fA1", &fA1, &b_fA1);
   fChain->SetBranchAddress("fA2", &fA2, &b_fA2);
   fChain->SetBranchAddress("fKE1", &fKE1, &b_fKE1);
   fChain->SetBranchAddress("fKE2", &fKE2, &b_fKE2);
   fChain->SetBranchAddress("fTheta1", &fTheta1, &b_fTheta1);
   fChain->SetBranchAddress("fTheta2", &fTheta2, &b_fTheta2);
   fChain->SetBranchAddress("fPres", &fPres, &b_fPres);
   fChain->SetBranchAddress("gMult", &gMult, &b_gMult);
   fChain->SetBranchAddress("gTrigMult", &gTrigMult, &b_gTrigMult);
   fChain->SetBranchAddress("gTrig[2]", gTrig, &b_gTrig);
   fChain->SetBranchAddress("gTrigTime[2]", gTrigTime, &b_gTrigTime);
   fChain->SetBranchAddress("gID", gID, &b_gID);
   fChain->SetBranchAddress("gErg", gErg, &b_gErg);
   fChain->SetBranchAddress("gTime", gTime, &b_gTime);
   fChain->SetBranchAddress("gFlag", gFlag, &b_gFlag);
   fChain->SetBranchAddress("gType", gType, &b_gType);
   Notify();
}

Bool_t FirstTree::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void FirstTree::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t FirstTree::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef FirstTree_cxx
