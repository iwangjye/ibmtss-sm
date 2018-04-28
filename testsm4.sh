#./createprimary -hi o -pwdk pps -tk pritk.bin -ch prich.bin
./create -hp 80000000 -sm4 -kt f -kt p -opr sm4priv.bin -opu sm4pub.bin -pwdp pps -pwdk sm4 -v
./load -hp 80000000 -ipr sm4priv.bin -ipu sm4pub.bin -pwdp pps 
./encryptdecrypt -hk 80000001 -if msg.bin -of enc.bin -pwdk sm4
./encryptdecrypt -hk 80000001 -d -if enc.bin -of dec.bin -pwdk sm4
