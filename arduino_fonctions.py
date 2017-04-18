def ser2spi(RW,CS,ADD,DATA):
## data types to be used for this fonction
##    RW=0 (int)
##    CS='01011001' (srt)
##    ADD=17; (int)
##    DATA='01001100' (str)
    if RW==1:
        if(int(CS[0])+int(CS[1])+int(CS[2])+int(CS[0])+int(CS[0])+int(CS[0])+int(CS[0])+int(CS[0])>1):
            print('Can\'t do Read/Write on multiple Slaves')
            
    return str(int('1'+'000000'+str(RW)+CS+bin(ADD)[2:].zfill(8)+DATA,2))

## the first '1' is used only to fix the size of the word (atoi() bullshit in C on Arduino side)
## the next 6 zeros are not used
## then 1 bit for WR : '0' Write Only ; '1' Read Write
## then 8 bits of Chip Select (
## then 8 bits of address
## then 8 bits of data

    
