// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00263B18)
// 0x00263B18 __9ImageDXTC
class ImageDXTC { int XSize; int YSize; public: ImageDXTC(); };
ImageDXTC::ImageDXTC() { XSize = YSize = 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00263B70)
// 0x00263B70 ReleaseAll__9ImageDXTC
class ImageDXTC {
    int XSize;
    int YSize;
public:
    void ReleaseAll();
};

void ImageDXTC::ReleaseAll() {
    XSize = YSize = 0;
}
#endif
