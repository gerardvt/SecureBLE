/*
 * Copyright (C) 2018 Marin Peko
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#ifndef ECDHKeyExchange_H
#define ECDHKeyExchange_H

#include <stdint.h>
#include <stddef.h>

#include <Stream.h>

class ECDHKeyExchange
{
public:
    ECDHKeyExchange();
    ~ECDHKeyExchange();

    void generateKeys();
    void clearKeys();
    void sendPublicKey(Stream& stream);

    void printPublicKey(Stream& stream);
    void printPrivateKey(Stream& stream);

private:
    char const * keyToStr(uint8_t const *key);

    static const size_t KEY_SIZE = 32;

    uint8_t m_publicKey[KEY_SIZE];
    uint8_t m_privateKey[KEY_SIZE];
};

#endif /* ECDH_H */
