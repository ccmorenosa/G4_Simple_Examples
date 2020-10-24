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
  G4int n_of_particles = 1;
  particle_gun = new G4ParticleGun(n_of_particles);

  // Find the definition of the particle by name
  G4ParticleTable* particle_table = G4ParticleTable::GetParticleTable();
  G4ParticleDefinition* particle = particle_table->FindParticle(particle_name);
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

  // Find the definition of the particle by name
  G4ParticleTable* particle_table = G4ParticleTable::GetParticleTable();
  G4ParticleDefinition* particle = particle_table->FindParticle("proton");
  // Set particle for the gun
  particle_gun->SetParticleDefinition(particle);
  // Set the energy of the particle
  particle_gun->SetParticleEnergy(0.5*GeV);
  // Set the position of the particle gun
  particle_gun->SetParticlePosition(G4ThreeVector(0.0*m, 1.0*m, 2.0*m));
  // Set the direction in which the particle will be shooted
  particle_gun->SetParticleMomentumDirection(G4ThreeVector(0.0, 0.0, -1.0));
  particle_gun->GeneratePrimaryVertex(an_event);

  particle = particle_table->FindParticle("proton");
  // Set particle for the gun
  particle_gun->SetParticleDefinition(particle);
  // Set the energy of the particle
  particle_gun->SetParticleEnergy(0.5*GeV);
  // Set the position of the particle gun
  particle_gun->SetParticlePosition(G4ThreeVector(0.0*m, -1.0*m, -2.0*m));
  // Set the direction in which the particle will be shooted
  particle_gun->SetParticleMomentumDirection(G4ThreeVector(0.0, 0.0, 1.0));
  particle_gun->GeneratePrimaryVertex(an_event);

  G4double t0 =  0.0*s;
  G4PrimaryVertex* a_vertex = an_event->GetPrimaryVertex();
  while (a_vertex) {
    a_vertex->SetT0(t0);
    a_vertex = a_vertex->GetNext();
  }

}

//
// H4PrimaryGenerator.cg4 end here
//
