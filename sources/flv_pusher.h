#ifndef _FLV_PUSHER_H_
#define _FLV_PUSHER_H_

#include "media_pusher.h"

namespace flvpusher {

class RtmpHandler;
class TagStreamerBase;

class FLVPusher : public MediaPusher {
public:
    FLVPusher(const std::string &input,
            RtmpHandler *&rtmp_hdl);
    virtual ~FLVPusher();

    int loop();

private:
    TagStreamerBase *m_vstrmer;
    TagStreamerBase *m_astrmer;
    TagStreamerBase *m_sstrmer;
};

}

#endif /* end of _FLV_PUSHER_H_ */
