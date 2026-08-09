// Matching decompilation blocks selected by generated build shims.

// 0x001E4508 format__16GenericGameSaverii
#include "KS/SRC/HWOSPS2/ps2_gamesaver.h"

int GenericGameSaver::format(int port, int slot)
{
    int command;
    int result;
    int type;
    int free_blocks;
    int formatted;
    int status = getInfo(
        port,
        slot,
        &type,
        &free_blocks,
        &formatted);
    result = -1;

    if (status != GSErrorUnformatted)
    {
        int result_code = GSErrorOther;
        if (status == GSOk)
            result_code = GSOk;
        return result_code;
    }

    status = sceMcFormat(port, slot);
    if (status != 0)
    {
        status = sceMcFormat(port, slot);
        if (status != 0)
            return GSErrorOther;
    }

    status = sceMcSync(0, &command, &result);
    if (status != 1)
    {
        status = sceMcSync(0, &command, &result);
        if (status != 1)
            return GSErrorOther;
    }

    if (result != 0)
        return GSErrorOther;
    return GSOk;
}

// 0x001E60F0 getCardString__16GenericGameSaverii
#include "KS/SRC/HWOSPS2/ps2_gamesaver.h"
asm(".equ ksGlobalTextArray, 0x003E6050");
asm(".equ sprintf, 0x003D38A8");
asm(".equ __7stringxPCci, 0x0034D438");

stringx GenericGameSaver::getCardString(int port, int slot)
{
    char errortxt[100];
    sprintf(errortxt, ksGlobalTextArray[GT_MEMORY_CARD_PS2].c_str(), port + 1);
    return stringx(errortxt);
}

// 0x001E6380 getShortCardString__16GenericGameSaverii
#include "KS/SRC/HWOSPS2/ps2_gamesaver.h"
asm(".equ ksGlobalTextArray, 0x003E6050");
asm(".equ sprintf, 0x003D38A8");
asm(".equ __7stringxPCci, 0x0034D438");

stringx GenericGameSaver::getShortCardString(int port, int slot)
{
    char errortxt[100];
    sprintf(errortxt, ksGlobalTextArray[GT_MEMORY_SLOT_PS2].c_str(), port + 1);
    return stringx(errortxt);
}

// 0x001E6780 getOverwriteString__16GenericGameSaverii
#include "KS/SRC/HWOSPS2/ps2_gamesaver.h"

__asm__(".equ __7stringxPCci, 0x0034D438");
__asm__(".equ ksGlobalTextArray, 0x003E6050");

stringx GenericGameSaver::getOverwriteString(int port, int slot)
{
    return stringx(ksGlobalTextArray[GT_FE_MENU_OVERWRITE].c_str());
}

// 0x001E5C98 releaseIconData__16GenericGameSaver
#include "KS/SRC/HWOSPS2/ps2_gamesaver.h"
__asm__(".equ KSReleaseFile__FP10nglFileBuf, 0x001E3300");

void GenericGameSaver::releaseIconData()
{
    if (icon.Buf)
        KSReleaseFile(&icon);
    icon.Buf = 0;
}

// 0x001E5CD0 getIconData__16GenericGameSaver
#include "KS/SRC/HWOSPS2/ps2_gamesaver.h"
__asm__(".equ releaseIconData__16GenericGameSaver, 0x001E5C98");
__asm__(".equ KSReadFile__FPCcP10nglFileBufUi, 0x001E32A0");
extern const char icon_filename[];
// Adjusted high-half representation for the signed low address component.
__asm__(".equ icon_filename, 0x004DF1E0");
int GenericGameSaver::getIconData() {
    if (icon.Buf)
        releaseIconData();
    KSReadFile(icon_filename, &icon, 1);
    return icon.Size;
}

// 0x001E4028 calcSavedGameSize__16GenericGameSaver
struct options{char p0[4];int stash_only;};extern options*developer_options;extern int saved_game_size;__asm__(".equ developer_options,0x0046B180");__asm__(".equ saved_game_size,0x0042E510");struct nglFileBuf{void*buf;unsigned Size;};extern const char icon_name[];__asm__(".equ icon_name,0x004DF1E0");extern "C" void read_file(const char*,nglFileBuf*,unsigned) __asm__("KSReadFile__FPCcP10nglFileBufUi");__asm__(".equ KSReadFile__FPCcP10nglFileBufUi,0x001E32A0");extern "C" void calc_size(void*) __asm__("calcSavedGameSize__16GenericGameSaver");void calc_size(void*){saved_game_size=101;if(developer_options->stash_only){nglFileBuf f;read_file(icon_name,&f,1);register unsigned size __asm__("$3")=f.Size;register int total __asm__("$2")=saved_game_size;total+=2*((size+1023)/1024);total+=1;saved_game_size=total;}}

// 0x001E67B8 getFormattingString__16GenericGameSaverii
struct stringx{char*chars;char pad[4];stringx();stringx(const char*,int=-1);~stringx();};extern "C" stringx get_card_string(void*,int,int)__asm__("getCardString__16GenericGameSaverii");extern "C" stringx get_formatting_string(void*,int,int)__asm__("getFormattingString__16GenericGameSaverii");extern "C" char*strcpy(char*,const char*);extern "C" int sprintf(char*,const char*,...);extern stringx ksGlobalTextArray[];__asm__(".equ getCardString__16GenericGameSaverii,0x001E60F0");__asm__(".equ strcpy,0x003D3FCC");__asm__(".equ sprintf,0x003D38A8");__asm__(".equ ksGlobalTextArray,0x003E68B0");__asm__(".equ __7stringxPCci,0x0034D438");__asm__(".equ _$_7stringx,0x0034D6E0");stringx get_formatting_string(void*self,int port,int slot){char sentence[200];char mc[50];strcpy(mc,get_card_string(self,port,slot).chars);sprintf(sentence,ksGlobalTextArray[0].chars,mc,mc);return stringx(sentence);}

// 0x001E39C0 AsciiString2Sjis__FPUcPUs
extern "C" int string_len(const char*) __asm__("strlen");extern "C" unsigned short Ascii2Sjis(unsigned char) __asm__("Ascii2Sjis__FUc");asm(".equ strlen,0x003D40E0");asm(".equ Ascii2Sjis__FUc,0x001E38B0");extern "C" void AsciiString2Sjis(unsigned char*,unsigned short*) __asm__("AsciiString2Sjis__FPUcPUs");void AsciiString2Sjis(unsigned char*input,unsigned short*output){int i=0;int len=string_len((char*)input);for(i=0;i<len;i++){unsigned short sjis=Ascii2Sjis(input[i]);unsigned char temp1=sjis;unsigned char temp2=sjis>>8;output[i]=temp2|(temp1<<8);}output[i]=0;}
