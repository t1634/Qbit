// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2018-2020, The TurtleCoin Developers
// Copyright (c) 2020-2021, Dave Brennan,  k7n2g, Qbit Currency
// Please see the included LICENSE file for more information.

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

    const std::initializer_list<CheckpointData> CHECKPOINTS = {
    {100, "8ea95f88322a9e25ecc95f9c98ead6e5c827444794ceb3953a64c3bbf5035845"},
    {200, "e7592491b61abece33942ecaa12e30b0513e25b89417b3be71f5c4a1678e2be1"},
    {300, "6e50daa1ab6141057688f73e9420e16935e2f98ed1bdfa0d7d7169c773f18052"}, 
    {400, "079035010cef703171cd318b0704a8a3f0cf5dda1cbf0abe73b3a927ed1c83c4"},
    {500, "c5b72e41f6420c902a615ab2ed9409101462fe64c46b7bdef7360d7ac026572b"},
    {600, "88d05e642c068c1973c2f82be7b85f765e4c01d29a018bc9a2108e0bf8eefe3a"},
    {700, "ea28a06e906669da990f02b8b484573c1058f8ae11c385276e3c3595dc8e08de"},
    {800, "09c24d1ab68fc4d6133307fd85d20f0bbdf6b06a0234234199a609601f559111"},
    {900, "80e884298a84fd905f429c9d54c98e400b3690621440c960d2ab0e60a0c501ec"},
    {1000, "4dee544dba5c0cc3b684af0f6036207f4b78cd652c7ab872642b16bd34a49208"}};

   
    
} // namespace CryptoNote
