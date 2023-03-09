#ifndef AUDIO_PREVIEW_EXPOSED_H
#define AUDIO_PREVIEW_EXPOSED_H

#include "core/object/ref_counted.h"

class Audio_preview_exposed : public RefCounted {
    GDCLASS(Audio_preview_exposed, RefCounted);

    //example variable. To remove
    int count;

protected:
    static void _bind_methods();

public:
    //example code. to be removed
    void add(int p_value);
    //example code. to be removed
    void reset();
    //example code. to be removed
    int get_total() const;

    //constructor
    Audio_preview_exposed();
};

#endif // SUMMATOR_H