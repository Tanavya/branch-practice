//  Copyright © 2017 Exun Clan. All rights reserved.
#ifndef HASH_TABLE_H // _BRANCH_PRACTICE_SRC_CPP_HASH_TABLE_HPP
#define HASH_TABLE_H


#define MAXN static_cast<int>(1e6+1)

struct node {
  int key, val;
  node *next;
  node() {
    key = val = 0;
    next = nullptr;
  }
};

struct list {
  node *head;
};

struct hash_table {
  int current_size;
  int nods;
  list table[MAXN];
  explicit hash_table(int size) {
    current_size = size;
    nods = 0;
    for (int i = 0; i < current_size; i++)
      table[i].head = nullptr;
  }
};

// computes the hash function of the key given s, the size of the table
int hash(int key, int s);
// returns pointer to node of key if it exists else NULL
node *hash_contains(hash_table *t, int key);
// deletes key from hash table if it exists
void hash_delete(hash_table *t, int key);
// insert key into hash table
void hash_insert(hash_table *t, int key, int value);
// gets the value of the key in the hash table, NULL if it doesn't exist
int hash_get(hash_table *t, int key);
// initialise the table
void hash_init(hash_table **t, int s);
// test the table's functionality
void test(hash_table **t);
// pretty print the table, print the table visually as a table
void pprint(hash_table *t);

#endif // _BRANCH_PRACTICE_SRC_CPP_HASH_TABLE_HPP