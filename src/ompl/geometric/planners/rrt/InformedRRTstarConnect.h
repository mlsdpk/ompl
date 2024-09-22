#ifndef OMPL_GEOMETRIC_PLANNERS_RRT_INFORMED_RRTSTAR_CONNECT_
#define OMPL_GEOMETRIC_PLANNERS_RRT_INFORMED_RRTSTAR_CONNECT_

#include "ompl/geometric/planners/rrt/RRTstarConnect.h"

namespace ompl
{
    namespace geometric
    {

        /** \brief Informed RRT* */
        class InformedRRTstarConnect : public RRTstarConnect
        {
        public:
            /** \brief Constructor */
            InformedRRTstarConnect(const base::SpaceInformationPtr &si);
        };
    }
}

#endif
