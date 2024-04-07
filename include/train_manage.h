#pragma once

#include "../include/train.h"

namespace station_system {
using namespace std;

using Trains = vector<Train>;

class BaseTrainManage {
public:
  BaseTrainManage(Trains = {});
  void save(ostream &);
  void load(istream &);

private:
  Trains _trains;
};

} // namespace station_system
