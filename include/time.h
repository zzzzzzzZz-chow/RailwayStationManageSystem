#pragma once

#include <istream>
#include <memory>
#include <ostream>
#include <string_view>

namespace station_system {
using namespace std;

class BaseTime;
using Time = shared_ptr<BaseTime>;
Time time(string_view);

class BaseTime {
public:
  BaseTime() = delete;
  BaseTime(const string_view time);

public:
  const string_view time() const;
  void time(const string_view new_time);
  void save(ostream &);
  void load(istream &);

private:
  string _time;
};
} // namespace station_system
