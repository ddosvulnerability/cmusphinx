
#include "cont_mgau.h"

#ifndef __SPHINX3_ENDPOINTER_H
#define __SPHINX3_ENDPOINTER_H

typedef struct {
    float32 **frames;
    int *classes;
    int n_frames;
    int offset;
    int count;
    int eof;

    mgau_model_t *gmm;
    int *priors;
    int *voters;
    int post_classify;

    int state;

    int begin_count;
    int begin_countdown;
    int begin_pad;
    int begin_window;
    int begin_threshold;
    int end_count;
    int end_countdown;
    int end_pad;
    int end_window;
    int end_threshold;
    int frames_required;
} s3_endpointer_t;

void s3_endpointer_init(s3_endpointer_t *_ep,
			char *_means_file,
			char *_vars_file,
			float64 _var_floor,
			char *_mix_weights_file,
			float64 _mix_weight_floor,
			char *_gm_type,
			int _post_classify,
			int _begin_window,
			int _begin_threshold,
			int _begin_pad,
			int _end_window,
			int _end_threshold,
			int _end_pad);
void s3_endpointer_close(s3_endpointer_t *_ep);
void s3_endpointer_reset(s3_endpointer_t *_ep);
void s3_endpointer_feed_frames(s3_endpointer_t *_ep,
			       float32 **_frames,
			       int _n_frames,
			       int _eof);
int s3_endpointer_read_utt(s3_endpointer_t *_ep,
			   float32 **_frames,
			   int _n_frames);
int s3_endpointer_next_utt(s3_endpointer_t *_ep);
int s3_endpointer_frame_count(s3_endpointer_t *_ep);

#endif