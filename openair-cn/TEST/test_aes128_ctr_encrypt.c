#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>

#include "test_util.h"

#include "secu_defs.h"

#include <nettle/nettle-meta.h>
#include <nettle/aes.h>
#include <nettle/ctr.h>

static void test_cipher_ctr(const struct nettle_cipher *cipher, const uint8_t *key,
    unsigned key_length, const uint8_t *cleartext, unsigned length,
    const uint8_t *ciphertext, const uint8_t *ictr)
{
    void *ctx = malloc(cipher->context_size);
    uint8_t *data = malloc(length);
    uint8_t *ctr = malloc(cipher->block_size);

    cipher->set_encrypt_key(ctx, key_length, key);
    memcpy(ctr, ictr, cipher->block_size);

    ctr_crypt(ctx, cipher->encrypt,
        cipher->block_size, ctr,
        length, data, cleartext);

    if (compare_buffer(data, length, ciphertext, length) != 0)
    {
        fail("Fail: test_cipher_ctr");
    }

    free(ctx);
    free(data);
    free(ctr);
}

void doit (void)
{
    /* From NIST spec 800-38a on AES modes,
     * 
     * http://csrc.nist.gov/CryptoToolkit/modes/800-38_Series_Publications/SP800-38A.pdf
     *
     * F.5  CTR Example Vectors
     */
    /* F.5.1  CTR-AES128.Encrypt */
    test_cipher_ctr(&nettle_aes128,
                    HL("2b7e151628aed2a6abf7158809cf4f3c"),
                    HL("6bc1bee22e409f96e93d7e117393172a"
                       "ae2d8a571e03ac9c9eb76fac45af8e51"
                       "30c81c46a35ce411e5fbc1191a0a52ef"
                       "f69f2445df4f9b17ad2b417be66c3710"),
                    H("874d6191b620e3261bef6864990db6ce"
                      "9806f66b7970fdff8617187bb9fffdff"
                      "5ae4df3edbd5d35e5b4f09020db03eab"
                      "1e031dda2fbe03d1792170a0f3009cee"),
                    H("f0f1f2f3f4f5f6f7f8f9fafbfcfdfeff"));
}