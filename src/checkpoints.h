// Copyright (c) 2017-2019 The Energi Core developers
// Copyright (c) 2009-2015 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_CHECKPOINTS_H
#define BITCOIN_CHECKPOINTS_H

#include "uint256.h"

#include <map>

class CBlockIndex;
struct CCheckpointData;

/**
 * Block-chain checkpoints are compiled-in sanity checks.
 * They are updated every release or three.
 */
namespace Checkpoints
{

//! Returns last CBlockIndex* in mapBlockIndex that is an active checkpoint
CBlockIndex* GetLastSeenCheckpoint(const CCheckpointData& data);

//! Validate block hash against checkpoint, if any
bool ValidateCheckpoint(const CCheckpointData& data, int height, const uint256 &hash);

} //namespace Checkpoints

#endif // BITCOIN_CHECKPOINTS_H
