struct nvlStream { char padding[0x18]; int bufsize; };
int nvlStreamReqSize(nvlStream* stream) { return stream->bufsize >> 2; }
