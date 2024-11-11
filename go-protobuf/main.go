package main

import (
	"fmt"
	"reflect"

	pb "example.com/m/proto"
	"google.golang.org/protobuf/proto"
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
func doEnum() *pb.Enumeration {
	return &pb.Enumeration{
		EyeColor: pb.EyeColor_EYE_COLOR_BLACK,
	}
}
func doOneOf(messages interface{}) {
	switch x := messages.(type) {
	case *pb.Result_Id:
		fmt.Println(messages.(*pb.Result_Id).Id)
	case *pb.Result_Message:
		fmt.Println(messages.(*pb.Result_Message).Message)
	default:
		fmt.Println("message has unexpected types :", x)
	}
}
func doMap() *pb.MapsEx {
	return &pb.MapsEx{
		Ids: map[string]*pb.IdWrapper{
			"mid1": {Id: 1},
			"mid2": {Id: 2},
			"mid3": {Id: 3},
		},
	}
}
func doFile(p proto.Message) {
	path := "simple.bin"
	writeToFile(path, p)
	message := &pb.Simple{}
	readFromFile(path, message)
	fmt.Println(message)
}
func doToJSON(p proto.Message) string {
	jsonString := toJSON(p)

	return jsonString
}
func doFromJSON(jsonString string, t reflect.Type) proto.Message {
	messaage := reflect.New(t).Interface().(proto.Message)
	fromJSON(jsonString, messaage)
	return messaage
}
func main() {
	// fmt.Println("data :", doSimple())
	// fmt.Println("data :", doComplex())
	// fmt.Println("data :", doEnum())

	// doOneOf(&pb.Result_Id{Id: 42})
	// doOneOf(&pb.Result_Message{Message: "Jai shree Ram Bhiya "})

	// // fmt.Println("do map :", doMap())
	// fmt.Println("Data has been written :")
	// doFile(doSimple())

	// jsonString := doToJSON(doSimple())
	// message := doFromJSON(jsonString, reflect.TypeOf(pb.Simple{}))
	// fmt.Println(jsonString)
	// fmt.Println("m :", message)

	// jsonString = doToJSON(doComplex())
	// message = doFromJSON(jsonString, reflect.TypeOf(pb.Complex{}))
	// fmt.Println(jsonString)
	// fmt.Println("m :", message)

	// for checking DiscardOption//
	fmt.Println("test :", doFromJSON(`{"id":42,"unknown":"test"}`, reflect.TypeOf(pb.Simple{})))

}
