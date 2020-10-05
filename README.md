# REFME
Reference service

## Generating stubs

Exports:
```bash
$ export DIR="$HOME/some/path" OUT_DIR="$HOME/some/path/grpc"
```

```bash
$ protoc -I=$DIR echo.proto \
    --js_out=import_style=commonjs:$OUT_DIR \
    --grpc-web_out=import_style=commonjs,mode=grpcwebtext:$OUT_DIR
```

or

```bash
$ protoc -I=$DIR  \
    --js_out=import_style=commonjs:$OUT_DIR \
    --grpc-web_out=import_style=commonjs,mode=grpcwebtext:$OUT_DIR
```

###