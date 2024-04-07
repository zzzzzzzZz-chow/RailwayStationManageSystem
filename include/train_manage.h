#pragma once

#include "../include/train.h"
#include <memory>

namespace station_system {
using namespace std;

using Trains = vector<Train>;
class BaseTrainManage;
using TrainManage = shared_ptr<BaseTrainManage>;
TrainManage train_manage(Trains = {});

class BaseTrainManage {
public:
  BaseTrainManage(Trains = {});
  void save(ostream &);
  void load(istream &);
  Trains search(string_view);

private:
  Trains _trains;
};

} // namespace station_system
