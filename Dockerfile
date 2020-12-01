FROM guyaltd/grpc:boost

#RUN apt-get install -y libboost-graph-dev

WORKDIR /data

COPY . .

RUN make all && make clean

CMD ["./server"]
