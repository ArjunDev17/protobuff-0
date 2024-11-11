package main

import (
	"fmt"
	"io/ioutil"
	"log"

	"google.golang.org/protobuf/proto"
	// "example.com/m/proto"
)

func writeToFile(fname string, pb proto.Message) {
	out, err := proto.Marshal(pb)

	if err != nil {
		log.Fatalln("can't serialoze to bytes ", err)
	}
	if err = ioutil.WriteFile(fname, out, 0644); err != nil {
		log.Fatalln("Can't write to file ", err)
		return
	}
	fmt.Println("data has written")
}
func readFromFile(fname string, pb proto.Message) {
	in, err := ioutil.ReadFile(fname)
	if err != nil {
		log.Fatalln("can't read file", err)
	}
	if err := proto.Unmarshal(in, pb); err != nil {
		fmt.Println("could't unmarsheld :", err)
	}

}
