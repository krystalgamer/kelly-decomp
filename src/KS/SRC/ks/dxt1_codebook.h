#ifndef DXT1_CODEBOOK_H
#define DXT1_CODEBOOK_H

template<class Type>
class Table {
    enum {
        MAX_SIZE = 16
    };

    Type data[MAX_SIZE];
    int size;

public:
    virtual ~Table();

    inline int Count() const {
        return size;
    }

    Type &operator[](int index);
};

class cbVector {
    unsigned char pData[4];

public:
    inline unsigned char &operator[](int index) {
        return pData[index];
    }
    inline unsigned char operator[](int index) const {
        return pData[index];
    }

    int DiffMag(const cbVector &vector) const;
};

class CodeBook {
    Table<cbVector> VectList;
    Table<int> usageCount;

public:
    virtual ~CodeBook();
    int FindVectorSlow(const cbVector &vector);

    inline int GetNumCodes() const {
        return VectList.Count();
    }

    inline cbVector &operator[](int index) {
        return VectList[index];
    }
};

#endif
