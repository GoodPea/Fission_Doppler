#define FirstTree_cxx
#include "FirstTree.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void FirstTree::Loop()
{
//   In a ROOT session, you can do:
//      root> .L FirstTree.C
//      root>FirstTree t
//      root> t.GetEntry(12); // Fill t data members with entry number 12
//      root> t.Show();       // Show values of entry 12
//      root> t.Show(16);     // Read and show values of entry 16
//      root> t.Loop();       // Loop on all entries
//
//
//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
// by  b_branchname->GetEntry(ientry); //read only this branch
//
// TH2D* his;
// his = new TH2D("his", "Histogram", 10,0,10);

// "Command /" comments out a line



// Goals for this project
  // Create a new value for the velocity of the ff
  // Import the angle file and use it to check for angle
    // Reject if angle > .5
  // Record angle of each gamma



  //Process of making new velocity leaf
    // Must make a new leaf, where v = sqrt(2KE/M)

  // Process of sorting by heavy particle angle??
    // I know tha the frisch grid can give a determination of angle, but how?

// open cosine file

//file.open("cosines.csv", ios::in);



// string line

// This is a while loop that will persist because getline() is a function that
// moves through the file and checks if there is another line in the file
// If there is no next line getline() = False, which terminates the Loop. Neat.

// TGraph* g_cosines;
//g_cosines =  new TGraph("cosines.csv");

// What we've done here is create a graph of cos(theta) vs detector #. Not what
//this root function was used for
//g_cosines->Eval(“””detector #”””)

// This function gives us the cos(theta) for our given detector where # = 1-110.












// I would like to loop over each part of a branch to create ff_v
// t -> GetEntry(i)
// x would be length of x

// In a case where we want the time difference between two different events




double values;

 TH2D* his = new TH2D("his", "Histogram", 100,60,200,100,0,350);
 // Make a leaf in a similar fassion to Histogram
  //declare a new object

// TH2D* Vhis = new TH2D("Vhis", "Histogram", 100,60,200,100,0,350);


   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
     // The main for loop
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;
      // Loads the next entry
      his->Fill(fA1,fKE1+fKE2);
      // slowly fill this new leaf with v = sqrt(2KE/M)

      //DOPPLER
      // For the sake of efficiency, the first lines should discard cosines
      // General structure for now
      // if(condition){Action}

      // Define ff_angle

    //  if(ff_angle>.05){return;} // Note that ff_angle is not yet defined
    //  else
    //  {Long64_t Filtered_Events -> Fill(jentry);
    }


//
    //  velocity->Fill(sqrt(2*(fKEH/(1.60218*pow(10, -16))/(fAH/(1.66054*pow(10, -27)))));   // Gives velocity
    //  vhis->Fill(fA1, velocity);          // Fill Vel. historgam

    //  beta -> Fill(velocity/299792458);
    //  CorE -> Fill(KGAMMA*sqrt((1-beta*cos(theta))/(1+beta)));
        // This line needs to act upon the gamma energy, and not the energy of
        // the


his ->Draw("COLZ");
}
