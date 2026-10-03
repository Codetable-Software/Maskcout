package main
import("encoding/binary";"flag";"os")
func main(){out:=flag.String("o","maskcout.img","output");flag.Parse();f,e:=os.Create(*out);if e!=nil{panic(e)};defer f.Close();buf:=make([]byte,512);copy(buf,"MASKCOUT-IMAGE-V1");binary.LittleEndian.PutUint32(buf[32:],1);if _,e=f.Write(buf);e!=nil{panic(e)}}
