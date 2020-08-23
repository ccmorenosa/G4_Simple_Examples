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
  // Set the number of particles that will be shooted with the gun
  G4int n_of_particles = 1;
  particle_gun = new G4ParticleGun(n_of_particles);

  // Find the definition of the particle by name
  G4ParticleTable* particle_table = G4ParticleTable::GetParticleTable();
  G4ParticleDefinition* particle = particle_table->FindParticle(particle_name);

  // Set particle for the gun
  particle_gun->SetParticleDefinition(particle);

  // Set the energy of the particle
  particle_gun->SetParticleEnergy(energy);

  // Set the position of the particle gun
  particle_gun->SetParticlePosition(position);

  // Set the direction in which the particle will be shooted
  particle_gun->SetParticleMomentumDirection(momentum_direction);
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
