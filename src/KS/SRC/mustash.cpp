// stash definitions extracted by generated one-function shims.

// 0x00347118 acquire_stash_bufferspace__10multistashi
#include "KS/SRC/mustash.h"

__asm__(".equ arch_memalign__FUiUiPCci, 0x002AC740");
__asm__(".equ acquire_stash_bufferspace_desc, 0x00502808");

void multistash::acquire_stash_bufferspace(int size) {
    big_ass_buffer = (unsigned char *)arch_memalign(
        128, size, acquire_stash_bufferspace_desc, 0);
    big_ass_buffer_max = size;
}

// 0x00347230 add_temp__5stashR7os_filePUcUi
#include "KS/SRC/mustash.h"

unsigned int stash::add_temp(
    os_file &the_file,
    unsigned char *raw_data,
    unsigned int data_size)
{
    the_file.write(raw_data, data_size);
    multistash &current = substash[curstash];
    unsigned int ret_val = current.temp_buf_end;
    current.temp_buf_end += data_size;
    return ret_val;
}

// 0x003471E0 add_stored__5stashR7os_filePUcUi
#include "KS/SRC/mustash.h"

unsigned int stash::add_stored(
    os_file &the_file,
    unsigned char *raw_data,
    unsigned int data_size)
{
    the_file.write(raw_data, data_size);
    multistash &current = substash[curstash];
    unsigned int ret_val = current.stored_buf_end;
    current.stored_buf_end += data_size;
    return ret_val;
}

// 0x003480D0 get_name__C5stash
#include "KS/SRC/mustash.h"

const pstring& stash::get_name() const {
    return fullname;
}

// 0x003480E8 get_size__5stash
#include "KS/SRC/mustash.h"
unsigned int stash::get_size() { return index->entry_size; }

// 0x00346FC0 free_stored__5stashi
#include "KS/SRC/mustash.h"
__asm__(".equ free_stored__10multistash, 0x00346FF0");

void stash::free_stored(int stashid) {
    substash[stashid].free_stored();
    KELLY_DECOMP_COMPILER_BARRIER();
}

// 0x00345BC0 WaitForStashLoad__5stash
#include "KS/SRC/mustash.h"
extern int LoadNewStashSema;
__asm__(".equ LoadNewStashSema, 0x0046ABCC");

extern "C" int WaitSema(int semaphore);
extern "C" int SignalSema(int semaphore);
__asm__(".equ WaitSema, 0x003DB6A0");
__asm__(".equ SignalSema, 0x003DB680");

void stash::WaitForStashLoad()
{
    WaitSema(LoadNewStashSema);
    SignalSema(LoadNewStashSema);
    KELLY_DECOMP_COMPILER_BARRIER();
}

// 0x00347CE0 open__5stashPCc
#include "KS/SRC/mustash.h"
__asm__(".equ pack_string__7pstringPCc, 0x003354D0");

__asm__(".equ open__5stashRC7pstring, 0x00347D18");

bool stash::open(const char *name)
{
    pstring packed(name);
    return open(packed);
}

// 0x00346F80 close_stash__10multistash
extern "C" void arch_free(void *pointer) __asm__("arch_free__FPv");
__asm__(".equ arch_free__FPv, 0x002AC768");
class multistash {
    char padding0[0x26C];
    void *temp_buf;
    char padding1[0x54];
    int pre_opened;
    char padding2[0x18];
    int stash_file_is_open;
public:
    void close_stash();
};
void multistash::close_stash()
{
    if (temp_buf != 0)
        arch_free(temp_buf);
    temp_buf = 0;
    stash_file_is_open = false;
    pre_opened = false;
}

// 0x00345998 Print_Stash_Node__FR7os_filePt8TreeNode1Z17stash_index_entry
#include "KS/SRC/mustash.h"
#include "decomp_annotations.h"

extern "C" unsigned int strlen(const char *text);
extern const char stash_newline[];

__asm__(".equ unpack_string__C7pstring, 0x00335648");
__asm__(".equ strlen, 0x003D40E0");
__asm__(".equ stash_newline, 0x00502758");

void Print_Stash_Node_recurse(os_file &, AvlNode *);
__asm__(".equ Print_Stash_Node_recurse__FR7os_filePt8TreeNode1Z17stash_index_entry, 0x00345998");

void Print_Stash_Node( os_file &output_file, AvlNode *curr)
{
	//  Check to see if this was used.  If not, then record it.
	if (!curr->data()->was_used())
	{
		output_file.write((void *)curr->data()->get_name(), strlen((char *)curr->data()->get_name()));
		output_file.write((void *)stash_newline,1);
	}

	//  Now check its children.
	if (curr->left() != 0)
		Print_Stash_Node_recurse(output_file, curr->left());

	if (curr->right() != 0)
	{
		Print_Stash_Node_recurse(output_file, curr->right());
		KELLY_DECOMP_COMPILER_BARRIER();
	}
}
