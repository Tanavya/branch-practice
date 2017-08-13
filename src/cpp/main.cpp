//  Copyright © 2017 Exun Clan. All rights reserved.
#include <stdio.h>

#include "hash_table.hpp"

int main() {
  hash_table *t = new hash_table(5);
  test(&t);
  pprint(t);
  return 0;
}
