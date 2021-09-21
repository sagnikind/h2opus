#ifndef __H2OPUS_DISTRIBUTED_HCOMPRESS_H__
#define __H2OPUS_DISTRIBUTED_HCOMPRESS_H__

#include <h2opus/distributed/distributed_h2opus_handle.h>
#include <h2opus/distributed/distributed_hcompress_workspace.h>
#include <h2opus/distributed/distributed_hmatrix.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////
// GPU
/////////////////////////////////////////////////////////////////////////////////////////////////////////
#ifdef H2OPUS_USE_GPU
void distributed_hcompress(DistributedHMatrix_GPU &dist_hmatrix, H2Opus_Real eps,
                           distributedH2OpusHandle_t dist_h2opus_handle);
#endif

/////////////////////////////////////////////////////////////////////////////////////////////////////////
// CPU
/////////////////////////////////////////////////////////////////////////////////////////////////////////
void distributed_hcompress(DistributedHMatrix &dist_hmatrix, H2Opus_Real eps,
                           distributedH2OpusHandle_t dist_h2opus_handle);

#endif