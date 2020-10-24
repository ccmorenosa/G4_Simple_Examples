#include "H4PrimaryGenerator.hpp"

//**********************************//
// H4PrimaryGenerator constructor  //
//----------------------------------//
//                                  //
//  Set the values for the          //
//  particle gun                    //
//                                  //
//**********************************//
H4PrimaryGenerator::H4PrimaryGenerator (
  G4String particle_name,
  G4double energy,
  G4ThreeVector position,
  G4ThreeVector momentum_direction
) : G4VUserPrimaryGeneratorAction(),
particle_gun(0) {
  particle_gun = new G4GeneralParticleSource();
  particle_gun->SetMultipleVertex(true);
}

//**********************************//
// H4PrimaryGenerator constructor  //
//----------------------------------//
//                                  //
//  Delete the particle gun         //
//                                  //
//**********************************//
H4PrimaryGenerator::~H4PrimaryGenerator () {
  delete particle_gun;
}

//**************//
// Run an event //
//**************//
void H4PrimaryGenerator::GeneratePrimaries (G4Event* an_event) {
  particle_gun->GeneratePrimaryVertex(an_event);
}

//
// H4PrimaryGenerator.cg4 end here
//
