// Copyright (c) 2009-2012 The Bitcoin developers
// Copyright (c) 2011-2012 Litecoin Developers
// Copyright (c) 2013 Gamecoin Developers

// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <boost/assign/list_of.hpp> // for 'map_list_of()'
#include <boost/foreach.hpp>

#include "checkpoints.h"

#include "main.h"
#include "uint256.h"

namespace Checkpoints
{
    typedef std::map<int, uint256> MapCheckpoints;

    //
    // What makes a good checkpoint block?
    // + Is surrounded by blocks with reasonable timestamps
    //   (no blocks before with a timestamp after, none after with
    //    timestamp before)
    // + Contains no strange transactions
    //

     static MapCheckpoints mapCheckpoints =
            boost::assign::map_list_of
            ( 0, uint256("0x12a765e31ffd4059bada1e25190f6e98c99d9714d334efa41a195a7e7e04bfe2"))
            ( 15000, uint256("0xdb0386f2b3c77be8406e5f6e0b0f17d116a20e44ab312d81c78cabdb0a25fdfa"))
            ( 15500, uint256("0x5d056501ff02bf9220fb92f8ef6c5b18f4427216bf0c3e9c0de0ea26a78d6b1c"))
            ( 16000, uint256("0x1238760df809ed04c7c835f2ccc2230f1a12060c4af4ccf4a5076c43b3ec00f6"))
            ( 16500, uint256("0xc1aa0164d8262d606a5345e0b329af0833b1931c066e6ae0cd514d7943fc6e49"))
            ( 17000, uint256("0xa9b9ce5ab12059921ee9fab0e2ede9947181a924e36de5bbb9701e31408c92e3"))
            ( 17500, uint256("0x7ef8701746335ee4ab4c69173aacba0cf17ddce96cdcc8557962e9bc499e76f7"))
            ( 18000, uint256("0x500c4a1edf9ca19a3d7abff3338d45a7e76d28b324dbb212dc5d4dee1cb07cc9"))
            ( 18500, uint256("0x181d8fb8bb94ca4f1147c9d8b3d7ea56d5bcc4145f853e6a4333eb7eb791e812"))
            ( 19000, uint256("0x285c6caac0624e68279cbd60695dccc0f43a69b1be70776dd694befdcc21cac7"))
            ( 19100, uint256("0x47373775b7db1213a9027a741b5225e5b96ef1c2932ba04e9ff178b951838ed1"))
            ( 19200, uint256("0xaebd1cb984fe55090254fbd766275d007863f02a4327a0d655f881e7b8fe5bdd"))
            ( 19264, uint256("0xa8ea7f271fd5c0430df91c9e62604932624bbac96eb8fc015faf284f6a712c4b"))
             ;



    bool CheckBlock(int nHeight, const uint256& hash)
    {
        if (fTestNet) return true; // Testnet has no checkpoints

        MapCheckpoints::const_iterator i = mapCheckpoints.find(nHeight);
        if (i == mapCheckpoints.end()) return true;
        return hash == i->second;
    }

    int GetTotalBlocksEstimate()
    {
        if (fTestNet) return 0;
        return mapCheckpoints.rbegin()->first;
    }

    CBlockIndex* GetLastCheckpoint(const std::map<uint256, CBlockIndex*>& mapBlockIndex)
    {
        if (fTestNet) return NULL;

        BOOST_REVERSE_FOREACH(const MapCheckpoints::value_type& i, mapCheckpoints)
        {
            const uint256& hash = i.second;
            std::map<uint256, CBlockIndex*>::const_iterator t = mapBlockIndex.find(hash);
            if (t != mapBlockIndex.end())
                return t->second;
        }
        return NULL;
    }
}
