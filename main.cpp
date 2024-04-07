#include "include/train_manage.h"
#include <fstream>
#include <iostream>

int main() {
  using namespace station_system;
  fstream fs{"test.data", ios::in};
  auto t = make_shared<BaseTrainManage>();
  t->load(fs);
  auto t1 = make_shared<BaseTrainManage>(t->search("K1"));
  t1->save(cout);
}
