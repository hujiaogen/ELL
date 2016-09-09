////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Project:  Embedded Machine Learning Library (EMLL)
//  File:     ModelSaveArguments.h (common)
//  Authors:  Ofer Dekel
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

// utilities
#include "CommandLineParser.h"
#include "OutputStreamImpostor.h"

// stl
#include <string>

namespace emll
{
namespace common
{
    /// <summary> A struct that holds command line parameters for saving models. </summary>
    struct ModelSaveArguments
    {
        /// <summary> The filename to store the output model in. </summary>
        std::string outputModelFilename = "";

        utilities::OutputStreamImpostor outputModelStream;
    };

    /// <summary> A version of ModelSaveArguments that adds its members to the command line parser. </summary>
    struct ParsedModelSaveArguments : public ModelSaveArguments, public utilities::ParsedArgSet
    {
        /// <summary> Adds the arguments to the command line parser. </summary>
        ///
        /// <param name="parser"> [in,out] The parser. </param>
        virtual void AddArgs(utilities::CommandLineParser& parser);

        /// <summary> Check arguments. </summary>
        ///
        /// <param name="parser"> The parser. </param>
        ///
        /// <returns> An utilities::CommandLineParseResult. </returns>
        virtual utilities::CommandLineParseResult PostProcess(const utilities::CommandLineParser& parser);
    };
}
}
