#include "ompl/geometric/planners/rrt/InformedRRTstarConnect.h"

ompl::geometric::InformedRRTstarConnect::InformedRRTstarConnect(const base::SpaceInformationPtr &si) : RRTstarConnect(si)
{
    // Set my name:
    setName("InformedRRTstarConnect");

    // Configure RRTstar to be InformedRRT*:
    setAdmissibleCostToCome(true);
    setInformedSampling(true);
    setTreePruning(true);
    setPrunedMeasure(true);

    // Remove those parameters:
    params_.remove("use_admissible_heuristic");
    params_.remove("informed_sampling");
    params_.remove("pruned_measure");
    params_.remove("tree_pruning");
}
