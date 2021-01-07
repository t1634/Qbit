// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2018-2020, The TurtleCoin Developers
// Copyright (c) 2020-2021, Dave Brennan,  k7n2g, Qbit Currency
// Please see the included LICENSE file for more information.
//
/* Checkpoints now use internal-checkpoints-tool  found in scripts folder
   Please run npm install
   add up to date  checkpoints.csv file to internal-checkpoints-tool folder https://github.com/QbitNetwork/checkpoints.csv
   then run node checkpoints.js to add current checkpoints for synching daemon*/

#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote
{
    struct CheckpointData
    {
        uint32_t index;
        const char *blockId;
    };

    const std::initializer_list<CheckpointData> CHECKPOINTS = {};

   
    
} // namespace CryptoNote
