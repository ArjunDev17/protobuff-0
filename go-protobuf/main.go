package main

import (
	"fmt"

	pb "example.com/m/proto"
)

func doSimple() *pb.Simple {
	return &pb.Simple{
		Id:         1,
		IsSimple:   true,
		Name:       "Kabbu",
		SimpleList: []int32{1, 2, 3, 4, 5},
	}
}

func doComplex() *pb.Complex {
	return &pb.Complex{
		OneDummy: &pb.Dummy{Id: 12, Name: "Ram Ji"},
		MultipleDummies: []*pb.Dummy{
			{Id: 13, Name: "Lakhan Ji"},
			{Id: 14, Name: "Bharat Ji"},
			{Id: 15, Name: "Shatrudhan Ji"},
		},
	}
}
func main() {
	// fmt.Println("data :", doSimple())

	fmt.Println("data :", doComplex())
}
