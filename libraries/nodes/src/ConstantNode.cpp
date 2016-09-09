////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Project:  Embedded Machine Learning Library (EMLL)
//  File:     ConstantNode.cpp (nodes)
//  Authors:  Ofer Dekel
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "ConstantNode.h"

// model
#include "Node.h"

namespace emll
{
namespace nodes
{
    ConstantNode<double>* AddNodeToModelTransformer(const model::PortElements<double>& input, const predictors::ConstantPredictor& predictor, model::ModelTransformer& transformer)
    {
        return transformer.AddNode<ConstantNode<double>>(predictor.GetValue());
    }
}
}
