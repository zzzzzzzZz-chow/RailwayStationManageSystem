#include "include/train_manage.h"
#include <fstream>
#include <iostream>

int main() {
  using namespace station_system;
  ifstream ifs{"test.data"};
  auto t = make_shared<BaseTrainManage>();
  t->load(ifs);
  t->save(cout);
}
