#include "H4PhysicList.hpp"

//**************************//
// H4PhysicList constructor //
//--------------------------//
//                          //
// Add electromagnetic      //
// physics list             //
//                          //
//**************************//
H4PhysicList::H4PhysicList () :
G4VUserPhysicsList(),
em_physics_list(nullptr) {
  // set default cut value
  SetDefaultCutValue(1.0*mm);

  SetVerboseLevel(1);

  // Add electromagnetic physics list
  delete em_physics_list;
  em_physics_list = new G4EmStandardPhysics();

  // Electromagnetic options
  G4EmParameters::Instance()->SetBuildCSDARange(true);
  G4EmParameters::Instance()->SetGeneralProcessActive(false);

  // Set energy range for the cuts
  G4ProductionCutsTable::GetProductionCutsTable()->SetEnergyRange(100*eV,1*GeV);

  //add new units for cross sections
  new G4UnitDefinition( "mm2/g", "mm2/g","Surface/Mass", mm2/g);
  new G4UnitDefinition( "um2/mg", "um2/mg","Surface/Mass", um*um/mg);
}


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
  // pseudo-particles
    G4Geantino::GeantinoDefinition();
    G4ChargedGeantino::ChargedGeantinoDefinition();

  // gamma
    G4Gamma::GammaDefinition();

  // optical photon
    G4OpticalPhoton::OpticalPhotonDefinition();

  // leptons
    G4Electron::ElectronDefinition();
    G4Positron::PositronDefinition();
    G4MuonPlus::MuonPlusDefinition();
    G4MuonMinus::MuonMinusDefinition();

    G4NeutrinoE::NeutrinoEDefinition();
    G4AntiNeutrinoE::AntiNeutrinoEDefinition();
    G4NeutrinoMu::NeutrinoMuDefinition();
    G4AntiNeutrinoMu::AntiNeutrinoMuDefinition();

  // mesons
    G4PionPlus::PionPlusDefinition();
    G4PionMinus::PionMinusDefinition();
    G4PionZero::PionZeroDefinition();
    G4Eta::EtaDefinition();
    G4EtaPrime::EtaPrimeDefinition();
    G4KaonPlus::KaonPlusDefinition();
    G4KaonMinus::KaonMinusDefinition();
    G4KaonZero::KaonZeroDefinition();
    G4AntiKaonZero::AntiKaonZeroDefinition();
    G4KaonZeroLong::KaonZeroLongDefinition();
    G4KaonZeroShort::KaonZeroShortDefinition();

  // barions
    G4Proton::ProtonDefinition();
    G4AntiProton::AntiProtonDefinition();
    G4Neutron::NeutronDefinition();
    G4AntiNeutron::AntiNeutronDefinition();

  // ions
    G4Deuteron::DeuteronDefinition();
    G4Triton::TritonDefinition();
    G4Alpha::AlphaDefinition();
    G4GenericIon::GenericIonDefinition();
}

//*******************//
// Construct all the //
// process for the   //
// simulation        //
//*******************//
void H4PhysicList::ConstructProcess () {
  // Construct transportation event
  AddTransportation();

  // Construct electromagnetic processes
  em_physics_list->ConstructProcess();
}

//
// H4PhysicList.cpp end here
//
