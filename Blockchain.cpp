//
// Created by vasyl on 4/3/23.
//

#include "Blockchain.h"

Blockchain::Blockchain() {
    _vChain.emplace_back(0, "Genesis Block");
    _nDifficulty = 6;
}

void Blockchain::AddBlock(Block bNew) {
    bNew.sPrevHash = _GetLastBlock().GetHash();
    bNew.MineBlock(_nDifficulty);
    _vChain.push_back(bNew);
}

Block Blockchain::_GetLastBlock() const {
    return _vChain.back();
}