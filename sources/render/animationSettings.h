struct AnimationSettings
{
    bool isLooping = false;
    bool isPlaying = false;
    float playbackSpeed = 1.0f;
    bool enableOptimizations = true;
    float tolerance = 1.0f;
    float distance = 100.0f;
};

struct MemoryStats
{
    size_t originalSize;
    size_t optimizedSize;
    size_t compressedSize;
};