void doComboLoop()
{
  printf("FirstTree.C\n");
//  gROOT->ProcessLine(".L GSUtil_cc.so");
  gROOT->ProcessLine(".L FirstTree.C");
  gROOT->ProcessLine("FirstTree* n = new FirstTree()"); // Constuctor
  gROOT->ProcessLine("n->Loop()");
  // gStyle->SetPalette(1);
}

// When you make a class (a type of object). A constrcutor dictates what happens
// when you make an object of that class
// You also get a descructor to account for memory
// There are times where you want to make your own
