//
// Created by vasyl on 4/3/23.
//

#ifndef BLOCKCHAIN_SANDBOX_BLOCK_H
#define BLOCKCHAIN_SANDBOX_BLOCK_H

#include <cstdint>
#include <iostream>

using namespace std;

class Block {
public:
    string sPrevHash;

    Block(uint32_t nIndexIn, const string &sDataIn);

    string GetHash();

    void MineBlock(uint32_t nDifficulty);

private:
    uint32_t _nIndex;
    int64_t _nNonce;
    string _sData;
    string _sHash;
    time_t _tTime;

    string _CalculateHash() const;
};

#endif //BLOCKCHAIN_SANDBOX_BLOCK_H
