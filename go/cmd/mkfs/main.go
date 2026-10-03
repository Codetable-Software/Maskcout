package main
import("encoding/binary";"flag";"os")
func main(){out:=flag.String("o","maskfs.img","output");flag.Parse();f,e:=os.Create(*out);if e!=nil{panic(e)};defer f.Close();b:=make([]byte,4096);copy(b,"MASKFS1");binary.LittleEndian.PutUint32(b[8:],4096);binary.LittleEndian.PutUint64(b[16:],1024);if _,e=f.Write(b);e!=nil{panic(e)}}
