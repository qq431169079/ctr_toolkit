#ifndef _CTR_DEVKEYS_H_
#define _CTR_DEVKEYS_H_
//#define _DEBUG_KEY_BUILD_

// Issuers
static const unsigned char xs9_Issuer[64] =
{
	0x52, 0x6F, 0x6F, 0x74, 0x2D, 0x43, 0x41, 0x30, 
	0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x34, 0x2D, 
	0x58, 0x53, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 
	0x30, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const unsigned char cpA_Issuer[64] =
{
	0x52, 0x6F, 0x6F, 0x74, 0x2D, 0x43, 0x41, 0x30, 
	0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x34, 0x2D, 
	0x43, 0x50, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 
	0x30, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// AES KEYS
static const unsigned char ctr_aes_common_key_dev0[16] =
{
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const unsigned char zeros_fixed_aesKey[16] =
{
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

/**
static const unsigned char system_fixed_aesKey[16] =
{
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
**/

//RSA Keys

static const unsigned char cpA_dpki_rsa_privExp[256] =
{
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const unsigned char cpA_dpki_rsa_pubMod[256] =
{
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const unsigned char xs9_dpki_rsa_privExp[256] =
{
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const unsigned char xs9_dpki_rsa_pubMod[256] =
{
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const unsigned char DevNcsdCfa_privExp[256] =
{
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const unsigned char DevNcsdCfa_pubMod[256] =
{
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

/**

static const unsigned char CXIAccessDesc_privExp[256] =
{
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const unsigned char CXIAccessDesc_pubMod[256] =
{
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

**/

//Certificates

static const unsigned char CIA_Certificate_Chain[2560] =
{
	0x00, 0x01, 0x00, 0x03, 0x19, 0x49, 0x42, 0x9D, 
	0x1E, 0x58, 0xA6, 0x2E, 0x7E, 0x8B, 0x56, 0xD1, 
	0xB7, 0x6A, 0xE3, 0x02, 0xFD, 0x8B, 0x97, 0x49, 
	0x1F, 0x77, 0x87, 0x45, 0xF7, 0x53, 0x88, 0xC4, 
	0xDD, 0x0B, 0xEB, 0x1D, 0xF1, 0x22, 0xFB, 0x96, 
	0x42, 0x15, 0x14, 0x97, 0x76, 0x4A, 0x53, 0xCF, 
	0x78, 0x15, 0x18, 0x45, 0xE4, 0x2C, 0xA8, 0xFD, 
	0xE4, 0x86, 0xFD, 0x2A, 0x4F, 0x53, 0xF8, 0xA1, 
	0xBA, 0x00, 0x8A, 0x74, 0x85, 0xFF, 0x73, 0xB3, 
	0xBF, 0x7E, 0x3C, 0x98, 0x07, 0x29, 0xD0, 0x65, 
	0x6B, 0x69, 0x32, 0x19, 0xAD, 0xE8, 0x35, 0xEB, 
	0x5F, 0xFF, 0xFC, 0xCB, 0x7C, 0xBB, 0x5E, 0x30, 
	0x7F, 0xE0, 0x68, 0x8B, 0x88, 0x8E, 0xF2, 0xD2, 
	0x05, 0x3F, 0xB7, 0xE7, 0x91, 0xE9, 0x85, 0xFD, 
	0x15, 0xEF, 0x10, 0xD7, 0x9C, 0xCA, 0x88, 0xD6, 
	0xBB, 0x15, 0xE8, 0xE4, 0x71, 0x4A, 0x98, 0xEE, 
	0x09, 0xBF, 0x7B, 0x8A, 0xF0, 0x53, 0x23, 0x2B, 
	0x64, 0x50, 0xE6, 0xD5, 0xFD, 0xFF, 0xC2, 0x0A, 
	0x6D, 0x1E, 0xA6, 0xA2, 0x38, 0x12, 0xE1, 0x01, 
	0x45, 0x25, 0xD5, 0x6D, 0x40, 0x82, 0x70, 0x3B, 
	0x86, 0x98, 0x69, 0x59, 0xA7, 0x3C, 0xD1, 0xA1, 
	0x43, 0x64, 0xD2, 0xC2, 0xDA, 0xEA, 0x96, 0xB0, 
	0x95, 0xF7, 0x6C, 0x46, 0xE4, 0xFF, 0x41, 0x55, 
	0x46, 0x5E, 0x70, 0xEF, 0x1E, 0xD3, 0x10, 0x53, 
	0xD9, 0x70, 0x11, 0xE0, 0x10, 0xCC, 0x93, 0xE7, 
	0x91, 0x40, 0x13, 0x68, 0x7F, 0xA3, 0xA8, 0x02, 
	0x99, 0x6D, 0x1E, 0x55, 0x7B, 0x1C, 0xCC, 0x7A, 
	0x7E, 0x8F, 0x58, 0x65, 0xC1, 0x74, 0x2E, 0x28, 
	0xE2, 0x6D, 0xEF, 0x38, 0xA9, 0x3A, 0xB5, 0xD8, 
	0x2D, 0x43, 0xEC, 0xCC, 0xBF, 0x0B, 0xEF, 0x22, 
	0xE1, 0xFD, 0x57, 0xE2, 0x86, 0x43, 0x33, 0x58, 
	0x2F, 0xED, 0xEA, 0xBC, 0x01, 0x2F, 0x98, 0x6D, 
	0xDF, 0xC3, 0xE9, 0x44, 0x79, 0x73, 0x47, 0x03, 
	0x08, 0x45, 0x5B, 0xDC, 0x57, 0xAA, 0x17, 0x0B, 
	0x84, 0x42, 0x7F, 0x73, 0xA2, 0x9B, 0x48, 0xF6, 
	0xDA, 0x13, 0x5F, 0x66, 0xC7, 0x45, 0xC1, 0x42, 
	0xA8, 0x4A, 0xFB, 0x0E, 0x6A, 0x5E, 0xED, 0x85, 
	0xD7, 0xB9, 0x71, 0x99, 0x36, 0xF8, 0xCE, 0x2B, 
	0x62, 0x1F, 0x39, 0x5F, 0x40, 0xDC, 0x03, 0xBE, 
	0xF8, 0x85, 0x4C, 0x11, 0x17, 0xFF, 0x0C, 0x12, 
	0x86, 0x41, 0xCC, 0x78, 0x43, 0xB9, 0x7B, 0x43, 
	0x46, 0xDB, 0x22, 0x6F, 0x60, 0x26, 0xAC, 0xB5, 
	0x6C, 0x27, 0x8B, 0x8E, 0x0E, 0xA7, 0x9A, 0x2D, 
	0x65, 0xEF, 0x79, 0x8E, 0x10, 0x78, 0xAD, 0x80, 
	0xED, 0x4B, 0x96, 0x04, 0xD2, 0xF0, 0x8B, 0x2C, 
	0xD6, 0x4A, 0x23, 0xA3, 0xDB, 0x27, 0x08, 0x33, 
	0xB4, 0x02, 0xF8, 0x08, 0x51, 0xF3, 0x5B, 0xED, 
	0x3E, 0xE4, 0x57, 0x7C, 0x66, 0x60, 0xFB, 0xF1, 
	0x6D, 0x94, 0x13, 0xE0, 0x9C, 0x91, 0x7A, 0x49, 
	0xD4, 0x2C, 0x6D, 0xA3, 0x75, 0xBC, 0x27, 0xF0, 
	0x23, 0x0D, 0xB9, 0x8F, 0x89, 0x73, 0xAB, 0x02, 
	0x7B, 0x52, 0x2C, 0xD5, 0x7E, 0xC0, 0x3D, 0x25, 
	0xE8, 0xB3, 0xFC, 0x34, 0x94, 0xC9, 0x7F, 0xB1, 
	0x08, 0xFE, 0x18, 0xC6, 0x8A, 0x43, 0x36, 0xE4, 
	0x6C, 0x26, 0xB6, 0xF2, 0x80, 0xD2, 0x7E, 0x34, 
	0xBE, 0x28, 0x7C, 0x3E, 0x46, 0x87, 0xBC, 0x9D, 
	0x77, 0x6B, 0x76, 0xD9, 0x28, 0xD1, 0xB6, 0x35, 
	0x2E, 0xC0, 0x34, 0x7D, 0x72, 0x94, 0xAA, 0x93, 
	0x60, 0x26, 0x8D, 0x26, 0xF5, 0xF6, 0x52, 0x06, 
	0x4A, 0xF2, 0x40, 0xD7, 0xD0, 0x0C, 0x7C, 0x5E, 
	0xA3, 0xC3, 0x2D, 0xE6, 0x2D, 0x9B, 0x5C, 0x4B, 
	0x4C, 0xAB, 0x6F, 0xD7, 0xBD, 0x37, 0x1D, 0x57, 
	0xC2, 0x16, 0x60, 0x95, 0x91, 0x0E, 0x4A, 0xD8, 
	0xE9, 0xED, 0x18, 0x1E, 0xF7, 0x61, 0x93, 0x61, 
	0x53, 0x89, 0x2D, 0x77, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x52, 0x6F, 0x6F, 0x74, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0x43, 0x41, 0x30, 0x30, 
	0x30, 0x30, 0x30, 0x30, 0x30, 0x34, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x81, 0x12, 0x2A, 0x46, 
	0xC9, 0xCC, 0x2D, 0xC4, 0xDF, 0x29, 0x30, 0xE4, 
	0xDF, 0x3F, 0x8C, 0x70, 0xA0, 0x78, 0x94, 0x87, 
	0x75, 0xAD, 0x5E, 0x9A, 0xA6, 0x04, 0xC5, 0xB4, 
	0xD8, 0xEA, 0xFF, 0x2A, 0xA1, 0xD2, 0x14, 0x67, 
	0x65, 0x64, 0xEF, 0xCA, 0x28, 0xCC, 0x00, 0x15, 
	0x45, 0x54, 0xA1, 0xA3, 0xEA, 0x13, 0x79, 0xE9, 
	0xE6, 0xCA, 0xAC, 0xED, 0x15, 0x93, 0xFE, 0x88, 
	0xD8, 0x9A, 0xC6, 0xB8, 0xAC, 0xCC, 0xAB, 0x6E, 
	0x20, 0x7C, 0xEB, 0x7C, 0xCA, 0x29, 0x80, 0x9E, 
	0x29, 0x80, 0x44, 0x06, 0x62, 0xB7, 0xD4, 0x38, 
	0x2A, 0x15, 0xDA, 0x43, 0x08, 0x57, 0x45, 0xA9, 
	0xAA, 0xE5, 0x9A, 0xA0, 0x5B, 0xDB, 0x32, 0xF6, 
	0x68, 0x69, 0xA2, 0xDD, 0x42, 0x95, 0x38, 0x6C, 
	0x87, 0xEC, 0xDD, 0x35, 0x08, 0xA2, 0xCF, 0x60, 
	0xD0, 0x1E, 0x23, 0xEC, 0x2F, 0xE6, 0x98, 0xF4, 
	0x70, 0xD6, 0x00, 0x15, 0x49, 0xA2, 0xF0, 0x67, 
	0x59, 0x13, 0x1E, 0x53, 0x4C, 0x70, 0x06, 0x05, 
	0x7D, 0xEF, 0x1D, 0x18, 0xA8, 0x3F, 0x0A, 0xC7, 
	0x9C, 0xFE, 0x80, 0xFF, 0x5A, 0x91, 0xF2, 0xBE, 
	0xD4, 0xA0, 0x83, 0x70, 0x61, 0x19, 0x0A, 0x03, 
	0x29, 0x90, 0x21, 0x65, 0x40, 0x3C, 0x9A, 0x90, 
	0x8F, 0xB6, 0x15, 0x73, 0x9F, 0x3C, 0xE3, 0x3B, 
	0xF1, 0xBA, 0xEA, 0x16, 0xC2, 0x5B, 0xCE, 0xD7, 
	0x96, 0x3F, 0xAC, 0xC9, 0xD2, 0x4D, 0x9C, 0x0A, 
	0xD7, 0x6F, 0xC0, 0x20, 0xB2, 0xC4, 0xB8, 0x4C, 
	0x10, 0xA7, 0x41, 0xA2, 0xCC, 0x7D, 0x9B, 0xAC, 
	0x3A, 0xAC, 0xCC, 0xA3, 0x52, 0x9B, 0xAC, 0x31, 
	0x6A, 0x9A, 0xA7, 0x5D, 0x2A, 0x26, 0xC7, 0xD7, 
	0xD2, 0x88, 0xCB, 0xA4, 0x66, 0xC5, 0xFE, 0x5F, 
	0x45, 0x4A, 0xE6, 0x79, 0x74, 0x4A, 0x90, 0xA1, 
	0x57, 0x72, 0xDB, 0x3B, 0x0E, 0x47, 0xA4, 0x9A, 
	0xF0, 0x31, 0xD1, 0x6D, 0xBE, 0xAB, 0x33, 0x2B, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x01, 0x00, 0x04, 0x63, 0x80, 0x5A, 0x35, 
	0x1A, 0x43, 0x7B, 0xA2, 0x43, 0x19, 0xBB, 0x3A, 
	0x77, 0x7B, 0x7A, 0xF3, 0x5E, 0x72, 0x4B, 0x15, 
	0x0A, 0x06, 0x39, 0x6C, 0x5F, 0xEC, 0x38, 0x45, 
	0xB1, 0x88, 0x76, 0x26, 0x8D, 0x5E, 0xDA, 0xE6, 
	0x2F, 0x14, 0xBA, 0x02, 0xFA, 0xD6, 0xFC, 0x3B, 
	0x2B, 0xBE, 0x87, 0x07, 0x63, 0x8E, 0x55, 0xBF, 
	0x05, 0x5A, 0xFC, 0xFC, 0xB3, 0x47, 0x69, 0x11, 
	0x89, 0xDB, 0x1C, 0xAF, 0x4B, 0x43, 0x76, 0x62, 
	0x3E, 0x30, 0x89, 0x0A, 0x9D, 0x3B, 0xBB, 0x3E, 
	0x50, 0xBD, 0xF7, 0xA6, 0xC0, 0xF7, 0xF8, 0xBB, 
	0x0D, 0xB5, 0x6A, 0xBB, 0xC6, 0xC3, 0x50, 0xC8, 
	0x88, 0xBB, 0x9D, 0xF0, 0x9B, 0xD1, 0x30, 0x64, 
	0x60, 0x69, 0xDD, 0x34, 0x67, 0xA7, 0x00, 0xEB, 
	0xDC, 0xF9, 0x8C, 0xB0, 0xF7, 0x93, 0x0E, 0x81, 
	0xFE, 0x98, 0xD9, 0x72, 0x45, 0x8B, 0x94, 0x7E, 
	0x59, 0xE2, 0xBE, 0x4E, 0x91, 0x2D, 0x75, 0xCA, 
	0x1B, 0x8E, 0x2E, 0xF4, 0x6D, 0x73, 0xB1, 0x6B, 
	0x35, 0xB5, 0x67, 0x0D, 0x63, 0x2D, 0x51, 0x38, 
	0x53, 0x28, 0x19, 0x1D, 0x9D, 0xAE, 0x8D, 0xC6, 
	0x61, 0xCC, 0xEF, 0xA4, 0xAB, 0xE2, 0xF3, 0xB0, 
	0x4C, 0x7B, 0xE2, 0x71, 0xB5, 0xF9, 0x2C, 0xFA, 
	0x55, 0xCD, 0x88, 0x8B, 0x72, 0xCC, 0xBE, 0x67, 
	0xFA, 0xDF, 0xEF, 0x6B, 0x53, 0x3C, 0x45, 0xD8, 
	0xCB, 0xDF, 0xB2, 0x76, 0x41, 0x46, 0xD6, 0xC2, 
	0x6F, 0x27, 0x16, 0xC5, 0x07, 0xF3, 0xF4, 0x44, 
	0x66, 0xA3, 0x15, 0xD2, 0x77, 0xF2, 0x89, 0xDA, 
	0xFD, 0xD5, 0x50, 0xCF, 0xA4, 0x9B, 0xEA, 0xCA, 
	0xC9, 0x7B, 0xE5, 0x46, 0x0E, 0xED, 0x9B, 0xFB, 
	0x04, 0xA9, 0xDA, 0x19, 0x58, 0xD9, 0x2A, 0x20, 
	0x8A, 0xAC, 0xC1, 0xF4, 0x8E, 0xE9, 0x14, 0xD8, 
	0x8A, 0xD7, 0x41, 0xD5, 0x5B, 0x9B, 0x64, 0x22, 
	0xD8, 0xAF, 0xAE, 0xC7, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x52, 0x6F, 0x6F, 0x74, 0x2D, 0x43, 0x41, 0x30, 
	0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x34, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0x58, 0x53, 0x30, 0x30, 
	0x30, 0x30, 0x30, 0x30, 0x30, 0x39, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x18, 0xA3, 0x47, 0xA4, 
	0xC0, 0x84, 0x4C, 0xEB, 0x7E, 0xB0, 0xCF, 0xF0, 
	0xAE, 0xB7, 0x77, 0x69, 0x85, 0x93, 0xE4, 0x99, 
	0x5A, 0x95, 0x4E, 0x58, 0x17, 0x38, 0xCE, 0xD6, 
	0x81, 0xB0, 0xBD, 0x77, 0x09, 0xE7, 0xF8, 0x9A, 
	0xDF, 0xAD, 0x05, 0x48, 0x83, 0xF6, 0xC3, 0xFD, 
	0xDF, 0x7B, 0x83, 0xE0, 0x0C, 0x26, 0x81, 0x54, 
	0x43, 0x29, 0xEA, 0x82, 0x6C, 0x89, 0xF0, 0xA6, 
	0x74, 0x42, 0x86, 0x4D, 0x32, 0x60, 0x32, 0x7D, 
	0xA7, 0x7A, 0x13, 0x40, 0x66, 0x59, 0xDA, 0x3E, 
	0x41, 0x6B, 0x27, 0x94, 0x03, 0x4F, 0xAA, 0x22, 
	0x9D, 0xD5, 0x54, 0x52, 0xDB, 0x27, 0x0A, 0x6A, 
	0xA2, 0x3D, 0x19, 0xB1, 0x66, 0x1B, 0x19, 0x7D, 
	0xAB, 0xC7, 0x0E, 0x88, 0x17, 0x91, 0xA1, 0x2A, 
	0xB4, 0x3C, 0x6C, 0xCB, 0xF5, 0xAA, 0x7C, 0x3A, 
	0xDD, 0x36, 0xFB, 0x35, 0x71, 0x7B, 0x20, 0x01, 
	0x59, 0x00, 0xD6, 0xF6, 0x90, 0x39, 0x35, 0x41, 
	0x31, 0xF8, 0xC1, 0xC0, 0x57, 0x3A, 0x35, 0x18, 
	0x58, 0x90, 0xB1, 0xAD, 0x9A, 0x0E, 0xEC, 0xE0, 
	0xF4, 0x7A, 0x7D, 0xA5, 0x27, 0x48, 0xC9, 0x72, 
	0xAB, 0x0D, 0x08, 0x7B, 0x62, 0x35, 0x40, 0x91, 
	0x14, 0x2B, 0xB1, 0x1D, 0x1A, 0xFA, 0xF9, 0xCD, 
	0x5C, 0x17, 0x13, 0x53, 0x52, 0x71, 0xCA, 0xE2, 
	0x2A, 0x78, 0xB1, 0x7F, 0x4A, 0xCD, 0x59, 0xD8, 
	0xBA, 0x1D, 0x7D, 0x70, 0x5F, 0x78, 0x1B, 0x9F, 
	0x9D, 0x37, 0x18, 0x8E, 0xD7, 0xCD, 0x0D, 0x49, 
	0x57, 0x74, 0x69, 0x88, 0x3A, 0x6B, 0x8E, 0x4E, 
	0x1B, 0x85, 0xDD, 0xBE, 0x39, 0x45, 0x05, 0x89, 
	0x56, 0x12, 0x97, 0x59, 0x9A, 0x09, 0xA4, 0xC8, 
	0x2D, 0x2F, 0xF5, 0xCF, 0xB4, 0x73, 0x70, 0xDB, 
	0x58, 0x1E, 0xB2, 0x4E, 0x77, 0x6F, 0xA4, 0x7E, 
	0x62, 0xDF, 0xB7, 0x05, 0xE8, 0x80, 0x42, 0x5C, 
	0xB8, 0x78, 0x87, 0x97, 0x7F, 0x66, 0x2C, 0x5F, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x01, 0x00, 0x04, 0x50, 0x05, 0xD7, 0x5E, 
	0x6D, 0xDE, 0xB8, 0x78, 0x3C, 0x81, 0xE9, 0xEF, 
	0x0D, 0x17, 0xCD, 0x58, 0xF5, 0x94, 0x26, 0xA3, 
	0xFD, 0x6F, 0x69, 0x90, 0xE8, 0xF8, 0x32, 0x87, 
	0x12, 0x2E, 0xC2, 0x5C, 0xA1, 0x4B, 0x99, 0x24, 
	0x23, 0x37, 0xBA, 0x91, 0xA7, 0x5B, 0x0F, 0x7C, 
	0x59, 0xFB, 0xF7, 0xD1, 0x89, 0x27, 0x22, 0xC4, 
	0xE6, 0xAF, 0xC7, 0xDE, 0xC7, 0x4A, 0x6E, 0x00, 
	0x7F, 0x43, 0x4A, 0x88, 0x8A, 0x82, 0x15, 0xE8, 
	0xDF, 0x2B, 0x52, 0xED, 0x42, 0x00, 0xBC, 0x69, 
	0xB4, 0xDA, 0x7F, 0xEB, 0x74, 0x6C, 0x7A, 0x2D, 
	0x96, 0x56, 0x5B, 0x45, 0x59, 0x7B, 0x8F, 0xAE, 
	0xB1, 0x6B, 0xDC, 0x76, 0xC1, 0xC8, 0x0C, 0x47, 
	0xF5, 0x0D, 0xA9, 0xC3, 0xE1, 0xFE, 0x28, 0x50, 
	0x1C, 0x26, 0xA2, 0xD1, 0x54, 0x4B, 0xD1, 0x60, 
	0x4A, 0x9E, 0x8F, 0x32, 0x2A, 0xEF, 0x31, 0x5F, 
	0xEA, 0x48, 0x22, 0x67, 0x22, 0xB7, 0xCB, 0x37, 
	0x2F, 0xF3, 0x5F, 0x5E, 0x61, 0x6A, 0x53, 0x44, 
	0xA5, 0x85, 0xE5, 0xA0, 0x8A, 0x2E, 0x17, 0x77, 
	0x57, 0x2B, 0x7A, 0x9A, 0xF7, 0xD2, 0xD8, 0xC4, 
	0x9C, 0xD0, 0xA0, 0x54, 0xBF, 0x8A, 0x9D, 0xB4, 
	0x9F, 0xC6, 0x60, 0x61, 0x7C, 0xB8, 0x35, 0x4E, 
	0x25, 0x7F, 0x68, 0x68, 0x2F, 0x94, 0xB3, 0xCC, 
	0x53, 0x8C, 0x42, 0x6F, 0x88, 0xC5, 0x48, 0x5C, 
	0xBE, 0xC1, 0xD0, 0x48, 0x04, 0x74, 0x96, 0x5A, 
	0x7E, 0x82, 0x59, 0xAA, 0x9F, 0xB6, 0x61, 0x46, 
	0xCE, 0x59, 0x21, 0xC6, 0xF0, 0xC1, 0x75, 0x1F, 
	0x21, 0x91, 0x7F, 0x24, 0x96, 0xCB, 0x0C, 0x70, 
	0x15, 0x7A, 0xB7, 0xBB, 0x3A, 0x9F, 0x57, 0x56, 
	0x56, 0x5C, 0x38, 0x92, 0x2E, 0xFD, 0xC8, 0xF1, 
	0x70, 0xB9, 0xAE, 0xA1, 0xAE, 0x36, 0xF5, 0x5E, 
	0x35, 0x26, 0x63, 0x0A, 0xBA, 0xB2, 0x05, 0x0F, 
	0xF0, 0x0C, 0xDC, 0xBB, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x52, 0x6F, 0x6F, 0x74, 0x2D, 0x43, 0x41, 0x30, 
	0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x34, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0x43, 0x50, 0x30, 0x30, 
	0x30, 0x30, 0x30, 0x30, 0x30, 0x61, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x18, 0xA3, 0x4D, 0x5B, 
	0xAA, 0x7F, 0x93, 0x80, 0x28, 0x9B, 0xE8, 0x98, 
	0x63, 0x10, 0x7A, 0xE1, 0x0C, 0x59, 0x2C, 0x2F, 
	0x7C, 0xFF, 0xBD, 0xAA, 0xDD, 0x74, 0xF4, 0xA2, 
	0xFB, 0xAC, 0xD7, 0x6F, 0x00, 0x93, 0x42, 0x06, 
	0x34, 0x71, 0x56, 0xD8, 0x40, 0x49, 0x72, 0x9F, 
	0x3E, 0x24, 0xFA, 0x5E, 0x19, 0xD1, 0x5B, 0x63, 
	0x5C, 0xD2, 0xEF, 0x09, 0xDE, 0x32, 0xEE, 0x6B, 
	0x6F, 0xC8, 0xFA, 0x32, 0x8E, 0x2E, 0x96, 0xB9, 
	0x94, 0x41, 0x04, 0x7D, 0x07, 0x62, 0x95, 0xDA, 
	0x0D, 0x91, 0xD8, 0x09, 0x35, 0xD0, 0xDE, 0x8E, 
	0x6B, 0xC6, 0xAB, 0x14, 0x27, 0x01, 0x9C, 0xFE, 
	0x49, 0x96, 0xFC, 0x9B, 0x54, 0x79, 0x4D, 0xEB, 
	0xD7, 0xC6, 0x66, 0x73, 0xA6, 0xDD, 0x3A, 0x77, 
	0x65, 0x47, 0x94, 0xEC, 0x1C, 0x87, 0xAA, 0x46, 
	0xD9, 0x78, 0xA9, 0x7D, 0xDB, 0x11, 0x22, 0x6E, 
	0xD4, 0x12, 0xC2, 0x78, 0x4B, 0x21, 0x83, 0x92, 
	0xC7, 0x10, 0xC7, 0x74, 0x19, 0xFF, 0xAA, 0xF6, 
	0x0B, 0x75, 0xD8, 0x23, 0xDD, 0x33, 0xC3, 0xA1, 
	0x5B, 0xA7, 0x2D, 0x30, 0xA5, 0xA4, 0xD8, 0xF8, 
	0x0F, 0xD6, 0x73, 0xFD, 0x26, 0xCB, 0x29, 0xA6, 
	0xEF, 0x50, 0x39, 0xE2, 0x5F, 0x59, 0x61, 0x84, 
	0x6B, 0xDA, 0x2E, 0xC7, 0xCB, 0xE4, 0x38, 0x4B, 
	0x28, 0xFB, 0x0D, 0xD5, 0x8E, 0x7C, 0xAA, 0x7D, 
	0x4B, 0x37, 0x3A, 0xD7, 0x81, 0xDD, 0x73, 0xE3, 
	0x09, 0x93, 0xBD, 0xBD, 0x7E, 0x08, 0x55, 0x4A, 
	0x8C, 0xA5, 0xC9, 0x84, 0x2D, 0x71, 0x01, 0xA2, 
	0x2A, 0x01, 0xB0, 0x15, 0xFB, 0x30, 0x78, 0xB9, 
	0x13, 0xF4, 0xC7, 0x3F, 0xB5, 0xA6, 0xF1, 0xA2, 
	0x5E, 0x22, 0xB0, 0x02, 0xB6, 0xE0, 0x09, 0x54, 
	0x7F, 0x0F, 0xBD, 0xF0, 0xFE, 0xA5, 0x50, 0x1D, 
	0x93, 0x15, 0xF9, 0x3D, 0x83, 0x0F, 0x0F, 0x0E, 
	0x3D, 0xE2, 0x3D, 0x96, 0xE7, 0x09, 0xD9, 0x77, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

#endif