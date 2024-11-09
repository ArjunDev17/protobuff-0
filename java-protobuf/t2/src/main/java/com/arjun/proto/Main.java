package com.arjun.proto;

import com.arjun.proto.complex.COmplexMsg;
import example.complex.ComplexOuterClass;
import simple.SimpleMain;

import java.util.Arrays;

// Press Shift twice to open the Search Everywhere dialog and type `show whitespaces`,
// then press Enter. You can now see whitespace characters in your code.
public class Main {
    public static void main(String[] args) {
        SimpleMain sobj=new SimpleMain();
//        sobj.msg();

        COmplexMsg com=new COmplexMsg();

        ComplexOuterClass.Complex message=ComplexOuterClass.Complex.newBuilder()
                .setOneDummy(com.newDummy(1,"d1"))
                .addAllDummies(
                        Arrays.asList(
                                com.newDummy(2,"d2"),
                                com.newDummy(3,"d3"),
                                com.newDummy(4,"d4")
                        )
                )
                .build();
        System.out.println("copmlex msg :"+message);
    }
}