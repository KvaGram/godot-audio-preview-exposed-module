#include "audio_preview_exposed.h"

//example code. to be removed
void Audio_preview_exposed::add(int p_value) {
    count += p_value;
}

//example code. to be removed
void Audio_preview_exposed::reset() {
    count = 0;
}

//example code. to be removed
int Audio_preview_exposed::get_total() const {
    return count;
}

//Binder, is this where functions get exposed to GD script and Mono?
void Audio_preview_exposed::_bind_methods() {
    ClassDB::bind_method(D_METHOD("add", "value"), &Audio_preview_exposed::add);
    ClassDB::bind_method(D_METHOD("reset"), &Audio_preview_exposed::reset);
    ClassDB::bind_method(D_METHOD("get_total"), &Audio_preview_exposed::get_total);
}

//constructor
Audio_preview_exposed::Audio_preview_exposed() {
    count = 0;
}