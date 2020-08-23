// Geant 4
#include "G4RunManager.hh"
#include "G4UImanager.hh"

// Project Libraries
#include "H4Detector.hpp"
#include "H4PhysicList.hpp"
#include "H4Actions.hpp"

int main(int argc, char const *argv[]) {

  // Construct the default run manager
  G4RunManager *run_manager = new G4RunManager;

  // Set mandatory initialization  classes
  run_manager->SetUserInitialization(new H4Detector);
  run_manager->SetUserInitialization(new H4PhysicList);
  run_manager->SetUserInitialization(new H4Actions);

  // Initialize Genat 4 kernel
  run_manager->Initialize();

  // Get the current pointer to the UI manager and set the verbosities
  G4UImanager *UI = G4UImanager::GetUIpointer();
  UI->ApplyCommand("/run/verbose 1");
  UI->ApplyCommand("/event/verbose 1");
  UI->ApplyCommand("/tracking/verbose 1");

  // Start a run
  int number_of_events = 1;
  run_manager->BeamOn(number_of_events);

  // Job termination
  delete run_manager;
  return 0;
}
