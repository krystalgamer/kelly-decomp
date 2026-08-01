#include "KS/SRC/ks/dxt1_table.h"

// 0x00265550 Resize__t5Table1Z8cbVectori
template void Table<cbVector>::Resize(int count);

// 0x00265558 Resize__t5Table1Zii
template void Table<int>::Resize(int count);

// 0x00265560 __vc__t5Table1Zii
template int &Table<int>::operator[](int index);

// 0x00265570 __vc__t5Table1Z8cbVectori
template cbVector &Table<cbVector>::operator[](int index);

// 0x002655A0 Append__t5Table1ZiRCi
template void Table<int>::Append(const int &element);
