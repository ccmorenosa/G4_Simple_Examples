#include "H4PhysicList.hpp"

//**************************//
// H4PhysicList constructor //
//--------------------------//
//                          //
//        Do nothing        //
//                          //
//**************************//
H4PhysicList::H4PhysicList () : G4VUserPhysicsList() {}

//**************************//
// H4PhysicList destructor  //
//--------------------------//
//                          //
//        Do nothing        //
//                          //
//**************************//
H4PhysicList::~H4PhysicList () {}

//*******************//
// Construct all the //
// particles for the //
// simulation        //
//*******************//
void H4PhysicList::ConstructParticle () {
  // Gamma
  G4Gamma::GammaDefinition();

  // Leptons
  G4Electron::ElectronDefinition();
  G4Positron::PositronDefinition();

  //  Barions
  G4Proton::ProtonDefinition();

  // Muon
  G4MuonMinus::MuonMinusDefinition();
  G4MuonPlus::MuonPlusDefinition();
}

//*******************//
// Construct all the //
// process for the   //
// simulation        //
//*******************//
void H4PhysicList::ConstructProcess () {
  // Construct transportation event
  AddTransportation();
}

//
// H4PhysicList.cpp end here
//
