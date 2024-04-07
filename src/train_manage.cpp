#include "../include/train_manage.h"
#include <algorithm>
#include <utility>

namespace station_system {
using namespace std;

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

} // namespace station_system
