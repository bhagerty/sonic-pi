#define AUBIO_UNSTABLE 1
#include <aubio.h>
#include "utils_tests.h"

#define aubio_source_custom "sndfile"

#ifdef HAVE_SNDFILE
#define HAVE_AUBIO_SOURCE_CUSTOM
#define aubio_source_custom_t aubio_source_sndfile_t
#define new_aubio_source_custom new_aubio_source_sndfile
#define del_aubio_source_custom del_aubio_source_sndfile
#define aubio_source_custom_get_samplerate aubio_source_sndfile_get_samplerate
#define aubio_source_custom_get_duration aubio_source_sndfile_get_duration
#define aubio_source_custom_do aubio_source_sndfile_do
#define aubio_source_custom_do_multi aubio_source_sndfile_do_multi
#define aubio_source_custom_seek aubio_source_sndfile_seek
#define aubio_source_custom_close aubio_source_sndfile_close
#define aubio_source_custom_get_channels aubio_source_sndfile_get_channels
#define aubio_source_custom_get_samplerate aubio_source_sndfile_get_samplerate
#endif /* HAVE_LIBAV */

#include "base-source_custom.h"

// this file uses the unstable aubio api, please use aubio_source instead
// see src/io/source.h and tests/src/source/test-source.c

int main (int argc, char **argv)
{
  return base_main(argc, argv);
}
