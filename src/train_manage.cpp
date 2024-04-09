#include "../include/train_manage.h"
#include <algorithm>
#include <utility>

namespace station_system {
using namespace std;

TrainManage train_manage(Trains trains) {
  return make_shared<BaseTrainManage>(trains);
}

BaseTrainManage::BaseTrainManage(Trains trains) { _trains = std::move(trains); }

void BaseTrainManage::save(ostream &os) {
  os << _trains.size() << '\n';
  for (auto &it : _trains)
    it->save(os), os << '\n';
}

void BaseTrainManage::load(istream &is) {
  size_t n;
  is >> n;
  for (int i = 0; i < n; ++i) {
    auto tmp = train("", route({}));
    tmp->load(is);
    _trains.push_back(tmp);
  }
  sort(_trains.begin(), _trains.end(),
       [](const Train &r, const Train &l) { return r->code() < l->code(); });
}

Trains BaseTrainManage::search(string_view prefix) {
  auto begin_pos =
      find_if(_trains.begin(), _trains.end(), [prefix](const Train &train) {
        return 0 == train->code().find(prefix);
      });
  auto end_pos =
      find_if(begin_pos, _trains.end(), [prefix](const Train &train) {
        return -1 == train->code().find(prefix);
      });
  return {begin_pos, end_pos};
}

Trains BaseTrainManage::trains() { return _trains; }

} // namespace station_system
