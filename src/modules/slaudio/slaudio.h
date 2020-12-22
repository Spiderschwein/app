#include <pthread.h>
#include <FLAC/stream_encoder.h>

struct session {
	struct le le;
	struct ausrc_st *st_src;
	struct auplay_st *st_play;
	bool local;
	bool stream;
	bool run_src;
	bool run_play;
	bool run_record;
	int32_t *dstmix;
	struct aubuf *aubuf;
	pthread_t record_thread;
	FLAC__StreamEncoder *flac;
	int16_t *sampv;
	FLAC__int32 *pcm;
	int8_t ch;
	float *vumeter;
	struct call *call;
	int8_t track;
	bool talk;
	int16_t bufsz;
	int16_t jb_max;
	int16_t silence_count;
	FLAC__StreamMetadata *meta[2];
};

extern struct list sessionl;
void slaudio_record_init(void);

void slaudio_record_set(bool status);
void slaudio_monorecord_set(bool status);
void slaudio_monostream_set(bool status);
void slaudio_mute_set(bool status);
void slaudio_monitor_set(bool status);

int slaudio_record_get_timer(void);
const struct odict* slaudio_get_interfaces(void);
void slaudio_set_driver(int value);
void slaudio_set_input(int value);
void slaudio_set_first_input_channel(int value);
void slaudio_set_output(int value);
int slaudio_reset(void);

/* extern */
void ws_meter_process(unsigned int ch, float *in, unsigned long nframes);
