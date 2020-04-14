/* Miniaudio Implementation
 **************************************************************************************************/

//TODO: Is this needed?
#define STB_VORBIS_NO_STDIO
#define STB_VORBIS_HEADER_ONLY
#include "extras/stb_vorbis.c"

#define DR_FLAC_IMPLEMENTATION
#include "extras/dr_flac.h"

#define DR_MP3_IMPLEMENTATION
#include "extras/dr_mp3.h"

#define DR_WAV_IMPLEMENTATION
#include "extras/dr_wav.h"

//TODO: Is this needed?
#define MA_NO_STDIO
#define MINIAUDIO_IMPLEMENTATION
#include "miniaudio.h"

/* Custom Miniaudio Extensions

#include <stdio.h>

#define ma_ext_alloc(t) (t *)ma_aligned_malloc(sizeof(t), MA_SIMD_ALIGNMENT);
MA_API void* ma_ext_alloc_decoder() { return ma_ext_alloc(ma_decoder); }
MA_API void* ma_ext_alloc_device() { return ma_ext_alloc(ma_device); }
MA_API void ma_ext_free(void* ptr) { return ma_aligned_free(ptr); }

MA_API ma_device_config* ma_ext_alloc_device_config(ma_device_type deviceType, ma_uint32 sampleRate, ma_device_callback_proc dataCallback)
{
    ma_device_config* config = ma_ext_create(ma_device_config);
    ma_zero_object(config);
    // Configure device type and callback
    config->dataCallback = dataCallback;
    config->deviceType = deviceType;
    // Configure to use stereo signed 16 bit audio
    config->sampleRate = sampleRate;
    config->playback.format = ma_format_s16;
    config->playback.channels = 2;
    config->capture.format = ma_format_s16;
    config->capture.channels = 2;
    return config;
}
 **************************************************************************************************/