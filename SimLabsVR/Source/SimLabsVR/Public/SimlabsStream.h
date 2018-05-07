#pragma once

namespace SimlabsStream
{ 


struct IReceiver
{
    virtual void ~IReceiver() = default;
    
    virtual void connect() = 0;
    virtual void disconnect() = 0;
};

struct IDecoder
{
    virtual void ~IDecoder() = default;
    
};

IReceiver *CreateReceiver(/*decoder*/);

IDecoder *CreateDecoder(/*texturesink*/);

} // namespace SimlabsStream
