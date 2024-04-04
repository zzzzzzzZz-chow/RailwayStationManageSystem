#include "./../include/time.h"
#include <memory>

namespace station_system {
using namespace std;
BaseTime::BaseTime(const string_view time) : _time{time} {}
const string_view BaseTime::time() const { return _time; }
void BaseTime::time(const string_view new_time) { _time = new_time; }
Time time(string_view name) { return make_shared<BaseTime>(name); }
} // namespace station_system
