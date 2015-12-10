#ifndef SIMG4INTERFACE_IGEANTSVC_H
#define SIMG4INTERFACE_IGEANTSVC_H

// Gaudi
#include "GaudiKernel/IService.h"

// Geant
class G4Event;

namespace sim {
class IGeantSvc: virtual public IService {
public:
  DeclareInterfaceID(sim::IGeantSvc,1,0);
  virtual StatusCode processEvent(G4Event* aEvent) = 0;
  virtual StatusCode retrieveEvent(const G4Event*& aEvent) = 0;
  virtual StatusCode terminateEvent() = 0;
};
}
#endif /* SIMG4INTERFACE_IGEANTSVC_H */