./createprimary -si -opu tmppub.bin -opem tmppub.pem -ecc sm2p256 -nalg sm3 -halg sm3 -pwdk sig -v
./sign -hk 80000000 -halg sha256 -sm2 -if policies/aaa -os sig.bin -pwdk sig -v
./verifysignature -hk 80000000 -halg sha256 -if policies/aaa -is sig.bin -v

