////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Project:  Embedded Machine Learning Library (EMLL)
//  File:     Example.cpp (dataset)
//  Authors:  Ofer Dekel
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Example.h"

namespace emll
{
namespace dataset
{
    void dataset::WeightLabel::Print(std::ostream& os) const
    {
        os << "(" << weight << ", " << label << ")";
    }
}
}
