class PhotoChallenge { public: class Photo { void* texture; int score; bool isOfSpecialTrick; public: Photo(); }; };
PhotoChallenge::Photo::Photo() { texture = 0; score = 0; isOfSpecialTrick = false; }
