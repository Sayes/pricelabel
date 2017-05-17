#ifndef SINGLETON_H_
#define SINGLETON_H_

#include <cstdio>

template <class T>
class IMktSingleton {
   private:
    IMktSingleton(const IMktSingleton&);
    IMktSingleton& operator=(const IMktSingleton&);

   public:
    static T* get_instance() {
        if (!instance_) {
            printf("IMktSingleton::get_instance()\n");
            instance_ = new T;
        }
        return instance_;
    }

    static void release() {
        if (instance_) {
            printf("IMktSingleton::release()\n");
            delete instance_;
            instance_ = 0;
        }
    }

   protected:
    IMktSingleton() { printf("IMktSingleton::IMktSingleton()\n"); };
    ~IMktSingleton() { printf("IMktSingleton::~IMktSingleton()\n"); };
    static T* instance_;
};

template <class T>
T* IMktSingleton<T>::instance_ = 0;

#endif
