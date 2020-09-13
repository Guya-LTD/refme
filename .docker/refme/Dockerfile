# build version
FROM ubuntu:bionic

RUN apt-get update && \
    apt-get install -y cmake

# workdir
WORKDIR /usr/src/app

RUN git clone --recurse-submodules -b v1.31.0 https://github.com/grpc/grpc

RUN cd grpc

RUN git submodule update --init

RUN mkdir -p cmake/build

RUN cd cmake/build

RUN cmake ../..

RUN make

CMD ['./main']