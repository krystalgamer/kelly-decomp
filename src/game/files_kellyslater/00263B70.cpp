class ImageDXTC {
    int XSize;
    int YSize;
public:
    void ReleaseAll();
};

void ImageDXTC::ReleaseAll() {
    XSize = YSize = 0;
}
