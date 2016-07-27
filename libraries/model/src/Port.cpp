////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Project:  Embedded Machine Learning Library (EMLL)
//  File:     Port.cpp (model)
//  Authors:  Chuck Jacobs
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Port.h"

/// <summary> model namespace </summary>
namespace model
{
    //
    // Specializations of GetPortType
    //
    template <>
    Port::PortType Port::GetPortType<double>()
    {
        return Port::PortType::Real;
    }

    template <>
    Port::PortType Port::GetPortType<int>()
    {
        return Port::PortType::Integer;
    }

    template <>
    Port::PortType Port::GetPortType<bool>()
    {
        return Port::PortType::Boolean;
    }

    // /// Inherited from ISerializable
    // utilities::ObjectDescription Port::GetDescription() const
    // {
    //     auto result = utilities::ObjectDescription::FromType(*this);
    //     result.AddField("dummy", 0);
    //     // ???
    //     return result;
    // }

}
