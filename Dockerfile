FROM grpc/cxx:1.10

WORKDIR /data

COPY . .

RUN make all && make clean

CMD ["./server"]
