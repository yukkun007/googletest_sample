/* Copyright 2017 yukkun007 */
#ifndef SRC_COMPANY_CORE_HOGE_QUEUE_H_
#define SRC_COMPANY_CORE_HOGE_QUEUE_H_

#include <queue>

namespace company {
namespace hoge {

template <typename E>
class Queue {
 public:
     Queue();
     void Enqueue(const E& element);
     E Dequeue();
     size_t size() const;
 private:
     std::queue<E> elements_;
};

}  // namespace hoge
}  // namespace company

#endif  // SRC_COMPANY_CORE_HOGE_QUEUE_H_