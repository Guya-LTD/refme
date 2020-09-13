# build version
FROM ubuntu

RUN apt-get install build-essential autoconf libtool pkg-config
# workdir
WORKDIR /usr/src/app

RUN gcc main.cpp

CMD ['./main']