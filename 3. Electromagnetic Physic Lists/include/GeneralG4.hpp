#ifndef GENERALG4_HG4
#define GENERALG4_HG4

// Globals
#include "globals.hh"

// System Of Units
#include "G4SystemOfUnits.hh"
#include "G4UnitsTable.hh"

// Volumes
#include "G4LogicalVolume.hh"
#include "G4VPhysicalVolume.hh"
#include "G4PVPlacement.hh"
#include "G4LogicalVolumeStore.hh"

// Geometry
#include "G4Box.hh"

// Elements and materials for the volumes
#include "G4NistManager.hh"
#include "G4Material.hh"
#include "G4Element.hh"

// Particles Definition Class
#include "G4ParticleDefinition.hh"

// Electromagnetic physics definition
#include "G4EmStandardPhysics.hh"
#include "G4EmParameters.hh"

// Particle to be used in the simulation
// * Bosons
#include "G4ChargedGeantino.hh"
#include "G4Geantino.hh"
#include "G4Gamma.hh"
#include "G4OpticalPhoton.hh"

// * leptons
#include "G4MuonPlus.hh"
#include "G4MuonMinus.hh"
#include "G4NeutrinoMu.hh"
#include "G4AntiNeutrinoMu.hh"

#include "G4Electron.hh"
#include "G4Positron.hh"
#include "G4NeutrinoE.hh"
#include "G4AntiNeutrinoE.hh"

// * Mesons
#include "G4PionPlus.hh"
#include "G4PionMinus.hh"
#include "G4PionZero.hh"
#include "G4Eta.hh"
#include "G4EtaPrime.hh"

#include "G4KaonPlus.hh"
#include "G4KaonMinus.hh"
#include "G4KaonZero.hh"
#include "G4AntiKaonZero.hh"
#include "G4KaonZeroLong.hh"
#include "G4KaonZeroShort.hh"

// * Baryons
#include "G4Proton.hh"
#include "G4AntiProton.hh"
#include "G4Neutron.hh"
#include "G4AntiNeutron.hh"

// * Nuclei
#include "G4Deuteron.hh"
#include "G4Triton.hh"
#include "G4Alpha.hh"
#include "G4GenericIon.hh"

// Table with all the particles
#include "G4ParticleTable.hh"

// Physical process maganer
#include "G4ProcessManager.hh"

// Events
#include "G4Event.hh"
#include "G4ParticleGun.hh"

#endif // GENERALG4_HG4
