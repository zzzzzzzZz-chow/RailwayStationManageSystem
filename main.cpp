#include "include/train_manage.h"
#include <fstream>
#include <iostream>

int main() {
  using namespace station_system;
  fstream fs{"test.data", ios::in | ios::out};
  auto t = make_shared<BaseTrainManage>();
  t->load(fs);
  t->save(cout);
  t->save(fs);
}
